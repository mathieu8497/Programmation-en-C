#include <stdio.h>

int main(){

    int a = 1;
    int *ptr_a = &a;
    int *ptr2_a = &ptr_a;

    printf("La taille de int est : %lu octets\n", sizeof (a));
    printf("La taille de int* est : %lu octets\n", sizeof(ptr_a));
    printf("La taille de int** est : %lu octets\n", sizeof(ptr2_a));

    char b = 'b';
    char *ptr_b = &b;
    char *ptr2_b = &ptr_b;
    char *ptr3_b = &ptr2_b;

    printf("La taille de char* est : %lu octets\n", sizeof(ptr_b));
    printf("La taille de char** est : %lu octets\n", sizeof(ptr2_b));
    printf("La taille de char*** est : %lu octets\n", sizeof(ptr3_b));

    float c = 10;
    float *ptr_c = &c;
    float *ptr2_c = &ptr_c;
    float *ptr3_c = &ptr2_c;

    printf("La taille de float* est : %lu octets\n", sizeof(ptr_c));
    printf("La taille de float** est : %lu octets\n", sizeof(ptr2_c));
    printf("La taille de float*** est : %lu octets\n", sizeof(ptr3_c));

    return 0;
}