#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int numero;
    float nota;


    printf("\nInforme um numero --> ");
    scanf("%i", &numero);
    getchar();
    printf("\nO numero informado foi %i\n", numero);
    printf("Informe uma nota entre 0 e 10.0 --> ");
    scanf("%f", &nota);
    getchar();
    printf("\nA sua nota foi %.2f\n", nota);
    system("clear");
    system("pause");

    printf("█");

    return 0;
}