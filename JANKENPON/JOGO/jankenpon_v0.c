// ==================INCLUSÃO DE BIBLIOTECAS======================
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
// =======================DEFINIÇÕES==============================
//#define DEBUG_MODE

#define QTD_JOGADORES       2
#define NUM_JOGADAS         3
//----------------------------
#define ZEZINHO             0
#define BERENICE            1
//----------------------------
#define PEDRA               0
#define PAPEL               1
#define TESOURA             2
//----------------------------
#define NUM_FRASES_VENC     3
#define NUM_FRASES_PERD     3
// ======================VARIÁVEL GLOBAL=========================
char pedra_mao_esquerda[] =
    "\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m    _______ \x1b[0m\n"
    "\t\t\t\t\t        \x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m---'   ____) \x1b[0m\n"
    "\t\t\t\t\t    \x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m      (_____) \x1b[0m\n"
    "\t\t\t\t\t  \x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m      (_____) \x1b[0m\n"
    "\t\t\t\t\t\x1b[103m.\x1b[101m..\x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m      (____) \x1b[0m\n"
    "\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m---.__(___) \x1b[0m\n";
char pedra_mao_direita[] =
    "\t\t\t\t\t\t  \x1b[44m _______    \x1b[41m...\x1b[101m...\x1b[0m\n"
    "\t\t\t\t\t\t \x1b[44m (____   '---\x1b[41m...\x1b[101m.....\x1b[103m....\x1b[0m\n"
    "\t\t\t\t\t\t\x1b[44m (_____)      \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[0m\n"
    "\t\t\t\t\t\t\x1b[44m (_____)      \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[0m\n"
    "\t\t\t\t\t\t \x1b[44m (____)      \x1b[41m...\x1b[101m.....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[101m..\x1b[103m.\x1b[0m\n"
    "\t\t\t\t\t\t  \x1b[44m (___)__,---\x1b[41m...\x1b[101m...\x1b[0m\n";
char papel_mao_esquerda[] =
    "\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m    _______ \x1b[0m\n"
    "\t\t\t\t\t        \x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m---'   ____)____ \x1b[0m\n"
    "\t\t\t\t\t    \x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m          ______) \x1b[0m\n"
    "\t\t\t\t\t  \x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m          _______) \x1b[0m\n"
    "\t\t\t\t\t\x1b[103m.\x1b[101m..\x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m         _______) \x1b[0m\n"
    "\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m---.__________) \x1b[0m\n";
char papel_mao_direita[] =
    "\t\t\t\t\t\t       \x1b[44m _______    \x1b[41m...\x1b[101m...\x1b[0m\n"
    "\t\t\t\t\t\t  \x1b[44m ____(____   '---\x1b[41m...\x1b[101m.....\x1b[103m....\x1b[0m\n"
    "\t\t\t\t\t\t \x1b[44m (______          \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[0m\n"
    "\t\t\t\t\t\t\x1b[44m (_______          \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[0m\n"
    "\t\t\t\t\t\t \x1b[44m (_______         \x1b[41m...\x1b[101m.....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[101m..\x1b[103m.\x1b[0m\n"
    "\t\t\t\t\t\t   \x1b[44m (__________,---\x1b[41m...\x1b[101m...\x1b[0m\n";
char tesoura_mao_esquerda[] =
    "\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m    _______ \x1b[0m\n"
    "\t\t\t\t\t        \x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m---'   ____)____ \x1b[0m\n"
    "\t\t\t\t\t    \x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m          ______) \x1b[0m\n"
    "\t\t\t\t\t  \x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m       __________) \x1b[0m\n"
    "\t\t\t\t\t\x1b[103m.\x1b[101m..\x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m      (____) \x1b[0m\n"
    "\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m---.__(___) \x1b[0m\n";
char tesoura_mao_direita[] =
    "\t\t\t\t\t\t      \x1b[44m _______    \x1b[41m...\x1b[101m...\x1b[0m\n"
    "\t\t\t\t\t\t \x1b[44m ____(____   '---\x1b[41m...\x1b[101m.....\x1b[103m....\x1b[0m\n"
    "\t\t\t\t\t\t\x1b[44m (______          \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[0m\n"
    "\t\t\t\t\t\t\x1b[44m(__________       \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[0m\n"
    "\t\t\t\t\t\t     \x1b[44m (____)      \x1b[41m...\x1b[101m.....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[101m..\x1b[103m.\x1b[0m\n"
    "\t\t\t\t\t\t      \x1b[44m (___)__,---\x1b[41m...\x1b[101m...\x1b[0m\n";
