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
#define INTRO

// ----------------------VARIAVEIS INTRODUÇÃO--------------------------
char titulo_abertura_1[] =
"\t\t\x1b[41m                                                                                             \x1b[47m\n"
"\t\t\x1b[41m                                                                                             \x1b[47m\n"
"\t\t\x1b[41m                                                         ___ ___ ___  ___   _                \x1b[47m\n"
"\t\t\x1b[41m                                                        | _ \\ __|   \\| _ \\ /_\\               \x1b[47m\n"
"\t\t\x1b[41m                                                        |  _/ _|| |) |   // _ \\              \x1b[47m\n"
"\t\t\x1b[41m                                                        |_| |___|___/|_|_\\_/ \\_\\             \x1b[47m\n"
"\t\t\x1b[41m                                                                                             \x1b[47m\n"
"\t\t\x1b[41m                                                                                             \x1b[47m\n"
;
char titulo_abertura_2[] = 
"\t\t\x1b[43m                                                                                             \x1b[47m\n"
"\t\t\x1b[43m                                                                                             \x1b[47m\n"
"\t\t\x1b[43m           ___  _   ___ ___ _                                                                \x1b[47m\n"
"\t\t\x1b[43m          | _ \\/_\\ | _ \\ __| |                                                               \x1b[47m\n"
"\t\t\x1b[43m          |  _/ _ \\|  _/ _|| |__                                                             \x1b[47m\n"
"\t\t\x1b[43m          |_|/_/ \\_\\_| |___|____|                                                            \x1b[47m\n"
"\t\t\x1b[43m                                                                                             \x1b[47m\n"
"\t\t\x1b[43m                                                                                             \x1b[47m\n"
;
char titulo_abertura_3[] =
"\t\t\x1b[44m                                                                                             \x1b[47m\n"
"\t\t\x1b[44m                                                                                             \x1b[47m\n"
"\t\t\x1b[44m                                            _____ ___ ___  ___  _   _ ___   _                \x1b[47m\n"
"\t\t\x1b[44m                                           |_   _| __/ __|/ _ \\| | | | _ \\ /_\\               \x1b[47m\n"
"\t\t\x1b[44m                                             | | | _|\\__ \\ (_) | |_| |   // _ \\              \x1b[47m\n"
"\t\t\x1b[44m                                             |_| |___|___/\\___/ \\___/|_|_\\_/ \\_\\             \x1b[47m\n"
"\t\t\x1b[44m                                                                                             \x1b[47m\n"
"\t\t\x1b[44m                                                                                             \x1b[47m\n"
"\x1b[0m"
;
char introducao_titulo[] =
"\t\t\x1b[47m                                                                                             \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m          ██╗ █████╗ ███╗   ██╗██╗  ██╗███████╗███╗   ██╗██████╗  ██████╗ ███╗   ██╗       \x1b[47m \n"
"\t\t \x1b[100m          ██║██╔══██╗████╗  ██║██║ ██╔╝██╔════╝████╗  ██║██╔══██╗██╔═══██╗████╗  ██║       \x1b[47m \n"
"\t\t \x1b[100m          ██║███████║██╔██╗ ██║█████╔╝ █████╗  ██╔██╗ ██║██████╔╝██║   ██║██╔██╗ ██║       \x1b[47m \n"
"\t\t \x1b[100m     ██   ██║██╔══██║██║╚██╗██║██╔═██╗ ██╔══╝  ██║╚██╗██║██╔═══╝ ██║   ██║██║╚██╗██║       \x1b[47m \n"
"\t\t \x1b[100m     ╚█████╔╝██║  ██║██║ ╚████║██║  ██╗███████╗██║ ╚████║██║     ╚██████╔╝██║ ╚████║       \x1b[47m \n"
"\t\t \x1b[100m      ╚════╝ ╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═══╝╚═╝      ╚═════╝ ╚═╝  ╚═══╝       \x1b[47m \n"
"\t\t \x1b[100m                                                          .--,-``-.                        \x1b[47m \n"
"\t\t \x1b[100m                       ,----,     ,----..            ,--,/   /     '.                      \x1b[47m \n"
"\t\t \x1b[100m                     .'   .' \\   /   /   \\          / .`/ ../        ;                     \x1b[47m \n"
"\t\t \x1b[100m                   ,----,'    | /   .     :        /' / ;\\` `\\  .`-   '                    \x1b[47m \n"
"\t\t \x1b[100m                   |    :  .  ;.   /   ;.  \\      /  /  .'\\___\\/  \\   :                    \x1b[47m \n"
"\t\t \x1b[100m                   ;    |.'  /.   ;   /  ` ;     /  / ./      \\   :   |                    \x1b[47m \n"
"\t\t \x1b[100m                   `----'/  ; ;   |  ; \\ ; |    / ./  /       /  /   /                     \x1b[47m \n"
"\t\t \x1b[100m                     /  ;  /  |   :  | ; | '   /  /  /        \\  \\ \\                       \x1b[47m \n"
"\t\t \x1b[100m                    ;  /  /-, .   |  ' ' ' :  /  /  /     ___ /  :  |                      \x1b[47m \n"
"\t\t \x1b[100m                   /  /  /.`| '   ;  \\;/  |  ;  /  /     /   /\\ /    :                     \x1b[47m \n"
"\t\t \x1b[100m                 ./__;      :  \\  \\  ',  /. /__;  /     / ,,/  ',-   .                     \x1b[47m \n"
"\t\t \x1b[100m                 |   :    .'    ;  :    /  |   : /      \\''\\         ;                     \x1b[47m \n"
"\t\t \x1b[100m                 ;   | .'        \\  \\ .'   ;   |/        \\  \\      .'                      \x1b[47m \n"
"\t\t \x1b[100m                 `---'            `---`    `---'          `--`-,,-'                        \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t\x1b[47m                                                                                             \x1b[0m"
;

int main()
{
    //---------------------INTRODUÇÃO----------------------------------
#ifdef INTRO // Mostra ou esconde a introdução do pré-compilador.
    system("clear");
    printf("\033[?25l"); // Esconder o cursor.
    printf("\n\n\n%s", titulo_abertura_1);
#ifdef __linux__
    sleep(2);
#elif _WIN32
    Sleep(2000);
#endif
    printf("%s", titulo_abertura_2);
#ifdef __linux__
    sleep(2);
#elif _WIN32
    Sleep(2000);
#endif
    printf("%s\n", titulo_abertura_3);
#ifdef __linux__
    sleep(2);
#elif _WIN32
    Sleep(2000);
#endif
    system("clear");
    printf("\n\n\n\a\x1b[5m%s\x1b[0m\n", introducao_titulo);
#ifdef __linux__
    sleep(3);
#elif _WIN32
    Sleep(3000);
#endif
    system("clear");
    printf("\n\n\n%s\n", introducao_titulo);
#ifdef __linux__
    sleep(2);
#elif _WIN32
    Sleep(2000);
#endif
//---------------------------A T E N Ç Ã O-------------------------------
// Fomato de "Aperte ENTER para continuar" que deve ser usado em todo jogo.
    printf("\n\t\t\t\t\t\tAperte\x1b[3m\x1b[1m\x1b[5m ENTER \x1b[0mpara continuar . . .");
    getchar();
//-----------------------------------------------------------------------
#endif

    //-------------------------COPIAR ATÉ AQUI---------------------------

    system("clear");
    printf("\033[?25h"); // Mostrar o cursor.
    printf("\033[10;50HFIM DA INTRODUCAO\x1b[0m\n\n\n\n\n\n");

    return 0;
}