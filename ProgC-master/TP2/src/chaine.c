#include <stdio.h>

int main(){
    char e[] = "Emma&Mathieu";
    char a[] = "xxxxxxxxxxxx";
    int cpt = 0;
    while (e[cpt]!='\0'){
        a[cpt] = e[cpt];//parcourir la chaîne source caractère par caractère et les copier dans la chaîne de destination
        cpt++;//regarder le nombre de caractère dans la chaine
    }
    printf("%i\n",cpt);
    printf("%s\n",a);
    return 0;
}