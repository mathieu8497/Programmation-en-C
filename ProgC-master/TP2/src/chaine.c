#include <stdio.h>

int main(){
    char e[30] = "Emma&Mathieu";
    char a[30] = "Florian&Hugo";
    int cpt = 0;
    while (e[cpt]!='\0'){
        a[cpt] = e[cpt];//parcourir la chaîne source caractère par caractère et les copier dans la chaîne de destination
        cpt++;//regarder le nombre de caractère dans la chaine
    }
    printf("Le nombre de caractères dans la chaine -e- vaut : %i\n",cpt);
    printf("La chaine -a- initialisée à 'Florian&Hugo' est désormais : %s\n",a);

    //concaténation
    char f[30]="Florian&Hugo";
    int i = 0; //boucler pour la 2e chaine de caractère
    while(f[i]!='\0'){
    e[cpt+i]=f[i];
    i++;
    }
   printf("La concaténation dans la chaine -e- donne le résulat suivant : %s\n",e);
    return 0;
}