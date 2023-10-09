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
    srand(time(NULL));//On réinitialise nos valeurs random à chaque lancement
    //On utilise une boucle for pour creer un tableau de 100 valeurs avec des nombres allant jusqu'a 1000 à l'intérieur
    for (i = 0;i<=100;i++){
        int randomValue = rand() % 1000;
        tab[i] = randomValue;
        printf("%d\n", tab[i]);
    }
    printf("Entrez l'entier que vous souhaitez chercher : \n");
    scanf("%d", &valeur_Utilisateur);//on demande une valeur à l'opérateur qu'on assigne à valeur_Utilisateur
    int valeurComparaison;
    for (i = 0;i<=100;i++){
        valeurComparaison = tab[i];
        //Condition pour comparer si la valeur est présente dans le tableau valeur par valeur 
        if (valeurComparaison == valeur_Utilisateur){
            printf("Résultat : entier présent\n");
            return 0;
        }
    }
    printf("Résultat : entier absent\n");   
    return 0;
}