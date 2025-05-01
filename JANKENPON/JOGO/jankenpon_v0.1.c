// ==================INCLUSÃO DE BIBLIOTECAS======================
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#ifdef __linux__
#include <unistd.h>
#elif _WIN32
#include <windows.h>
#endif

// =======================DEFINIÇÕES==============================
// #define DEBUG
#define TRUE            1
//------------------------
#define CPU_VS_CPU      0
#define CPU_VS_HUMANO   1
//------------------------
#define QTD_JOGADORES   2
#define QTD_JOGADAS     3
//------------------------
#define ZEZINHO         0
#define BERENICE        1
#define EMPATE          2
//------------------------
#define PEDRA           0
#define PAPEL           1
#define TESOURA         2

// =====================VARIÁVEIL GLOBAL==========================
int placar[] = {0, 0, 0};
int contador = 1;
int opcao_modo_jogo = 0;
int opcao_personagem = 0;
int opcao_jogada_humano = 0;
int primeira_rodada = 0;

// ======================FUNÇÃO PRINCIPAL=========================
int main()
{
    setlocale(LC_ALL, "Portuguese");

    // ----------------------TELA INTRODUÇÃO--------------------------
    if (!primeira_rodada)
    {
        system("clear");
        printf("TELA DE INTRODUÇÃO\n\n");
        for (int i = 1; i < 4; i++)
        {
            printf("\033[3;2H00:%02d\n", i);
            sleep(1);
        }
        printf("\n\nE, LÁ VAMOS NÓS!\n");
        sleep(1);

        // ------------------TELA SELEÇÃO MODO JOGO-----------------------
        system("clear");

        while (TRUE)
        {
            printf("TELA DE SELEÇÃO DE MODO JOGO\n\n");
            printf("COMO DESEJA JOGAR?\n");
            printf("1 - CPU VS CPU | 2- CPU VS HUMANO\n");
            printf("\n\t\t--> ");
            scanf("%d", &opcao_modo_jogo);
            getchar();
            // printf("Valor de opcao_modo_jogo %d\n", opcao_modo_jogo);
            // getchar();
            if (opcao_modo_jogo == 1 || opcao_modo_jogo == 2)
            {
                primeira_rodada = 1;
                opcao_modo_jogo--;
                break;
            }
            else
            {
                system("clear");
                printf("OPÇÃO INVÁLIDA!.\n");
                continue;
            }
        }
        
        // ------------------TELA SELEÇÃO PERSONAGEM-----------------------
        system("clear");
        
        if (opcao_modo_jogo == CPU_VS_HUMANO)
        {
            while (TRUE)
            {
                printf("TELA DE SELEÇÃO DE LUTADOR\n\n");
                printf("SELECIONE SEU LUTADOR!\n");
                printf("1 - ZEZINHO | 2 - BERENICE\n");
                printf("\n\t\t--> ");
                scanf("%d", &opcao_personagem);
                getchar();
                if (opcao_personagem == 1 || opcao_personagem == 2)
                {
                    opcao_personagem--;
                    break;
                }
                else
                {
                    system("clear");
                    printf("OPÇÃO INVÁLIDA!.\n");
                    continue;
                }
            }
        }
    }

    // ------------------TELA PRINCIPAL DO JOGO-----------------------
    // ----------------TELA SELEÇÃO JOGADA HUMANO---------------------
    system("clear");

    if (opcao_modo_jogo == CPU_VS_HUMANO)
    {
        while (TRUE)
        {
            printf("TELA DE SELEÇÃO DE JOGADA\n\n");
            printf("SELECIONE SUA JOGADA!\n");
            printf("1 - PEDRA | 2 - PAPEL | 3 - TESOURA\n");
            printf("\n\t\t--> ");
            scanf("%d", &opcao_jogada_humano);
            getchar();

            // ver a possibilidade de trocar por switch e realizar a recpção da jogada do humano aqui.

            if (opcao_jogada_humano == 1 || opcao_jogada_humano == 2 || opcao_jogada_humano == 3)
            {
                opcao_jogada_humano--;
                printf("Você selecionou a jogada #%d\n", opcao_jogada_humano);
                printf("APERTE ENTER PARA CONTINUAR . . .\n");
                getchar();
                break;
            }
            else
            {
                system("clear");
                printf("OPÇÃO INVÁLIDA!.\n");
                continue;
            }
        }
    }

    // ------------------SELEÇÃO JOGADA ALEATÓRIA---------------------
    int jogadas[] = {0, 0};

    srand(time(NULL));

    for (int i = 0 ; i < QTD_JOGADORES ; i++)   //Seleção para 2 jogadores
    {
        jogadas[i] = rand() % QTD_JOGADAS;    //Seleção entre 3 possíveis jogadas.
    }

    if (opcao_modo_jogo == CPU_VS_HUMANO)
    {
        if (opcao_personagem == ZEZINHO)
        {
            jogadas[ZEZINHO] = opcao_jogada_humano;
        }
        else if (opcao_personagem == BERENICE)
        {
            jogadas[BERENICE] = opcao_jogada_humano;
        }
    }

    // -----------------TELA APRESENTAÇÃO JOGADAS----------------------
    //-------------------------TELA RODADA-----------------------------
    system("clear");
    printf("TELA DE ESPERA DA RODADA\n\n");
    printf("-----ROUND %i-----\n", contador);
    sleep(1);
    printf("----F I G H T----\n");
    sleep(1);

    //----------------------------PLACAR-------------------------------
    system("clear");

    printf("TELA DE JOGO PRINCIPAL\n\n");
    printf("\t\t\tPLACAR\n");
    printf("\t\t\tZÉ | BERÊ | EMPATE\n");

    // ------------------ATRIBUIÇÃO DAS JOGADAS------------------------
    printf("\n\n");

    if (jogadas[ZEZINHO] == PEDRA)
    {
        printf("PEDRA\n");
    }
    else if (jogadas[ZEZINHO] == PAPEL)
    {
        printf("PAPEL\n");
    }
    else
    {
        printf("TESOURA\n");
    }

    if (jogadas[BERENICE] == PEDRA)
    {
        printf("\tPEDRA\n");
    }
    else if (jogadas[BERENICE] == PAPEL)
    {
        printf("\tPAPEL\n");
    }
    else
    {
        printf("\tTESOURA\n");
    }

    // --------------------------REGRAS------------------------------
    if (jogadas[ZEZINHO] == PEDRA && jogadas[BERENICE] == TESOURA)
    {
        printf("ZEZINHO VENCEU!\n");
        placar[ZEZINHO]++;
    }
    else if (jogadas[ZEZINHO] == PAPEL && jogadas[BERENICE] == PEDRA)
    {
        printf("ZEZINHO VENCEU!\n");
        placar[ZEZINHO]++;
    }
    else if (jogadas[ZEZINHO] == TESOURA && jogadas[BERENICE] == PAPEL)
    {
        printf("ZEZINHO VENCEU!\n");
        placar[ZEZINHO]++;
    }
    else if (jogadas[BERENICE] == PEDRA && jogadas[ZEZINHO] == TESOURA)
    {
        printf("BERENICE VENCEU!\n");
        placar[BERENICE]++;
    }
    else if (jogadas[BERENICE] == PAPEL && jogadas[ZEZINHO] == PEDRA)
    {
        printf("BERENICE VENCEU!\n");
        placar[BERENICE]++;
    }
    else if (jogadas[BERENICE] == TESOURA && jogadas[ZEZINHO] == PAPEL)
    {
        printf("BERENICE VENCEU!\n");
        placar[BERENICE]++;
    }
    else
    {
        printf("EMPATE!\n");
        placar[EMPATE]++;
    }

    printf("\033[5;25H%i     %i      %i\n", placar[0], placar[1], placar[2]);

    printf("\033[12;0HAperte ENTER para continuar . . .\n");
    getchar();

    // ------------------------LOOP DE REPETIÇÃO-----------------------
    if (contador < 3)
    { // Loop de repetição das 3 tentativas
        contador++;
        main();
    }
    if (contador > 1) {
        contador--;
        return 0;
    }

    // -------------------------TESTE VENCEDOR-------------------------
    system("clear");

    printf("TELA DE APRESENTAÇÃO DO VENCEDOR\n\n");
    
    if (placar[ZEZINHO] > placar[BERENICE] && placar[ZEZINHO] > placar[EMPATE])
    {
        printf("ZEZINHO É O GRANDE VENCEDOR!\n");
    }
    else if (placar[BERENICE] > placar[EMPATE])
    {
        printf("BERENICE É A GRANDE VENCEDORA!\n");
    }
    else
    {
        printf("EMPATOU GERAL!\n");
    }

    printf("\nAperte ENTER para continuar . . .\n");
    getchar();

    // ----------------------JOGAR NOVAMENTE?-------------------------
    system("clear");

    int opcao_jogar_novamente = 0;

    while (TRUE)
    {
        printf("TELA DE SELEÇÃO DE NOVO JOGO\n\n");
        printf("VOCÊ DESEJA JOGAR NOVAMENTE?\n");
        printf("1 - Sim | 2 - Não\n");
        printf("\t\t--> ");
        scanf("%i", &opcao_jogar_novamente);

        switch (opcao_jogar_novamente)
        {
        case 1:
            for (int i = 0 ; i < 3 ; i++)
                placar[i] = 0;
            contador = 1;
            opcao_modo_jogo = 0;
            opcao_personagem = 0;
            opcao_jogada_humano = 0;
            primeira_rodada = 0;
            main();
        case 2:
            system("clear");
            printf("TELA DE GAME OVER\n\n");
            printf("Game Over\n\n");
            exit(0);
        default:
            printf("Opção inválida!\n");
            break;
        }
    }
}