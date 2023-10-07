/*Nom du fichier : ptrvariables.c
Objectif : Manipuler des Variables de Types de Base avec des Pointeurs
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    char valeur = "P";
    short valeur1 = 18;
    int valeur2 = 18;
    long int valeur3 = 18434;
    long long int valeur4 = 18535656;
    float valeur5 = 18.3;
    double valeur6 = 18.4545;
    long double valeur7 = 18.454464646;

    printf("\nAvant Manipulation :\n");
    printf("Adresse de valeur(char) : %p, Valeur de c : 0x%x\n", (void*)&valeur, valeur);
    printf("Adresse de valeur(short) : %p, Valeur de c : 0x%x\n", (void*)&valeur1, valeur1);
    printf("Adresse de valeur(int) : %p, Valeur de c : 0x%x\n", (void*)&valeur2, valeur2);
    printf("Adresse de valeur(long int) : %p, Valeur de c : 0x%lx\n", (void*)&valeur3, valeur3);
    printf("Adresse de valeur(long int int) : %p, Valeur de c : 0x%llx\n", (void*)&valeur4, valeur4);
    printf("Adresse de valeur(float) : %p, Valeur de c : 0x%x\n", (void*)&valeur5, valeur5);
    printf("Adresse de valeur(double) : %p, Valeur de c : 0x%llx\n", (void*)&valeur6, valeur6);
    printf("Adresse de valeur(long double) : %p, Valeur de c : 0x%llx\n", (void*)&valeur7, valeur7);

    char *ptr_valeur = &valeur;
    short *ptr_valeur1 = &valeur1;
    int *ptr_valeur2 = &valeur2;
    long int *ptr_valeur3 = &valeur3;
    long long int *ptr_valeur4 = &valeur4;
    float *ptr_valeur5 = &valeur5;
    double *ptr_valeur6 = &valeur6;
    long double *ptr_valeur7 = &valeur7;

    *ptr_valeur = "X";
    *ptr_valeur = 456;
    *ptr_valeur = 12;
    *ptr_valeur = 1233;
    *ptr_valeur = 1545464;
    *ptr_valeur = 2.2;
    *ptr_valeur = 2.222;
    *ptr_valeur = 2.56464646;

    printf("\nAprès Manipulation :\n");
    printf("Adresse de valeur(char) : %p, Valeur de c : 0x%x\n", (void*)&valeur, valeur);
    printf("Adresse de valeur(short) : %p, Valeur de c : 0x%x\n", (void*)&valeur1, valeur1);
    printf("Adresse de valeur(int) : %p, Valeur de c : 0x%x\n", (void*)&valeur2, valeur2);
    printf("Adresse de valeur(long int) : %p, Valeur de c : 0x%lx\n", (void*)&valeur3, valeur3);
    printf("Adresse de valeur(long int int) : %p, Valeur de c : 0x%llx\n", (void*)&valeur4, valeur4);
    printf("Adresse de valeur(float) : %p, Valeur de c : 0x%x\n", (void*)&valeur5, valeur5);
    printf("Adresse de valeur(double) : %p, Valeur de c : 0x%llx\n", (void*)&valeur6, valeur6);
    printf("Adresse de valeur(long double) : %p, Valeur de c : 0x%llx\n", (void*)&valeur7, valeur7);

    return 0;
}