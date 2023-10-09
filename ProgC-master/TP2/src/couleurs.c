/*Nom du fichier : couleurs.c
Objectif : Représenter des couleurs au format RGBA (rouge, vert, bleu, alpha).
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <string.h>


int main(){
    int cpt = 0;
    //Définition de la structure d'une couleur type
    struct couleur {
    unsigned char Rouge;
    unsigned char Vert;
    unsigned char Bleu;
    unsigned char Alpha;
    };
    //Création de notre structure en rajoutant 10 élements(couleur) à notre structure
    struct couleur couleur_rgba[10];

    couleur_rgba[0] = (struct couleur){0xEF, 0x78, 0x12, 0xFF};
    couleur_rgba[1] = (struct couleur){255, 255, 255, 255};
    couleur_rgba[2] = (struct couleur){75, 78, 12, 0xFF};
    couleur_rgba[3] = (struct couleur){45, 58, 32, 0};
    couleur_rgba[4] = (struct couleur){251, 35, 12, 11};
    couleur_rgba[5] = (struct couleur){85, 74, 96, 25};
    couleur_rgba[6] = (struct couleur){14, 13, 25, 85};
    couleur_rgba[7] = (struct couleur){252, 85, 185, 196};
    couleur_rgba[8] = (struct couleur){253, 56, 165, 174};
    couleur_rgba[9] = (struct couleur){254, 45, 125, 185};
    
    //On affiche chacune des couleurs avec leurs caracteristiques

    for (cpt=0;cpt<10;cpt++){
        printf("Couleur :%i\n",cpt);
        printf("Rouge :%d\n",couleur_rgba[cpt].Rouge);
        printf("Bleu :%d\n",couleur_rgba[cpt].Vert);
        printf("Vert :%d\n",couleur_rgba[cpt].Bleu);
        printf("Alpha :%d\n",couleur_rgba[cpt].Alpha);
        printf("\n");
    }
    return 0;
}