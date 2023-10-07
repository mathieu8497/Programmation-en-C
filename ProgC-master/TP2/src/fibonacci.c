/*Nom du fichier : fibonacci.c
Objectif : Générer la suite de Fibonacci en langage C
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    int un_2 = 0;
    int un_1= 1;
    int un =0 ;
    int n = 7;
    int x = 0;
    for (x=0;x<n;x++){
        un_2 = un_1;
        un_1 = un;
        printf("%i\n", un);
        un = un_1 + un_2;
    }
    
    return 0;
}