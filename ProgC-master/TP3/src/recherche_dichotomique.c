#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tab[100];
    int i = 0;
    int j;
    int valeur_Utilisateur; 
    int randomValue;
    int a;
    srand(time(NULL));
    //CREATION DU TABLEAU
    for (i = 0;i<=100;i++){
        int randomValue = rand() % 150;
        tab[i] = randomValue;
        
    }
    //TRIER LE TABLEAU
    for (i = 0;i<=100;i++){
        for (j = i + 1; j < 100; ++j){
                if (tab[i] > tab[j]){
                    a =  tab[i];
                    tab[i] = tab[j];
                    tab[j] = a;
                }
        }
    }
    //AFFICHAGE TABLEAU
    for (i = 0; i < 100; ++i){
            printf("%d\n", tab[i]);
    }
    // //DEMANDE UTILISATEUR
    // printf("Entrez l'entier que vous souhaitez chercher : \n");
    // scanf("%d", &valeur_Utilisateur);
    // //CHERCHER GRACE A LA DICHOTOMIE
    // for (i = 0;i<=100;i++){
    //     valeurComparaison = tab[i];
    //     if (valeurComparaison == valeur_Utilisateur){
    //         printf("Résultat : entier présent\n");
    //         return 0;
    //     }
    // }
    // printf("Résultat : entier absent\n");   
    return 0;
}