char titulo_pedra[] =
    "\033[50G ___ ___ ___  ___   _    \n"
    "\033[50G| _ \\ __|   \\| _ \\ /_\\   \n"
    "\033[50G|  _/ _|| |) |   // _ \\  \n"
    "\033[50G|_| |___|___/|_|_\\_/ \\_\\ \n";
char titulo_papel[] =
    "\033[50G ___  _   ___ ___ _    \n"
    "\033[50G| _ \\/_\\ | _ \\ __| |   \n"
    "\033[50G|  _/ _ \\|  _/ _|| |__ \n"
    "\033[50G|_|/_/ \\_\\_| |___|____|\n";
char titulo_tesoura[] =
    "\033[45G _____ ___ ___  ___  _   _ ___   _    \n"
    "\033[45G|_   _| __/ __|/ _ \\| | | | _ \\ /_\\   \n"
    "\033[45G  | | | _|\\__ \\ (_) | |_| |   // _ \\  \n"
    "\033[45G  |_| |___|___/\\___/ \\___/|_|_\\_/ \\_\\ \n";
char titulo_selecao_jogador[] =
    "\t\t\x1b[47m                                                                                             \n"
    "\t\t \x1b[44m                                               \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m           ////\\\\\\\\                            \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m           |      |                            \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m          @  O  O  @                           \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m           |  ~   |         \\__                \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m            \\ -- /          |\\ |               \x1b[47m \x1b[45m                    ,(())),                \x1b[47m \n"
    "\t\t \x1b[44m          ___|  |___        | \\|               \x1b[47m \x1b[45m                   '(('''))'               \x1b[47m \n"
    "\t\t \x1b[44m         /          \\      /|__|               \x1b[47m \x1b[45m                   '(|*_*|)'               \x1b[47m \n"
    "\t\t \x1b[44m        /            \\    / /                  \x1b[47m \x1b[45m                     : = :                 \x1b[47m \n"
    "\t\t \x1b[44m       /  /| .  . |\\  \\  / /                   \x1b[47m \x1b[45m                     _) (_                 \x1b[47m \n"
    "\t\t \x1b[44m      /  / |      | \\  \\/ /                    \x1b[47m \x1b[45m                   /`_ , _`\\               \x1b[47m \n"
    "\t\t \x1b[44m     <  <  |      |  \\   /                     \x1b[47m \x1b[45m                  / (_>*<_) \\              \x1b[47m \n"
    "\t\t \x1b[44m      \\  \\ |  .   |   \\_/                      \x1b[47m \x1b[45m                 / / )   ( \\ \\             \x1b[47m \n"
    "\t\t \x1b[44m       \\  \\|______|                            \x1b[47m \x1b[45m                 \\ \\/  .  \\/ /             \x1b[47m \n"
    "\t\t \x1b[44m         \\_|______|                            \x1b[47m \x1b[45m                  \\_)\\___/(_/              \x1b[47m \n"
    "\t\t \x1b[44m           |      |                            \x1b[47m \x1b[45m                   |  \\_/  )               \x1b[47m \n"
    "\t\t \x1b[44m           |  |   |                            \x1b[47m \x1b[45m                    \\  /  /                \x1b[47m \n"
    "\t\t \x1b[44m           |  |   |                            \x1b[47m \x1b[45m                     \\/  /                 \x1b[47m \n"
    "\t\t \x1b[44m           |__|___|                            \x1b[47m \x1b[45m                     (__;                  \x1b[47m \n"
    "\t\t \x1b[44m           |  |  |                             \x1b[47m \x1b[45m                      \\''\\                 \x1b[47m \n"
    "\t\t \x1b[44m           (  (  |                             \x1b[47m \x1b[45m                       \\''\\                \x1b[47m \n"
    "\t\t \x1b[44m           |  |  |                             \x1b[47m \x1b[45m                       ))'')               \x1b[47m \n"
    "\t\t \x1b[44m           |  |  |                             \x1b[47m \x1b[45m                      ((__/|               \x1b[47m \n"
    "\t\t \x1b[44m          _|  |  |                             \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m      cccC_Cccc___)                            \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t \x1b[44m                                               \x1b[47m \x1b[45m                                           \x1b[47m \n"
    "\t\t\x1b[47m                                                                                             \x1b[0m\n"
