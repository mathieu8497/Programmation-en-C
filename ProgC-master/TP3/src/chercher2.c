/*Nom du fichier : chercher2.c
Objectif : Rechercher une phrase dans un tableau de phrases
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int main(){
    char phrases[10][60] = {
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

    int tailleMax = 10;
    int verif;
    int cpt;
    int carac;

    // phrase test à modifier au besoin
    char PhraseDonnee[60] = "La recherche dans un tableau est intéressante.";

    // double boucle for pour parcourir les différentes phrases et les caractères un par un
    for (cpt =0; cpt < tailleMax; cpt++){
        for (carac = 0; carac <60; carac++)
        {verif = 0; //initialisation du nombre de vérification à 0 pour chaque caractère
            if (PhraseDonnee[carac]==phrases[cpt][carac])
            {
                verif = 1; //si le caractère est le bon alors verif passe à 1 (et cela jusqu'au dernier caractère)
                continue;
            }
            else
            {
                break; //pas besoin de continuer à parcourir la phrase si le caractère est différent
            } 
        }
        if (verif==1)
        {
            printf("Phrase trouvée : %s \n", PhraseDonnee);
            break;
        }
    
    }
    // à la fin des 2 boucles for
    if (verif ==0)
    {
        printf("Phrase non trouvée \n");
    }
    
    return 0;
}