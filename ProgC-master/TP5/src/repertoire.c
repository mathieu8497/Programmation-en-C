#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int lire_dossier(char *nom_repertoire)
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

int main(int argc, char *argv[])
{
    int y;
    if (argc != 2)
    {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    char *nom_repertoire = argv[1];
    y = lire_dossier(nom_repertoire);

    return y;
}