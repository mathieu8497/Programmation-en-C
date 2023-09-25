#include <stdio.h>
#include <string.h>


int main(){
    int cpt = 0;
    struct couleur {
    char Rouge[50];
    char Vert[50];
    char Bleu[50];
    char Alpha[50];
    };

    struct couleur couleur_rgba[135];

    strcpy(couleur_rgba[0].Rouge, "5");
    strcpy(couleur_rgba[0].Vert, "3");
    strcpy(couleur_rgba[0].Bleu, "8");
    strcpy(couleur_rgba[0].Alpha, "6");

    strcpy(couleur_rgba[1].Rouge, "85");
    strcpy(couleur_rgba[1].Vert, "65");
    strcpy(couleur_rgba[1].Bleu, "54");
    strcpy(couleur_rgba[1].Alpha, "75");

    strcpy(couleur_rgba[2].Rouge, "85");
    strcpy(couleur_rgba[2].Vert, "32");
    strcpy(couleur_rgba[2].Bleu, "03");
    strcpy(couleur_rgba[2].Alpha, "58");

    strcpy(couleur_rgba[3].Rouge, "74");
    strcpy(couleur_rgba[3].Vert, "77");
    strcpy(couleur_rgba[3].Bleu, "65");
    strcpy(couleur_rgba[3].Alpha, "98");

    strcpy(couleur_rgba[4].Rouge, "32");
    strcpy(couleur_rgba[4].Vert, "03");
    strcpy(couleur_rgba[4].Bleu, "52");
    strcpy(couleur_rgba[4].Alpha, "59");

    for (cpt=0;cpt<10;cpt++){
        printf("Couleur :%i\n",cpt);
        printf("Rouge :%s\n",couleur_rgba[cpt].Rouge);
        printf("Bleu :%s\n",couleur_rgba[cpt].Vert);
        printf("Vert :%s\n",couleur_rgba[cpt].Bleu);
        printf("Alpha :%s\n",couleur_rgba[cpt].Alpha);
        printf("\n");
    }
    return 0;
}