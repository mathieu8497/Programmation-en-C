#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

// Fonction lire fichier

void lire_fichier(char *nom_de_fichier)
{
    char contenu[1000];
    printf("Contenu du fichier : %s\n", nom_de_fichier);
    int fd = open(nom_de_fichier, O_RDONLY);
    int taille = read(fd, contenu, 1000);
    for (int compteur = 0; compteur < taille; compteur++)
    {
        printf("%c", contenu[compteur]);
    }
    close(fd);
}

// Fonction ecrire fichier

void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    int fd = open(nom_de_fichier, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
    write(fd, message, sizeof(message));
    printf("Le message a été écrit dans le fichier %s\n", nom_de_fichier);
}

// Programme principal
int main()
{
    int choix;
    char nom_de_fichier[50];
    char message[1000];

    printf("Que souhaitez-vous faire ? : \n 1. Lire un fichier \n 2. Écrire dans un fichier \n");
    printf("Votre choix : \n");
    scanf("%d", &choix);

    if (choix == 1)
    {
        printf("Entrez le nom du fichier à lire : \n");
        scanf(" %49s", nom_de_fichier);
        lire_fichier(nom_de_fichier);
    }
    else if (choix == 2)
    {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : \n");
        scanf(" %49s", nom_de_fichier);
        printf("Entrez le message à écrire : \n");
        scanf(" %999s", message);
        ecrire_dans_fichier(nom_de_fichier, message);
    }
    else
    {
        printf("Erreur : Entrez 1 ou 2 \n");
    }
    return 0;
}
