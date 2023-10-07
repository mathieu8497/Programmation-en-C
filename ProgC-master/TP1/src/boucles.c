/*Nom du fichier : boucles.c
Objectif : Affichage d'un triangle rectangle avec des boucles
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int compteur = 5;

    // avec la boucle for
    for (a=0; a < compteur;a++){
        if (a<compteur-1){
            printf("*");
            for (b=0; b < a;b++){
                if (b>=0 && b<a-1){
                    printf("#");
                }
                else {
                    printf("*");
                    
                }
            }
        }

        else {
            for (c=0; c < compteur;c++){
            printf("*");
            }
        }
        printf("\n");
    }


    // avec la boucle while
    printf("\n\n\n");
    int d = 0;
    int e = 0;
    int f = 0;

    while (d<compteur)
    {
        if (d<compteur-1){
            printf("*");
            for (e=0; e < d;e++){
                if (e>=0 && e<d-1){
                    printf("#");
                }
                else {
                    printf("*");
                    
                }
            }
        }

        else {
            for (f=0; f < compteur;f++){
            printf("*");
            }
        }
        printf("\n");
        d++;
    }
        
    
    return 0;
}