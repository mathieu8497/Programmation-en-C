#include <stdio.h>
#include <math.h>


int main(){
    float rayon = 3.1;
    float aire = M_PI*rayon*rayon;
    float perimetre = 2*M_PI*rayon;
    printf("Le périmètre est %f\n",perimetre);
    printf("L'aire est %f\n",aire);
    return 0;
}