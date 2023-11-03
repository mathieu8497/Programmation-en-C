#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Vous devez indiquer le fichier dans lequel vous voulez rechercher une phrase en 2ème argument.\n");
        return 1;
    }
    char *fichier = argv[1];
    char phrase[1000];
    printf("Entrez la phrase que vous souhaitez rechercher : \n");
    scanf(" %999[^\n]", phrase);

    FILE *file = fopen(fichier, "r");
    if (file == NULL)
    {
        perror("Erreur en ouvrant le fichier");
        return 1;
    }

    char ligne[1000];
    int ligne_num = 1;

    while (fgets(ligne, sizeof(ligne), file) != NULL)
    {
        int compteur_phrase = 0;
        char *pos = ligne;

        while ((pos = strstr(pos, phrase)) != NULL)
        {
            pos += strlen(phrase);
            compteur_phrase++;
        }

        if (compteur_phrase > 0)
        {
            printf("Ligne %d, %d fois\n", ligne_num, compteur_phrase);
        }

        ligne_num++;
    }

    fclose(file);
    return 0;
}