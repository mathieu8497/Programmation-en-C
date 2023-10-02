#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tabTri[100];
    int randomValue;
    int cptIndice = 0;

    // tableau de 100 entiers
    srand(time(NULL));
    for (cptIndice = 0;cptIndice<=100;cptIndice++){
        randomValue = rand() % 10; //ira jusque 9 max (reste entre 0 et 9)
        tabTri[cptIndice] = randomValue;
        printf("%d ", tabTri[cptIndice]);
    }
    
    return 0;
}