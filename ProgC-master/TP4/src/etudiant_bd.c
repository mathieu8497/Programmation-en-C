/*Nom du fichier : etudiant_bd.c
Objectif :Gérer une base de données d'étudiants en enregistrant leurs noms, prénoms, adresses et notes dans un fichier texte etudiant.txt
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

// Fonction ecrire fichier

void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    int fd = open(nom_de_fichier, O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
    write(fd, message, strlen(message));
    write(fd, "\n", 1); // Pour avoir une ligne par étudiant
    close(fd);
    printf("Le message a été écrit dans le fichier %s\n", nom_de_fichier);
}

// Programme principal
int main()
{
    int compteur = 5;

    // Définition de la structure d'un étudiant
    struct etudiant
    {
        char prenom[50];
        char nom[50];
        char adresse[100];
        int note1;
        int note2;
    };

    // Demande des informations des étudiants
    for (int a = 1; a <= compteur; a++)
    {
        struct etudiant etud; // Créer une structure étudiant pour stocker les données

        printf("Entrez les détails de l'étudiant.e %i :\n", a);
        printf("Nom : ");
        scanf("%s", etud.nom); // Utiliser %s pour lire une chaîne de caractères
        printf("Prénom : ");
        scanf("%s", etud.prenom);
        printf("Adresse : ");
        scanf("%s", etud.adresse);
        printf("Note 1 : ");
        scanf("%d", &etud.note1); // Utiliser %d pour lire un entier
        printf("Note 2 : ");
        scanf("%d", &etud.note2);

        // Convertir les données de l'étudiant en une chaîne de caractères
        char message[256];
        sprintf(message, "Nom: %s, Prénom: %s, Adresse: %s, Note 1: %d, Note 2: %d",
                etud.nom, etud.prenom, etud.adresse, etud.note1, etud.note2);

        // Appeler la fonction pour écrire les données dans le fichier
        ecrire_dans_fichier("etudiant.txt", message);
    }

    return 0;
}