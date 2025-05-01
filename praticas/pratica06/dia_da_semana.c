#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int dia = 0;
    printf("Digite um inteiro de 1 a 7: ");
    scanf("%i", &dia);
    getchar();

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    
    default:
        printf("Valor invalido!\nTente novamente\n");
        break;
    }
    Sleep(2000);

    system("clear");
    printf("BEM-VINDO A INVASAO\n");
    Sleep(2000);
    printf("INVADINDO A NASA . . .\n");
    Sleep(2000);
    printf("DENTRO DOS SERVIDORES DA NASA . . .\n");
    Sleep(2000);
    printf("\nAPERTE \x1b[31mENTER\x1b[m PARA CONTINUAR . . .");
    getchar();

    return 0;
}