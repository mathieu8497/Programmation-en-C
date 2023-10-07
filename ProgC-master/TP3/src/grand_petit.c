/*Nom du fichier : grand_petit.c
Objectif : Trouver le numéro le plus grand et le plus petit dans un tableau
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(){
    int tab[100];
    int i = 0;
    int int_petit = INT_MAX;
    int int_grand = INT_MIN;
    int valeurPrecedente = 0;
    srand(time(NULL));
    for (i = 0;i<=100;i++){
        int randomValue = rand() % 1000;
        
        if (randomValue < valeurPrecedente && randomValue < int_petit){
            int_petit = randomValue;
        }
        if (randomValue > valeurPrecedente && randomValue > int_grand){
            int_grand = randomValue;
        }
        tab[i] = randomValue;
        printf("%d\n", tab[i]);
        valeurPrecedente = randomValue;
    }
    printf("Le numéro le plus grand est :%i\n", int_grand);
    printf("Le numéro le plus petit est :%i\n", int_petit);

    return 0;
}