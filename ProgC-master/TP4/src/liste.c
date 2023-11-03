#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

// Fonction Parcourir la liste des couleurs
void parcours(struct couleur *liste)
{
    struct couleur *actuelle = liste;
    while (actuelle != NULL)
    {
        printf("Couleur : Rouge=%02X, Vert=%02X, Bleu=%02X, Alpha=%02X\n", actuelle->rouge, actuelle->vert, actuelle->bleu, actuelle->alpha);
        actuelle = actuelle->suivant;
    }
}

// Fonction inserer une couleur dans la liste

void insertion(struct couleur *nouvelle_couleur, struct couleur **liste)
{
    // Allocation dynamique d'un nouvel espace pour la nouvelle couleur
    struct couleur *nouvelle_couleur_copy = (struct couleur *)malloc(sizeof(struct couleur));
    // On copie la couleur dans le nouvel espace alloué
    *nouvelle_couleur_copy = *nouvelle_couleur;
    // On ajoute la couleur au début de la liste
    nouvelle_couleur_copy->suivant = *liste;
    *liste = nouvelle_couleur_copy;
}

int main()
{
    struct couleur *ma_liste;
    ma_liste = NULL;

    // Déclaration de 10 couleurs
    struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF};  // Exemple de couleur (rouge)
    struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF};  // Exemple de couleur (vert)
    struct couleur couleur3 = {0x00, 0x00, 0xFF, 0xFF};  // Exemple de couleur (bleu)
    struct couleur couleur4 = {0xFF, 0xFF, 0xFF, 0xFF};  // Exemple de couleur (blanc)
    struct couleur couleur5 = {0x00, 0x00, 0x00, 0xFF};  // Exemple de couleur (noir)
    struct couleur couleur6 = {0xFF, 0xFF, 0x00, 0xFF};  // Exemple de couleur (jaune)
    struct couleur couleur7 = {0xFF, 0x00, 0xFF, 0xFF};  // Exemple de couleur (magenta)
    struct couleur couleur8 = {0x00, 0xFF, 0xFF, 0xFF};  // Exemple de couleur (cyan)
    struct couleur couleur9 = {0x80, 0x80, 0x80, 0xFF};  // Exemple de couleur (gris)
    struct couleur couleur10 = {0x80, 0x00, 0x00, 0xFF}; // Exemple de couleur (bordeaux)

    // Insertion des 10 couleurs dans la liste
    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);
    insertion(&couleur3, &ma_liste);
    insertion(&couleur4, &ma_liste);
    insertion(&couleur5, &ma_liste);
    insertion(&couleur6, &ma_liste);
    insertion(&couleur7, &ma_liste);
    insertion(&couleur8, &ma_liste);
    insertion(&couleur9, &ma_liste);
    insertion(&couleur10, &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(ma_liste);

    return 0;
}