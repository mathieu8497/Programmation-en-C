#include "liste.h"
#include <stdio.h>

int main() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF}; // Exemple de couleur (rouge)
    struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF}; // Exemple de couleur (vert)

    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    return 0;
}