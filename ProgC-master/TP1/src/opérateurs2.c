/*Nom du fichier : operateurs2.c
Objectif : Utiliser l'opérateur switch pour des opérations mathématiques
Auteurs : Mathieu Poirel & Emma Tricquet */

#include <stdio.h>

int main(){
    char op = '&';
    int num1 = 30;
    int num2 = 10;
    int result;
    switch (op) //le calcul depend de op
    {
    case '+':
        result = num1+num2;
        break;

    case '-':
        result = num1-num2;
        break;

    case '*':
        result = num1*num2;
        break;

    case '/':
        result = num1/num2;
        break;

    case '%':
        result = num1%num2;
        break;

    case '&':
        result = num1&num2;
        break;

    case '|':
        result = num1|num2;
        break;
    
    case '~': //je ne sais pas comment rédiger la négation entre 2 nombres
        result = ~num2;
        break;
    
    default:
        break;
    }
    printf("Le resultat de l'operation vaut %i \n",result);
    return 0;
    
}