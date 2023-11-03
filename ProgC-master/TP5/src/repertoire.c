/*Nom du fichier : repertoire.c
Objectif : Ouvrir un dossier et lire les fichiers dedans
Auteurs : Mathieu Poirel & Emma Tricquet */

#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


/* Fonction Lecture de dossier*/
int lire_dossier(char const *nom_repertoire)
{
    DIR *dirp = opendir(nom_repertoire);
    struct dirent *ent;
    if (dirp == NULL)
    {
        perror("opendir");
        return (EXIT_FAILURE);
    }
    while (1)
    {
        ent = readdir(dirp);
        if (ent == NULL)
        {
            break;
        }
        printf("%s\n", ent->d_name);
    }
    closedir(dirp);
    return (EXIT_SUCCESS);
}

/*Fonction récursive lecture de dossier*/
int lire_dossier_recursif(char const *NomRepertoire2)
{
    DIR *dirp = opendir(NomRepertoire2);
    struct dirent *ent;
    if (dirp == NULL)
    {
        perror("opendir");
        return (EXIT_FAILURE);
    }
    while ((ent = readdir(dirp)) != NULL)
    {
        printf("%s\n", ent->d_name);
        if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
        {
            continue;
        }
        if (ent->d_type == DT_DIR)
        {
            char chemin[400];
            snprintf(chemin, sizeof(chemin), "%s/%s", NomRepertoire2, ent->d_name);
            lire_dossier_recursif(chemin);
        }
    }
    closedir(dirp);
    return (EXIT_SUCCESS);
}

/* fonction principale*/
int main(int argc, char *argv[])
{
    int y;
    if (argc != 2)
    {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    char *nom_repertoire = argv[1];
    // Exo 1
    // y = lire_dossier(nom_repertoire);
    // Exo 2
    y = lire_dossier_recursif(nom_repertoire);

    return y;
}