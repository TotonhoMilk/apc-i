#include <stdio.h>

int resultado, num1, num2;

int soma (int a, int b){
    int res = a + b;
    return res;
}

int main( )
{
    printf("+=================================+\n");
    printf("|           Ola Mundo!            |\n");
    printf("|  Bem vindo a disciplina APC I!  |\n");
    printf("+=================================+");
    printf("\n+=================================+");
    printf("\n|   Com esse programa voce esta   |");
    printf("\n|  habilitado para hakear a NASA! |");
    printf("\n+=================================+\n");

    printf("\n+=================================+");
    printf("\n  Digite um numero ----->");
    scanf("%d", &num1);
    printf("\n  Digite outro numero --> ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("  resultado --------------> %d\n", resultado);
    printf("\n+=================================+");

    
    //printf ("%d", resultado);

    return 0;
}