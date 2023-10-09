#include <stdio.h>
#include "operator.h"

int main()
{
    int numero1;
    int numero2;
    int resultat;
    char op;


    printf("Entrez num1 : \n");
    scanf("%d", &numero1);
    printf("Entrez num2 : \n");
    scanf("%d", &numero2);
    printf("Entrez l'opérateur (+, -, *, /, %, &, |, ~) : \n");
    scanf("%s", &op);

    printf("Résultat: %d\n", resultat);
    return 0;
}


