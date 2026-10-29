/*
Escreva um programa em C em que:
- aparece uma expressão a pedir ao utilizador para intruduzir 
a primeira letra maiscula do seu nome´
- imprima na consola todas as letras maiusculas anteriores a letra do nome

*/
#include <stdio.h>

int main() {
    char letra;

    printf("Introduza a primeira letra do seu nome em maiuscula: ");
    scanf(" %c", &letra);

    printf("A letra introduzida foi: %c\n", letra);

    return 0;
}