;
char jogador_masculino[] =
"\t\t\x1b[47m                                  \n"
"\t\t \x1b[44m                                \x1b[47m \n"
"\t\t \x1b[44m       ////\\\\\\\\                 \x1b[47m \n"
"\t\t \x1b[44m       |      |                 \x1b[47m \n"
"\t\t \x1b[44m      @  O  O  @                \x1b[47m \n"
"\t\t \x1b[44m       |  ~   |         \\__     \x1b[47m \n"
"\t\t \x1b[44m        \\ -- /          |\\ |    \x1b[47m \n"
"\t\t \x1b[44m      ___|  |___        | \\|    \x1b[47m \n"
"\t\t \x1b[44m     /          \\      /|__|    \x1b[47m \n"
"\t\t \x1b[44m    /            \\    / /       \x1b[47m \n"
"\t\t \x1b[44m   /  /| .  . |\\  \\  / /        \x1b[47m \n"
"\t\t \x1b[44m  /  / |      | \\  \\/ /         \x1b[47m \n"
"\t\t \x1b[44m <  <  |      |  \\   /          \x1b[47m \n"
"\t\t\x1b[47m                                  \x1b[0m\n"
;
char jogador_feminino[] = 
"\t\t\x1b[47m                                  \n"
"\t\t \x1b[45m                                \x1b[47m \n"
"\t\t \x1b[45m            ,(())),             \x1b[47m \n"
"\t\t \x1b[45m           '(('''))'            \x1b[47m \n"
"\t\t \x1b[45m           '(|*_*|)'            \x1b[47m \n"
"\t\t \x1b[45m             : = :              \x1b[47m \n"
"\t\t \x1b[45m             _) (_              \x1b[47m \n"
"\t\t \x1b[45m           /`_ , _`\\            \x1b[47m \n"
"\t\t \x1b[45m          / (_>*<_) \\           \x1b[47m \n"
"\t\t \x1b[45m         / / )   ( \\ \\          \x1b[47m \n"
"\t\t \x1b[45m         \\ \\/  .  \\/ /          \x1b[47m \n"
"\t\t \x1b[45m          \\_)\\___/(_/           \x1b[47m \n"
"\t\t \x1b[45m           |  \\_/  )            \x1b[47m \n"
"\t\t\x1b[47m                                  \x1b[0m\n"
;
char titulo_placar[] =
    "\t\t\x1b[0m                                                       \x1b[100m        \x1b[1mPLACAR\x1b[3m             ZÉ   BERÊ  \n"
    "\t\t\x1b[100m                                                                                "
    "\x1b[0m\n"
;
char regras[3][30] =
    {"PEDRA vence da TESOURA",
     "PAPEL vence da PEDRA",
     "TESOURA vence do PAPEL"}
;
char nome_jogadores[2][30] =
    {"ZEZINHO TROCA-TAPA",
     "BERENICE CANELA FINA"}
;
char frases_vencedor[NUM_FRASES_VENC][100] = 
{"Essa foi fácil! Vamos jogar novamente!?",
"Você é muito ruim! Deveria treinar mais!",
"Não quero ver você novamente por aqui!"}
;
char frases_perdedor[NUM_FRASES_PERD][100] = 
{"Você vai me pagar! Vou te pegar na próxima!",
"Com certeza você roubou! Vai se ver comigo!",
"Como pôde! Que ousadia! Você me paga!"}
;
int placar[QTD_JOGADORES] = {0, 0};
int frase_vencedor = 0;
int frase_perdedor = 0;
int contador = 0;
int primeira_rodada = 1;
int humano_vs_cpu = 0;
int personagem = 0;

