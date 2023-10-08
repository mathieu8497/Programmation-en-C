/*Nom du fichier : bits.c
Objectif : 
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    int d = 1048592;
    int mask4 = (1<<4);
    int mask20 = (1<<20);
    int result;

    if((d & mask4)&&(d & mask20)){
        result = 1;
    }
    else{
        result = 0;
    }

    printf("%i\n",result);
    return 0;
}