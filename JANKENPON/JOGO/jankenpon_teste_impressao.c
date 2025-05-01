#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

#ifdef __linux__
#include <unistd.h>
#elif _WIN32
#include <windows.h>
#endif

#define ZEZINHO 0
#define BERENICE 1

char regras[3][30] =
    {"PEDRA vence da TESOURA",
     "PAPEL vence da PEDRA",
     "TESOURA vence do PAPEL"};
char nome_jogadores[2][30] =
    {"ZEZINHO TROCA-TAPA",
     "BERENICE CANELA FINA"};

int main()
{

    printf("\t\t\t\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
    printf("\t\t\t\x1b[7m   %s   \x1b[0m\n", regras[0]);

    printf("\t\t\t\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
    printf("\t\t\t\x1b[7m    %s    \x1b[0m\n", regras[1]);

    printf("\t\t\t\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
    printf("\t\t\t\x1b[7m   %s   \x1b[0m\n", regras[2]);

    printf("\n");

    printf("\t\t\t\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
    printf("\t\t\t\x1b[7m    %s    \x1b[0m\n", regras[0]);

    printf("\t\t\t\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
    printf("\t\t\t\x1b[7m     %s     \x1b[0m\n", regras[1]);

    printf("\t\t\t\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
    printf("\t\t\t\x1b[7m    %s    \x1b[0m\n", regras[2]);

    return 0;
}