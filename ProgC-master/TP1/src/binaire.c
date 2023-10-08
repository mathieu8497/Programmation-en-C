/*Nom du fichier : binaire.c
Objectif : 
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>

int main(){
    int a = 4096;
    int b = 65536;
    int c = 65535;
    int d = 1024;
    int i;
    int valeur = b;
    int NombreBinaire[20];

    //Test avec 4096 a transformer en binaire
    for (i = 0; i < 20; i++){
        NombreBinaire[i] = valeur%2;
        valeur = valeur/2;
        }
    printf("En binaire cela donne : ");
    for (i = 20; i >= 0; i--){
        printf("%i", NombreBinaire[i]);
    }
    return 0;
}