/*Nom du fichier : chercher.c
Objectif : Chercher un entier dans un tableau
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tab[100];
    int i = 0;
    int valeur_Utilisateur; 
    int randomValue;
    srand(time(NULL));
    for (i = 0;i<=100;i++){
        int randomValue = rand() % 1000;
        tab[i] = randomValue;
        printf("%d\n", tab[i]);
    }
    printf("Entrez l'entier que vous souhaitez chercher : \n");
    scanf("%d", &valeur_Utilisateur);
    int valeurComparaison;
    for (i = 0;i<=100;i++){
        valeurComparaison = tab[i];
        if (valeurComparaison == valeur_Utilisateur){
            printf("Résultat : entier présent\n");
            return 0;
        }
    }
    printf("Résultat : entier absent\n");   
    return 0;
}