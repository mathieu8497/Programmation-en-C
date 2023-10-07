// Nom du fichier : boucles.c
// Objectif : Affichage d'un triangle rectangle avec des boucles
// Auteurs : Mathieu Poirel & Emma Tricquet

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int compteur = 5;
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
    return 0;
}