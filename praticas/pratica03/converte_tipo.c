#include <stdio.h>

int main(){
    char caractere = 127;
    int inteiro = caractere;
    float flutuante = inteiro;
    double duplo = flutuante;

    printf("caractere = %i\n", caractere);
    printf("inteiro = %i\n", inteiro);
    printf("flutuante = %.7f\n", flutuante);
    printf("duplo = %.7f\n", duplo);

    return 0;
}