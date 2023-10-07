#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int size = 100;
    int tab[size];
    int i = 0;
    int j;
    int valeur_Utilisateur; 
    int randomValue;
    int a;
    srand(time(NULL));
    //CREATION DU TABLEAU
    for (i = 0;i<=size;i++){
        int randomValue = rand() % 150;
        tab[i] = randomValue;
        
    }
    //TRIER LE TABLEAU
    for (i = 0;i<=size;i++){
        for (j = i + 1; j < size; ++j){
                if (tab[i] > tab[j]){
                    a =  tab[i];
                    tab[i] = tab[j];
                    tab[j] = a;
                }
        }
    }
    //AFFICHAGE TABLEAU
    for (i = 0; i < size; ++i){
            printf("%d\n", tab[i]);
    }
    // //DEMANDE UTILISATEUR
    printf("Entrez l'entier que vous souhaitez chercher : \n");
    scanf("%d", &valeur_Utilisateur);


    //CHERCHER GRACE A LA DICHOTOMIE
    int valeurDeComparaison;
    int mid;
    int min = 0;
    int max = 100;
    int cpt;

    while (cpt<size) //le compteur est plus petit que la taille du tableau
    {
        mid = (min + max) / 2; //on re-calcule le milieu à chaque itération

        if (tab[mid]== valeur_Utilisateur){
            printf("Résultat : entier présent\n");
            return 0;
        }
        else if (tab[mid]>valeur_Utilisateur){
            max = mid;
        }
        else{
            min = mid;
        }
        cpt ++; 
    }
    printf("Résultat : entier absent\n");   
    return 0;
    }

    