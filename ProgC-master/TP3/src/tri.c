// Nom du fichier : tri.c
// Objectif : Trier un tableau de manière croissante.
// Auteurs : Mathieu Poirel & Emma Tricquet

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tabTri[100];
    int randomValue;
    int cptIndice;

    // tableau de 100 entiers
    srand(time(NULL));
    printf("Tableau non trié : \n");

    //création du tableau non trié
    for (cptIndice = 0;cptIndice<=100;cptIndice++){
        randomValue = rand() % 10; //ira jusque 9 max (reste entre 0 et 9)
        tabTri[cptIndice] = randomValue;
        printf( " %d ", tabTri[cptIndice]);
    }

    // tri du tableau
    int i;
    int j;
    int ValeurATrier;
    for (i = 0;i<=100;i++){
        for (j = i + 1; j < 100; ++j){
                if (tabTri[i] > tabTri[j]){
                    ValeurATrier =  tabTri[i];
                    tabTri[i] = tabTri[j];
                    tabTri[j] = ValeurATrier;
                }
        }
    }
    //AFFICHAGE TABLEAU
    printf("\n Tableau trié : \n");
    for (i = 0; i < 100; ++i){
            printf(" %d ", tabTri[i]);
    }
    return 0;
}