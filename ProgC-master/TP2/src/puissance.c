/*Nom du fichier : puissance.c
Objectif : Calculer la puissance en C
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int c = 0;
    int result = 1;
    //On fait une boucle for qui fait autant d'itérations que notre puissance donnée
    for (c=0; c<b;c++){
        result = result * a;
    }
    printf("%i\n",result);
    return 0;
}