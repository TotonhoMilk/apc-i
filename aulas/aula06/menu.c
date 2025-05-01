#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        system("clear");
        printf("MENU PRINCIPAL DO SISTEMA DE INVASAO DA NASA\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Fazer Recarga\n");
        printf("3 - Ver Recados\n");
        printf("4 - Ultimas Ligacoes\n");
        printf("5 - Sair\n");
        printf("Escolha uma Opcao -> ");

        int opcao1 = 0;
        scanf("%i", &opcao1);

        switch (opcao1)
        {
        case 1:
            printf("Seu saldo eh R$ 10.00\n");
            break;
        case 2:
            printf("Digite\t1 p/ 10.00,\n\t2 p/ 20.00,\n\t5 p/ 50.00\n");
            printf("--> ");

            int opcao2 = 0;
            scanf("%i", &opcao2);

            switch (opcao2)
            {
            case 1:
                printf("Recarga de R$10,00\n");
                break;
            case 2:
                printf("Recarga de R$20,00\n");
                break;
            case 5:
                printf("Recarga de 50,00\n");
                break;
            default:
                printf("Digite um valor valido\n");
                break;
            }
            break;
        case 3:
            printf("Voce nao tem recados\n");
            break;
        case 4:
            printf("Voce ligou para 9555-9999\n");
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Digite um numero entre 1 a 5. \nTente novamente\n");
        }

        printf("Deseja jogar novamente?\n");
        printf("1 - Sim || 2 - Nao\n");
        printf("--> ");

        int opcao3 = 0;
        scanf("%i", &opcao3);
        switch (opcao3)
        {
        case 1:
            break;
        case 2:
            exit(0);

        default:
            printf("Digite um valor valido\n");
            break;
        }
    }

    return 0;
}