/*Nom du fichier : operator.c
Objectif : Mise en place de calculs avec opérateurs
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int operations(char op, int num1, int num2)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
        break;

    case '-':
        return num1 - num2;
        break;

    case '*':
        return num1 * num2;
        break;

    case '%':
        return num1 % num2;
        break;

    case '/':
        return num1 / num2;
        break;

    case '&':
        return num1 & num2;
        break;

    case '|':
        return num1 | num2;
        break;
    
    default:
        break;
    }
}