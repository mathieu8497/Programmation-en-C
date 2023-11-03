#include <stdio.h>

struct couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
    struct couleur* suivant;
};

void insertion(struct couleur* nouvelle_couleur, struct couleur** liste);
void parcours(struct couleur* liste);
