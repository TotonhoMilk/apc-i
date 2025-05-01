#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 10;
    int num2 = 20;

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    float divisao = num1 * 1.0f / num2;
    int resto = num1 % num2;

    system("clear");

    printf("\nA soma -----------> %i + %i = %i\n", num1, num2, soma);
    printf("A subtracao ------> %i - %i = %i\n", num1, num2, subtracao);
    printf("A multiplicacao --> %i * %i = %i\n", num1, num2, multiplicacao);
    printf("A divisao --------> %i / %i = %.1f\n", num1, num2, divisao);
    printf("A resto ----------> %i e %i = %i\n", num1, num2, resto);

    int i = 0;
    int contador = 1;

    printf("\n\t\t\t       TABUADA DE VEZES\n");
    for(i = 0; i < 10 ; i++){
         printf("%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i\n", i + 1, contador, (i + 1) * contador);
         contador = 1;
    }
    printf("\n");
    contador = 6;
    for(i = 0; i < 10 ; i++){
         printf("%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i", i + 1, contador, (i + 1) * contador);
         contador++;
         printf("\t%2i x %2i = %2i\n", i + 1, contador, (i + 1) * contador);
         contador = 6;
    }
    printf("\t");
    

    return 0;
}