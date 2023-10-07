#include <stdio.h>

int main(){

    // tableau de 5 chaines de caractère de taille 100 maximum
    char NomPrenom[5][100] = {"Tricquet Emma","Poirel Mathieu", "Poirel Lena", "Tricquet Robin", "Clavel Coline"};
    char Adresses[5][100] = {"20 Rue D'Essling 69003 LYON","1 Av. Albert Einstein 69100 VILLEURBANNE","ETATS-UNIS","24 Av. Du 14 Juillet 59139 WATTIGNIES","3. Av de la montagne AIGUEBLANCHE"};
    
    float NotesProgC[5] = {16.5, 18.9,9,10.6,15.5};
    float NotesSystExploit[5] = {15.5,10,9,18.9,16.5};

    int i;
    for(i=0;i<5;i++){
        printf("\nL'étudiant se nomme %s, habite au %s. Il a une note de progammation C : %f et une note de système d'exploitation : %f \n", NomPrenom[i],Adresses[i],NotesProgC[i],NotesSystExploit[i]);
    }
}
