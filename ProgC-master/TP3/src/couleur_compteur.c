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

    //affichage de chaque couleur
    for (cpt=0;cpt<100;cpt++){
        printf("Couleur : %i\n",cpt);
        printf("Rouge : 0x%X\n",couleur_rgba[cpt].Rouge);
        printf("Bleu : 0x%X\n",couleur_rgba[cpt].Bleu);
        printf("Vert : 0x%X\n",couleur_rgba[cpt].Vert);
        printf("Alpha : 0x%X\n",couleur_rgba[cpt].Alpha);
        printf("\n");
    }

    int cpt2;
    int cpt3;
    int cptCouleur;

    for (cpt2=0;cpt2<100;cpt2++) // parcourir la structure
    {
        cptCouleur = 0;
        for (cpt3=0;cpt3<100;cpt3++) //parcourir la structure une deuxième fois
        {
            if ((couleur_rgba[cpt2].Alpha==couleur_rgba[cpt3].Alpha)&&(couleur_rgba[cpt2].Rouge==couleur_rgba[cpt3].Rouge)&&(couleur_rgba[cpt2].Vert==couleur_rgba[cpt3].Vert)&&(couleur_rgba[cpt2].Bleu==couleur_rgba[cpt3].Bleu))
            {
                cptCouleur ++; // compte le nombre d'occurence
                
            }
            
        }

        printf("0x%X 0x%X 0x%X 0x%X : %i \n\n",couleur_rgba[cpt2].Rouge, couleur_rgba[cpt2].Bleu, couleur_rgba[cpt2].Vert,couleur_rgba[cpt2].Alpha,cptCouleur);
    }
    
    
    return 0;
}