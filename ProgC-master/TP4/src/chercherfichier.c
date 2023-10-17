#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

// Demandez à l'utilisateur de saisir le nom du fichier dans lequel il souhaite effectuer la recherche.
// Demandez à l'utilisateur de saisir la phrase qu'il souhaite rechercher.
// Ouvrez le fichier en utilisant les fonctions de lecture de fichiers en C (par exemple, open, read, fopen, fgets).
// Parcourez chaque ligne du fichier et comptez combien de fois la phrase recherchée apparaît dans chaque ligne.
// Si la phrase est présente dans une ligne, affichez le numéro de la ligne et le nombre de fois qu'elle apparaît dans cette ligne.
// Répétez le processus pour toutes les lignes du fichier.
// Fermez le fichier après avoir terminé.
// Si le fichier n'existe pas, affichez un message d'erreur.

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