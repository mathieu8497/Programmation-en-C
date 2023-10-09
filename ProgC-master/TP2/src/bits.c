/*Nom du fichier : bits.c
Objectif : Vérifier les Bits en language C
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    int d = 1048592;
    int mask4 = (1<<4); //4e bit à 1
    int mask20 = (1<<20); //20e bit à 1
    int result;

    if((d & mask4)&&(d & mask20)) //on vérifie que le bit 4 et 20 sont à 1
    {
        result = 1;
    }
    else{
        result = 0;
    }

    printf("%i\n",result);
    return 0;
}