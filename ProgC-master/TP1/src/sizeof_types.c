/*Nom du fichier : sizeof_types.c
Objectif : Définir les tailles des types de base
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>

int main(){
    sizeof(char);
    printf("sizeof (char) is %lu\n", sizeof (char));

    sizeof(short);
    printf("sizeof (short) is %lu\n", sizeof (short));

    sizeof(int);
    printf("sizeof (int) is %lu\n", sizeof (int));

    sizeof(long int);
    printf("sizeof (long int) is %lu\n", sizeof (long int));

    sizeof(long long int);
    printf("sizeof (long long int) is %lu\n", sizeof (long long int));

    sizeof(float);
    printf("sizeof (float) is %lu\n", sizeof (float));

    sizeof(double);
    printf("sizeof (double) is %lu\n", sizeof (double));

    sizeof(long double);
    printf("sizeof (long double) is %lu\n", sizeof (long double));
    
    return 0;
}