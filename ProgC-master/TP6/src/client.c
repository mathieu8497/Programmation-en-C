/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "client.h"
#include "bmp.h"

/*
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

int envoie_recois_message(int socketfd)
{

  char data[1024];
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // Demandez à l'utilisateur d'entrer un message
  char message[1024];
  printf("Votre message (max 1000 caracteres): ");
  fgets(message, sizeof(message), stdin);
  strcpy(data, "message: ");
  strcat(data, message);

  int write_status = write(socketfd, data, strlen(data));
  if (write_status < 0)
  {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // lire les données de la socket
  int read_status = read(socketfd, data, sizeof(data));
  if (read_status < 0)
  {
    perror("erreur lecture");
    return -1;
  }

  printf("Message recu: %s\n", data);

  return 0;
}

void analyse(char *pathname, char *data, int nb_couleur)//on ajoute en paramètre de la fonction le nombre de couleurs que l'on veut afficher
{
  // compte de couleurs
  couleur_compteur *cc = analyse_bmp_image(pathname);

  int count;
  strcpy(data, "couleurs: ");

  char temp_string[10];
  if (cc->size < nb_couleur)
  {
    sprintf(temp_string, "%d,", cc->size);
  }
  else
  {
    sprintf(temp_string, "%d,", nb_couleur);
  }
  strcat(data, temp_string);

  // choisir nb_couleur couleurs (au lieu de toujours 10)
  for (count = 1; count <= nb_couleur && cc->size - count >= 0; count++)
  {
    char color_string[20]; // Changer la taille du tableau si nécessaire
    if (cc->compte_bit == BITS32)
    {
      sprintf(color_string, "#%02x%02x%02x,", cc->cc.cc24[cc->size - count].c.rouge, cc->cc.cc32[cc->size - count].c.vert, cc->cc.cc32[cc->size - count].c.bleu);
    }
    if (cc->compte_bit == BITS24)
    {
      sprintf(color_string, "#%02x%02x%02x,", cc->cc.cc32[cc->size - count].c.rouge, cc->cc.cc32[cc->size - count].c.vert, cc->cc.cc32[cc->size - count].c.bleu);
    }
    strcat(data, color_string);
  }

  // enlever le dernier virgule
  data[strlen(data) - 1] = '\0';
}


int envoie_couleurs(int socketfd, char *pathname)
{
  char data[1024];

  // Demandez à l'utilisateur d'entrer un message
  char couleur[1024];
  int nb_couleur;
  printf("Combien de couleurs voulez vous afficher dans le cercle ? : ");
  fgets(couleur, sizeof(couleur), stdin);
  nb_couleur = atoi(couleur);
if (nb_couleur > 30)//modifier condition pour afficher jusqu'à 30 couleurs
    {
        printf("Vous devez choisir un nombre de couleurs toujours inférieur ou égal à 30.\n");
        return 1;
    }  
  printf("nombre couleur:%i",nb_couleur);//test nombre couleurs

  memset(data, 0, sizeof(data));
  analyse(pathname, data, nb_couleur);

  int write_status = write(socketfd, data, strlen(data));
  if (write_status < 0)
  {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  return 0;
}

int main(int argc, char **argv)
{
  int socketfd;

  struct sockaddr_in server_addr;

  if (argc < 2)
  {
    printf("usage: ./client chemin_bmp_image\n");
    return (EXIT_FAILURE);
  }

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  // demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0)
  {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }
  if (argc != 2)
  {
    // envoyer et recevoir un message
    envoie_recois_message(socketfd);
  }
  else
  {
    // envoyer et recevoir les couleurs prédominantes
    // d'une image au format BMP (argv[1])
    envoie_couleurs(socketfd, argv[1]);
  }

  close(socketfd);
}
