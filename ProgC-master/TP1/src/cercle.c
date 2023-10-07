/*Nom du fichier : cercle.c
Objectif : Calculer l'aire et le périmètre d'un cercle en langage C
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>
#include <math.h>


int main(){
    float rayon = 3.1;
    float aire = M_PI*rayon*rayon;
    float perimetre = 2*M_PI*rayon;
    printf("Le périmètre est %f\n",perimetre);
    printf("L'aire est %f\n",aire);
    return 0;
}