/*Nom du fichier : operator.c
Objectif : Mise en place de calculs avec opérateurs
Auteurs : Mathieu Poirel & Emma Tricquet*/

#include <stdio.h>

int addition (int num1,int num2){
    return num1 + num2;
}

int soustraction (int num1,int num2){
    return num1 - num2;
}

int multiplication (int num1,int num2){
    return num1 * num2;
}

int divisionEntiere (int num1,int num2){
    return num1 % num2;
}

int division (int num1,int num2){
    return num1 / num2;
}

int et (int num1,int num2){
    return num1 & num2;
}

int ou (int num1,int num2){
    return num1 | num2;
}