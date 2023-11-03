/*Nom du fichier : calcule.c
Objectif :
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[])
{

    // saisie protégée (il faudra s'assurer d'un entier)
    if (argc != 4)
    {
        printf("Toutes les informations ne sont pas requises pour effectuer l'opération \n");
    }
    else
    {
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        int resultat;

        switch (*argv[1])
        {
        case '+':
            resultat = addition(num1, num2);
            break;

        case '-':
            resultat = soustraction(num1, num2);
            break;

        case '*':
            resultat = multiplication(num1, num2);
            break;

        case '%':
            resultat = divisionEntiere(num1, num2);
            break;

        case '/':
            resultat = division(num1, num2);
            break;

        case '&':
            resultat = et(num1, num2);
            break;

        case '|':
            resultat = ou(num1, num2);
            break;

        default:
            break;
        }

        printf("%i \n", resultat);
    }

    return (0);
}