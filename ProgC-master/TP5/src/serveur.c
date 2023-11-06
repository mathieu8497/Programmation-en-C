/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <unistd.h>

#include "serveur.h"

int socketfd; // Déclaration globale de socketfd

/**
 * Cette fonction envoie un message (*data) au client (client_socket_fd)
 * @param client_socket_fd : Le descripteur de socket du client.
 * @param sdata : Le message à envoyer.
 * @return EXIT_SUCCESS en cas de succès, EXIT_FAILURE en cas d'erreur.
 */
int renvoie_message(int client_socket_fd, char *data)
{
  int data_size = write(client_socket_fd, (void *)data, strlen(data));

  if (data_size < 0)
  {
    perror("Erreur d'écriture");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}

/**
 * Cette fonction lit les données envoyées par le client,
 * et renvoie un message en réponse.
 * @param socketfd : Le descripteur de socket du serveur.
 * @param data : Le message.
 * @return EXIT_SUCCESS en cas de succès, EXIT_FAILURE en cas d'erreur.
 */
int recois_envoie_message(int client_socket_fd, char *data)
{
  printf("Message reçu: %s\n", data);
  char code[10];
  if (sscanf(data, "%9s:", code) == 1) // Assurez-vous que le format est correct
  {
    if (strcmp(code, "message:") == 0)
    {
      // Demande à l'utilisateur d'entrer un message
      char message[1024];
      printf("Votre message (max 1000 caractères): ");
      fgets(message, sizeof(message), stdin);

      // Construit le message avec une étiquette "message: "
      strcpy(data, "\nRéponse: ");
      strcat(data, message);

      // Envoie le message au client
      int write_status = write(client_socket_fd, data, strlen(data));
      if (write_status < 0)
      {
        perror("Erreur d'écriture");
        return -1;
      }
      // Réinitialisation de l'ensemble des données
      memset(data, 0, sizeof(data));

      return 0; // Succès
    }
  }

  return (EXIT_SUCCESS);
}

int recois_numeros_calcule(int client_socket_fd, char *data)//fonction qui permet de calculer les opérations
{
  char operateur;
  int num1, num2;
  int resultat;
  sscanf(data + 8, "%c %d %d", &operateur, &num1, &num2);
  switch (operateur)//on fait un switch pour chaque opérateur
  {
  case '+':
    resultat = num1 + num2;
    break;

  case '-':
    resultat = num1 - num2;
    break;

  case '*':
    resultat = num1 * num2;
    break;

  case '%':
    resultat = num1 % num2;
    break;

  case '/':
    resultat = num1 / num2;
    break;

  case '&':
    resultat = num1 & num2;
    break;

  case '|':
    resultat = num1 | num2;
    break;

  default:
    break;
  }


  printf("%i \n", resultat);
  char charValue[10];
  sprintf(charValue, "%d", resultat);
  // Construit le message avec une étiquette "calcule: "
  strcpy(data, "\ncalcule: ");
  strcat(data, charValue);


  // Envoie le message au client
  int write_status = write(client_socket_fd, data, strlen(data));
  if (write_status < 0)
  {
    perror("Erreur d'écriture");
    return -1;
  }
  // Réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  return 0; // Succès

  return (EXIT_SUCCESS);
}
/**
 * Gestionnaire de signal pour Ctrl+C (SIGINT).
 * @param signal : Le signal capturé (doit être SIGINT pour Ctrl+C).
 */
void gestionnaire_ctrl_c(int signal)
{
  printf("\nSignal Ctrl+C capturé. Sortie du programme.\n");

  // Fermer le socket si ouvert
  if (socketfd != -1)
  {
    close(socketfd);
  }

  exit(0); // Quitter proprement le programme.
}

/**
 * Gère la communication avec un client spécifique.
 *
 * @param client_socket_fd Le descripteur de socket du client à gérer.
 */
void gerer_client(int client_socket_fd)
{
  char data[1024];

  while (1)
  {
    // Réinitialisation des données
    memset(data, 0, sizeof(data));

    // Lecture des données envoyées par le client
    int data_size = read(client_socket_fd, data, sizeof(data));

    if (data_size <= 0)
    {
      // Erreur de réception ou déconnexion du client
      if (data_size == 0)
      {
        // Le client a fermé la connexion proprement
        printf("Client déconnecté.\n");
      }
      else
      {
        perror("Erreur de réception");
      }

      // Fermer le socket du client et sortir de la boucle de communication
      close(client_socket_fd);
      break; // Sortir de la boucle de communication avec ce client
    }
    char code[10];
    if (sscanf(data, "%8s", code) == 1)
    {
      if (strcmp(code, "calcule:") == 0)//condition qui permet de savoir si le client veut faire un calcul ou juste envoyer un message
      {
        printf("Calcul en cours: %s\n", data);
        recois_numeros_calcule(client_socket_fd, data);
      }
      else
      {
        recois_envoie_message(client_socket_fd, data);
      }
    }
  }
}

/**
 * Configuration du serveur socket et attente de connexions.
 */

int main()
{

  int bind_status;                // Statut de la liaison
  struct sockaddr_in server_addr; // Structure pour l'adresse du serveur
  int option = 1;                 // Option pour setsockopt

  // Création d'une socket
  socketfd = socket(AF_INET, SOCK_STREAM, 0);

  // Vérification si la création de la socket a réussi
  if (socketfd < 0)
  {
    perror("Impossible d'ouvrir une socket");
    return -1;
  }

  // Configuration de l'option SO_REUSEADDR pour permettre la réutilisation de l'adresse du serveur
  setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

  // Initialisation de la structure server_addr
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);       // Port d'écoute du serveur
  server_addr.sin_addr.s_addr = INADDR_ANY; // Accepter les connexions de n'importe quelle adresse

  // Liaison de l'adresse à la socket
  bind_status = bind(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));

  // Vérification si la liaison a réussi
  if (bind_status < 0)
  {
    perror("bind");
    return (EXIT_FAILURE);
  }

  // Enregistrement de la fonction de gestion du signal Ctrl+C
  signal(SIGINT, gestionnaire_ctrl_c);

  // Mise en attente de la socket pour accepter les connexions entrantes jusqu'à une limite de 10 connexions en attente
  listen(socketfd, 10);

  printf("Serveur en attente de connexions...\n");

  struct sockaddr_in client_addr;                     // Structure pour l'adresse du client
  unsigned int client_addr_len = sizeof(client_addr); // Longueur de la structure client_addr
  int client_socket_fd;                               // Descripteur de socket du client

  // Boucle infinie
  while (1)
  {
    // Nouvelle connexion cliente
    client_socket_fd = accept(socketfd, (struct sockaddr *)&client_addr, &client_addr_len);

    if (client_socket_fd < 0)
    {
      perror("accept");
      continue; // Continuer à attendre d'autres connexions en cas d'erreur
    }

    // Créer un processus enfant pour gérer la communication avec le client
    pid_t child_pid = fork();

    if (child_pid == 0)
    {
      // Code du processus enfant
      close(socketfd); // Fermer la socket du serveur dans le processus enfant
      gerer_client(client_socket_fd);
      exit(0); // Quitter le processus enfant
    }
    else if (child_pid < 0)
    {
      perror("fork");
      close(client_socket_fd); // Fermer le socket du client en cas d'erreur
    }
    else
    {
      // Code du processus parent
      close(client_socket_fd); // Fermer le socket du client dans le processus parent
    }
  }

  // Le programme ne devrait jamais atteindre cette ligne dans la boucle infinie
  return 0;
}
