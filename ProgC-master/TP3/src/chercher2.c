/*Nom du fichier : chercher2.c
Objectif : Rechercher une phrase dans un tableau de phrases
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    char phrases[10][200] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    int motTrouve = 0;
    int tailleMax = 10;
    int cpt;
    int carac;
    char PhraseDonnee = "Les pointeurs en C peuvent être déroutants.";

    for (cpt =0; cpt < tailleMax; cpt++){
        for (carac= 0; carac< 200; carac++)
        {
            if (PhraseDonnee[carac]==phrases[cpt][carac]){
                continue;
            }
            
        }
        
    
    }
    


    return 0;
}