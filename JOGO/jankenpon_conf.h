/*
 _____ _____ _   _ ______ _____ _____
/  __ \  _  | \ | ||  ___|_   _|  __ \
| /  \/ | | |  \| || |_    | | | |  \/
| |   | | | | . ` ||  _|   | | | | __
| \__/\ \_/ / |\  || |    _| |_| |_\ \
 \____/\___/\_| \_/\_|    \___/ \____/

                            Arquivo de configuração do jogo.


*/
// ==================INCLUSÃO DE BIBLIOTECAS======================
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "jakenpon_arte.h"

#ifdef __linux__
#include <unistd.h>
#elif _WIN32
#include <windows.h>
#endif

// =======================DEFINIÇÕES==============================
// #define DEBUG
#define INTRO // Para retirar a introdução
//------------------------
#define QTD_JOGADORES 2
#define QTD_JOGADAS 3

#ifdef __linux__
    #define SLEEP_1 sleep(1)
    #define SLEEP_2 sleep(2)
    #define SLEEP_3 sleep(3)
#elif _WIN32
    #define SLEEP_1 Sleep(1000)
    #define SLEEP_2 Sleep(2000)
    #define SLEEP_3 Sleep(3000)
#endif
//------------------------
enum boolean_e
{
    FALSE,
    TRUE
};
enum modo_jogo_e
{
    CPU_VS_CPU,
    CPU_VS_HUMANO
};
enum personagens_e
{
    ZEZINHO,
    BERENICE,
    EMPATE
};
enum jogadas_e
{
    PEDRA,
    PAPEL,
    TESOURA
};

// =====================VARIÁVEIS GLOBAL==========================
int primeira_rodada = 0;
int contador = 1;

int placar[] = {0, 0, 0};
int opcao_modo_jogo = 0;
int opcao_personagem = 0;
int opcao_jogada_humano = 0;
