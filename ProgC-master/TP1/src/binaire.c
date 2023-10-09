/*Nom du fichier : binaire.c
Objectif : Affichage d'un nombre en format binaire
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>

int main(){
    int a = 4096;
    int b = 65536;
    int c = 65535;
    int d = 1024;
    int i;
    int valeur = a;
    int NombreBinaire[20];

    //On realise des divisions entieres successives pour observer le reste et donc determiner sa valeur en binaire
    for (i = 0; i < 20; i++){
        NombreBinaire[i] = valeur%2;
        valeur = valeur/2;
        }
    printf("En binaire cela donne : \n");
    //On parcourt le résultat à l'envers pour obtenir notre valeur en binaire mais dans le bons sens
    for (i = 20; i >= 0; i--){
        printf("%i", NombreBinaire[i]);
    }
    return 0;
}