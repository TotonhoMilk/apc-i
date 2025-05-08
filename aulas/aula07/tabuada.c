#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    system("clear");
    printf("BEM VINDO A TABUADA DA NASA!\n");
    printf("Aperte ENTER para continuar . . .\n");
    getchar();
    system("clear");
    while (numero < 1 || numero > 10)
    {
        printf("Entre com um numero inteiro de 1 a 10: ");
        scanf("%i", &numero);

        while (getchar() != '\n');
        
        if (numero < 1 || numero > 10)
        {
            system("clear");
            printf("Opcao Invalida!\n");
        }
    }

    printf("Parabens! Voce digitou %i", numero);
    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = 1; j <= 10; j++)
    //     {
    //         printf("%2i  x %2i = %3i\n", j, i, j * i);
    //     }
    //     printf("--------------\n");
    // }

    return 0;
}