// ======================FUNÇÃO PRINCIPAL=========================
int main()
{
    int jogada[QTD_JOGADORES] = {0, 0};
    int jogada_humano = 0;

    setlocale(LC_ALL, "Portuguese");
    system("clear");

    srand(time(NULL)); // Seleção de jogadas 0, 1, 2, ver definições
    for (int i = 0; i < QTD_JOGADORES; i++)
    {
        jogada[i] = rand() % NUM_JOGADAS;
    }

#ifdef DEBUG_MODE
    printf("Jogada Selecionada(");
    for (int i = 0; i < QTD_JOGADORES; i++)
    {
        printf("%i", jogada[i]);
        if (i == 0)
        {
            printf(",");
        }
    }
    printf(")\n");
    printf("Aperte ENTER para continuar . . .");
    getchar();
#endif
    if (primeira_rodada)
    {
        // ----------------------------TELA SELEÇÃO------------------------------
        printf("\t\tComo deseja jogar?\n");
        printf("\t\t1 - CPU VS CPU  |  2 - HUMANO VS CPU\n");
        scanf("%i", &humano_vs_cpu);
        getchar();
        humano_vs_cpu--;
        // -------------------TELA DE SELEÇÃO DE PERSONAGEM----------------------
        if (humano_vs_cpu)
        {
            system("clear");
            printf("\x1b[1m\x1b[7m\t\t ESCOLHA SEU PERSONAGEM!     \x1b[0m\n");
            printf("%s", titulo_selecao_jogador);
            printf("\t\t\x1b[1m\x1b[7m        1- %s                           2 - %s             \x1b[0m\n", 
                nome_jogadores[ZEZINHO], nome_jogadores[BERENICE]);
            printf("\t\tEscolha seu personagem -> ");
            scanf("%i", &personagem);
            getchar();
            personagem--;
        }
        primeira_rodada = 0;
    }
    // -----------------------------TELA DO JOGO-----------------------------
    if (humano_vs_cpu)
    {
        system("clear");
        printf("1 - PEDRA | 2 - PAPEL | 3 - TESOURA\n");
        printf("Selecione sua jogada -> ");
        scanf("%i", &jogada_humano);
        getchar();

        jogada_humano--;
        if (personagem == ZEZINHO)
        {
            jogada[ZEZINHO] = jogada_humano;
        }
        if (personagem == BERENICE)
        {
            jogada[BERENICE] = jogada_humano;
        }
    }

#ifdef DEBUG_MODE
    printf("Personagem: %i\n", personagem);
    printf("Jogada selecionada: %i\n", jogada_humano);
    printf("Jogada Zezinho: %i\n", jogada[ZEZINHO]);
    printf("Jogada Berenice: %i\n", jogada[BERENICE]);
    printf("Aperte ENTER para continuar . . .");
    getchar();
#endif

#ifdef __linux__
    printf("\a");
#elif _WIN32
    Beep(750, 300);
#endif

    // ----------------------------------PLACAR--------------------------------
    system("clear");
    printf("%s", titulo_placar);
    printf("\033[2;97H\x1b[47m \x1b[44m  %i  \x1b[47m \x1b[45m  %i  \x1b[47m \x1b[0m\n", placar[ZEZINHO], placar[BERENICE]);
    printf("\t\t\t\t\x1b[1m\x1b[4m%s\x1b[0m\n", nome_jogadores[1]);

    if (jogada[BERENICE] == PEDRA)
    {
        printf("%s", titulo_pedra);
        printf("%s", pedra_mao_esquerda);
    }
    else if (jogada[BERENICE] == PAPEL)
    {
        printf("%s", titulo_papel);
        printf("%s", papel_mao_esquerda);
    }
    else
    {
        printf("%s", titulo_tesoura);
        printf("%s", tesoura_mao_esquerda);
    }
    printf("\n");

#ifdef __linux__
    sleep(2);
#elif _WIN32
    Sleep(2000);
#endif

    if (jogada[ZEZINHO] == PEDRA)
    {
        printf("%s", titulo_pedra);
        printf("%s", pedra_mao_direita);
    }
    else if (jogada[ZEZINHO] == PAPEL)
    {
        printf("%s", titulo_papel);
        printf("%s", papel_mao_direita);
    }
    else
    {
        printf("%s", titulo_tesoura);
        printf("%s", tesoura_mao_direita);
    }
    printf("\t\t\t\t\t\t\t\t\t\x1b[1m\x1b[4m%s\x1b[0m\n", nome_jogadores[0]);

#ifdef __linux__
    printf("\a");
#elif _WIN32
    Beep(750, 300);
#endif

    // -------------------------------REGRAS------------------------------
    if (jogada[ZEZINHO] == PEDRA && jogada[BERENICE] == TESOURA)
    {
        printf("\t\t\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
        printf("\t\t\x1b[7m   %s   \x1b[0m\n", regras[0]);
        placar[ZEZINHO] += 1;
    }
    else if (jogada[ZEZINHO] == PAPEL && jogada[BERENICE] == PEDRA)
    {
        printf("\t\t\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
        printf("\t\t\x1b[7m    %s    \x1b[0m\n", regras[1]);
        placar[ZEZINHO] += 1;
    }
    else if (jogada[ZEZINHO] == TESOURA && jogada[BERENICE] == PAPEL)
    {
        printf("\t\t\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
        printf("\t\t\x1b[7m   %s   \x1b[0m\n", regras[2]);
        placar[ZEZINHO] += 1;
    }
    else if (jogada[BERENICE] == PEDRA && jogada[ZEZINHO] == TESOURA)
    {
        printf("\t\t\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
        printf("\t\t\x1b[7m    %s    \x1b[0m\n", regras[0]);
        placar[BERENICE] += 1;
    }
    else if (jogada[BERENICE] == PAPEL && jogada[ZEZINHO] == PEDRA)
    {
        printf("\t\t\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
        printf("\t\t\x1b[7m     %s     \x1b[0m\n", regras[1]);
        placar[BERENICE] += 1;
    }
    else if (jogada[BERENICE] == TESOURA && jogada[ZEZINHO] == PAPEL)
    {
        printf("\t\t\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
        printf("\t\t\x1b[7m    %s    \x1b[0m\n", regras[2]);
        placar[BERENICE] += 1;
    }
    else
    {
        printf("\t\t\t\x1b[43m\x1b[1m   EMPATE!   \x1b[0m\n");
    }

    //------------------ -REIMPRESSÃO DA PONTUAÇÃO -----------------------
    printf("\033[2;97H\x1b[47m \x1b[44m  %i  \x1b[47m \x1b[45m  %i  \x1b[47m \x1b[0m\n", placar[ZEZINHO], placar[BERENICE]);
    

    
    printf("\033[30;7H\x1b[5m\t\t\t\t\t\tAperte ENTER para continuar . . .\n");
    getchar();
    printf("\x1b[0m");
    system("clear");

    // ---------------------------LOOP DE REPETIÇÃO-------------------------
    if (contador < 2)
    { // Loop de repetição das 3 tentativas
        contador++;
        main();
    }
    if (contador > 0) {
        contador--;
        return 0;
    }

    //--------------------------TELA DE VENCEDOR----------------------------
    srand(time(NULL)); // Seleção de frases
    frase_vencedor = rand() % NUM_FRASES_VENC;
    frase_perdedor = rand() % NUM_FRASES_VENC;

#ifdef DEBUG_MODE
    printf("Numero da frase: %i, %i\n", frase_vencedor, frase_perdedor);
    printf("Frase vencedor:\n");
    printf("%s\n", frases_vencedor[frase_vencedor]);
    printf("Frase perdedor:\n");
    printf("%s\n", frases_perdedor[frase_perdedor]);

    printf("Aperte ENTER para continuar . . .");
    getchar();
#endif

    if(placar[ZEZINHO] > placar[BERENICE])
    {
        printf("%s", jogador_masculino);
        printf("Zezinho venceu!\n");
        printf("%s\n", frases_vencedor[frase_vencedor]);
    } 
    else if (placar[BERENICE > placar[ZEZINHO]])
    {
        printf("%s", jogador_feminino);
        printf("Berenice venceu!\n");
        printf("%s\n", frases_vencedor[frase_vencedor]);
    }
    else
    {
        printf("Zezinho e Berenice empataram!\n");
    }
    
    printf("\033[30;7H\x1b[5m\t\t\t\t\t\tAperte ENTER para continuar . . .\n");
    getchar();
    printf("\x1b[0m");
    system("clear");

    return 0;
}