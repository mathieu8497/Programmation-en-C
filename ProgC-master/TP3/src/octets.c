/*Nom du fichier : octets.c
Objectif : Afficher des octets de différents types de données
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){

    int entier;
    int *ptrEntier = &entier;

    printf("Octets de int : \n %p \n",ptrEntier);

    short a;
    short *ptr_a = &a;

    printf("Octets de short : \n %p \n",ptr_a);

    long int b;
    long int *ptr_b = &b;

    printf("Octets de long int : \n %p \n",ptr_b);

    float c;
    float *ptr_c = &c;

    printf("Octets de float : \n %p \n",ptr_c);

    double d;
    double *ptr_d = &d;

    printf("Octets de double : \n %p \n",ptr_d);
    
    long double ld;
    long double *ptr_ld = &ld;

    printf("Octets de long double : \n %p \n",ptr_ld);
    

    return 0;
}