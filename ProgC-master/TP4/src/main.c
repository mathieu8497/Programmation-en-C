#include <stdio.h>
#include "operator.h"
#include "liste.h"

int main()
{
    /*
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

    // Exo 7

    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF}; // Exemple de couleur (rouge)
    struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF}; // Exemple de couleur (vert)

    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    return 0;
}
