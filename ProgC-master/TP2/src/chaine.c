#include <stdio.h>

int main(){
    char e[] = "Emma&Mathieu";
    char a[] = "Florian&Hugo";
    int cpt = 0;
    while (e[cpt]!='\0'){
        a[cpt] = e[cpt];//parcourir la chaîne source caractère par caractère et les copier dans la chaîne de destination
        cpt++;//regarder le nombre de caractère dans la chaine
    }
    printf("%i\n",cpt);
    printf("%s\n",a);

    //concaténation
    int cpt2 = 0;
    char f[] = "Florian&Hugo";
    char concat[]="--------------------------";
   while (concat[cpt2]!='\0'){
    if (cpt2<cpt){
        concat[cpt2] = e[cpt2];

    }
    else{
        //printf("%i\n", cpt2-cpt);
        //printf("%i\n", cpt2);
        //printf("%i\n", cpt);
        concat[cpt2]= f[cpt2-cpt];
    }
    printf("%s\n",concat);
    cpt2++;

   }
    return 0;
}