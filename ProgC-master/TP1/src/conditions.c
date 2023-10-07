/*Nom du fichier : conditions.c
Objectif : Utiliser des conditions et boucles avec divisibilité
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>

int main(){
    int max = 1001;
    int nombre = 0;
    
    //premiere condition : Sont divisibles par 2 et 15 simultanément.
    printf("Premiere condition : nombres divisibles par 2 et 15 simultanément \n");
    for (nombre=0;nombre<max;nombre++){
        if((nombre%2==0) && (nombre%15==0)){
            printf("%i \n",nombre);
            continue;
        }
    }

    //seconde condition : Sont divisibles par 103 ou 107.
    printf("\nSeconde condition : Sont divisibles par 103 ou 107. \n");
    for (nombre=0;nombre<max;nombre++){
        if ((nombre%103==0) || (nombre%107==0)){
            printf("%i \n",nombre);
            continue;
        }
    }

    //troisième condition : Sont divisibles par 7 ou 5, mais ne sont pas divisibles par 3.
    printf("\nTroisième condition : Sont divisibles par 7 ou 5, mais ne sont pas divisibles par 3 :\n");
    for (nombre=0;nombre<max;nombre++){
        if (nombre%3==0){
            continue; //ne teste pas l'instruction if si c'est divisible par 3
        }
        if ((nombre%103==0) || (nombre%107==0)){
            printf("%i \n",nombre);
        }
        
    }
    return 0;
}