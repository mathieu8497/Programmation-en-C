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
    int valeurTraitee;
    for (cptIndice = 0;cptIndice<=100;cptIndice++){
        valeurTraitee = tabTri[cptIndice];
        
    }
    return 0;
}