/*Nom du fichier : factorielle.c
Objectif :Fonction récursive pour calculer la factorielle d'un entier naturel donné
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num)
{
  if (num == 0)
  {
    printf("fact(0): 1\n");
    return 1;
  }
  else
  {
    int valeur = num * factorielle(num - 1);
    printf("fact(%d): %d\n", num, valeur);
    return (valeur);
  }
}

int main()
{
  int n;

  // Testez la fonction factorielle avec différentes valeurs d'entiers naturels
  int test;

  test = factorielle(3);
  printf("%i", test);

  return 0;
}