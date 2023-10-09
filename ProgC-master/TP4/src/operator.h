/*Nom du fichier : calcule.h
Objectif : Fichier d'en-tête de operator.c : Mise en place de calculs avec opérateurs
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

void addition(int a, int b) 
{ 
    printf("L'addition donne =%d\n", a + b); 
} 
void multiplication(int a, int b) 
{ 
    printf("La multiplication donne=%d\n", a * b); 
}
void soustraction(int a, int b) 
{ 
    printf("La soustraction donne=%d\n", a - b); 
} 
void divisionEntiere(int a, int b) 
{ 
    printf("La division entière donne=%d\n", a % b); 
} 
void division(int a, int b) 
{ 
    printf("La division donne=%d\n", a / b); 
} 
void et(int a, int b) 
{ 
    printf("Le ET Logique donne=%d\n", a & b); 
} 
void ou(int a, int b) 
{ 
    printf("Le OU Logique donne=%d\n", a | b); 
} 
