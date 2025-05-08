#include <stdio.h>
#include <stdlib.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

//Bold high intensity text
#define BHBLK "\e[1;90m"
#define BHRED "\e[1;91m"
#define BHGRN "\e[1;92m"
#define BHYEL "\e[1;93m"
#define BHBLU "\e[1;94m"
#define BHMAG "\e[1;95m"
#define BHCYN "\e[1;96m"
#define BHWHT "\e[1;97m"

#define reset "\e[0m"
#define CRESET "\e[0m"
#define COLOR_RESET "\e[0m"

int main()
{
    int opcao = 0;

    while (opcao != 4)
    {
        system("clear");
        printf(BHGRN);
        printf("+------------------------------+\n");
        printf("|           MENU JOGO          |\n");
        printf("+------------------------------+\n");
        printf("|                              |\n");
        printf("|        1. Novo Jogo          |\n");
        printf("|        2. Ver Score          |\n");
        printf("|        3. Sobre              |\n");
        printf("|        4. Sair               |\n");
        printf("|                              |\n");
        printf("+------------------------------+\n");
        printf(reset);
        printf(RED);
        printf("Escolha uma opcao --> ");
        printf(reset);
        scanf("%i", &opcao);
        while (getchar() != '\n')
            ;
        int nivel = 0;
        switch (opcao)
        {
        case 1:
            system("clear");
            printf("Novo Jogo\n\n");
            printf("Escolha um nivel\n");
            printf("1 - Facil\n");
            printf("2 - Medio\n");
            printf("3 - Dificil\n");
            scanf("%i", &nivel);
            while (getchar() != '\n')
                ;
            break;
        case 2:
            system("clear");
            printf("Score do Jogo\n");
            printf("1 - Jogador A - 10000 pontos\n");
            printf("2 - Jogador B - 10000 pontos\n");
            printf("3 - Jogador C - 10000 pontos\n");
            printf("4 - Jogador D - 10000 pontos\n");
            printf("5 - Jogador E - 10000 pontos\n");
            printf("PRESSIONE ENTER PARA CONTINUAR . . .");
            getchar();
            break;
        case 3:
            system("clear");
            printf(BLU);
            printf("Sobre o Jogo\n");
            printf("Desenvolvimento em C\n");
            printf("Por um programador raiz\n");
            printf("Copyright(c) 2025\n");
            printf("PRESSIONE ENTER PARA CONTINUAR . . .");

            getchar();
            break;
        case 4:
            system("clear");
            printf("Ate logo\n");
            break;
        default:
            printf("Opcao Invalida!\n");
            printf("PRESSIONE ENTER PARA CONTINUAR . . .");
            getchar();
            break;
        }
    }

    return 0;
}