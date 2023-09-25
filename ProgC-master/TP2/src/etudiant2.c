#include <stdio.h>
#include <string.h>


int main(){
    int cpt = 0;
    struct etudiant {
    char prenom[50];
    char nom[50];
    char adresse[100];
    int note1;
    int note2;
    };

    struct etudiant etudiant_cpe[135];

    strcpy(etudiant_cpe[0].prenom, "Pierre");
    strcpy(etudiant_cpe[0].nom, "Dupont");
    strcpy(etudiant_cpe[0].adresse, "Boulevard du 11 novembre 1918, Villeurbanne");
    etudiant_cpe[0].note1 = 19;
    etudiant_cpe[0].note2 = 18;


    strcpy(etudiant_cpe[1].prenom, "Florian");
    strcpy(etudiant_cpe[1].nom, "Poirel");
    strcpy(etudiant_cpe[1].adresse, "Boulevard du 12 novembre 1965, Lille");
    etudiant_cpe[1].note1 = 5;
    etudiant_cpe[1].note2 = 8;

    strcpy(etudiant_cpe[2].prenom, "Hugo");
    strcpy(etudiant_cpe[2].nom, "Fruleux");
    strcpy(etudiant_cpe[2].adresse, "Boulevard du 19 novembre 1816,Lyon");
    etudiant_cpe[2].note1 = 3;
    etudiant_cpe[2].note2 = 2;

    strcpy(etudiant_cpe[3].prenom, "Rosine");
    strcpy(etudiant_cpe[3].nom, "Miaglia");
    strcpy(etudiant_cpe[3].adresse, "Boulevard du 21 novembre 2001,Oregon");
    etudiant_cpe[3].note1 = 11;
    etudiant_cpe[3].note2 = 8;

    strcpy(etudiant_cpe[4].prenom, "Cedric");
    strcpy(etudiant_cpe[4].nom, "Tremouille");
    strcpy(etudiant_cpe[4].adresse, "Boulevard du 15 novembre 1875,Montreal");
    etudiant_cpe[4].note1 = 13;
    etudiant_cpe[4].note2 = 12;
    
    for (cpt=0;cpt<5;cpt++){
        printf("Étudiant.e :%i\n",cpt);
        printf("Nom :%s\n",etudiant_cpe[cpt].nom);
        printf("Prenom :%s\n",etudiant_cpe[cpt].prenom);
        printf("Adresse :%s\n",etudiant_cpe[cpt].adresse);
        printf("Note 1 :%i\n",etudiant_cpe[cpt].note1);
        printf("Note 2 :%i\n",etudiant_cpe[cpt].note2);
        printf("\n");

    }
    return 0;
}