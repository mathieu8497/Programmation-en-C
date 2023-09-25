#include <stdio.h>

int main(){
    char e[] = "Emma&Mathieu";
    char i[] = "";
    int cpt = 0;
    while (e[cpt]!='\0'){
        cpt++;//regarder le nombre de caractère dans la chaine
        i[cpt] = e[cpt]

    }
    printf("%i\n",cpt);
    return 0;
}