#include <stdio.h>
#include "operator.h"
#include "liste.h"

int main()
{
    
    //Exo 1
    int num1;
    int num2;
    int resultat;
    char op;

    printf("Entrez num1 : \n");
    scanf("%d", &num1);
    printf("Entrez num2 : \n");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, &, |, ~) : \n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        resultat= addition(num1,num2);
        break;

    case '-':
        resultat= soustraction(num1,num2);
        break;

    case '*':
        resultat= multiplication(num1,num2);
        break;

    case '%':
        resultat= divisionEntiere(num1,num2);
        break;

    case '/':
        resultat= division(num1,num2);
        break;

    case '&':
        resultat= et(num1,num2);
        break;

    case '|':
        resultat= ou(num1,num2);
        break;

    default:
        break;
    }

    printf("Résultat: %d\n", resultat);
    resultat= 0;

    return 0; */

    return 0;
}
