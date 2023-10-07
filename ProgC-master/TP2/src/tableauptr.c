/*Nom du fichier : tableauptr.c
Objectif : Manipuler des Tableaux avec des Pointeurs
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tabEntiers[10];
    float tabFlottants[10];
    int (*ptTabEnt)[10]; //pointeur
    float (*ptTabFlot)[10]; //pointeur

    int i;
    srand(time(NULL));

    //nombres aléatoires générés
    printf("tableaux de base \n");
    for (i = 0;i<10;i++){
        tabEntiers[i] = rand() % 100;
        tabFlottants[i] = rand() % 100;
        printf("%i \n%f \n \n", tabEntiers[i],tabFlottants[i]);
    }

    //multiplier par 3
    
    // printf("tableaux multipliés \n");
    // for (i = 0; i <10; i++)
    // {
    //     tabEntiers[*ptTabEnt+i]=tabEntiers[*ptTabEnt+i]*3;
    //     tabFlottants[*ptTabFlot+i]=tabFlottants[*ptTabFlot+i]*3;

    //     printf("%i \n%f \n \n", tabEntiers[i],tabFlottants[i]);
    //}
    
    

    return 0;
}