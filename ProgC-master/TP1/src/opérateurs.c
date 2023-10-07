// Nom du fichier : operateurs.c
// Objectif : Utiliser des opérateurs arithmétiques et logiques
// Auteurs : Mathieu Poirel & Emma Tricquet

#include <stdio.h>

int main(){
    int a = 16, b = 3;

    int add = a+b;
    printf("L'addition vaut %i\n", add );

    int soust = b-a;
    printf("La soustraction vaut %i\n", soust );

    int multip = a*b;
    printf("La multiplication vaut %i\n", multip);

    int div = a/b;
    printf("La division vaut %i\n", div);

    int modul = a%b;
    printf("Le reste de la division vaut %i\n", modul);

    int result1 = a==b;
    printf("La comparaison a vaut b est %i\n", result1);

    int result2 = a>b;
    printf("La comparaison a>b est %i\n", result2);

    return 0;
}