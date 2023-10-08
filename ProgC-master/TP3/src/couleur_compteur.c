/*Nom du fichier : couleur_compteur.c
Objectif : Compter les couleurs distinctes dans un tableau
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int cpt = 0;
    int i;
    struct couleur {
    unsigned char Rouge;
    unsigned char Vert;
    unsigned char Bleu;
    unsigned char Alpha;
    };

    struct couleur couleur_rgba[100];

    for (i = 0;i<100;i++){
    couleur_rgba[i] = (struct couleur){rand()%256, rand()%256, rand()%256, rand()%256};
    }

    for (cpt=0;cpt<100;cpt++){
        printf("Couleur :%i\n",cpt);
        printf("Rouge :%d\n",couleur_rgba[cpt].Rouge);
        printf("Bleu :%d\n",couleur_rgba[cpt].Vert);
        printf("Vert :%d\n",couleur_rgba[cpt].Bleu);
        printf("Alpha :%d\n",couleur_rgba[cpt].Alpha);
        printf("\n");
    }

    for (size_t i = 0; i < count; i++)
    {
        for (size_t i = 0; i < count; i++)
        {
            
        }
        
    }
    
    
    return 0;
}