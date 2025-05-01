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


// --------------------VARIAVEIS MODO JOGO------------------------
                                  
char texto_selecao_modo_jogo[] =   
"\x1b[100m"                                         
"\033[7;40H  _      ___ ___ _   _          ___ ___ _   _ \n"
"\033[8;40H / |    / __| _ \\ | | | __ __  / __| _ \\ | | |\n"
"\033[9;40H | |_  | (__|  _/ |_| | \\ \\ / | (__|  _/ |_| |\n"
"\033[10;40H |_(_)  \\___|_|  \\___/  /_\\_\\  \\___|_|  \\___/ \x1b[0m\n"
"\x1b[100m"
"\033[15;30H ___      ___ ___ _   _         _  _ _   _ __  __   _   _  _  ___ " 
"\033[16;30H|_  )    / __| _ \\ | | | __ __ | || | | | |  \\/  | /_\\ | \\| |/ _ \\ "
"\033[17;30H / / _  | (__|  _/ |_| | \\ \\ / | __ | |_| | |\\/| |/ _ \\| .` | (_) |"
"\033[18;30H/___(_)  \\___|_|  \\___/  /_\\_\\ |_||_|\\___/|_|  |_/_/ \\_\\_|\\_|\\___/ \x1b[0m\n"
;                                                             
char tela_selecao_modo_jogo[] =
"\t\t\x1b[47m                                                                                             \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t \x1b[100m                                                                                           \x1b[47m \n"
"\t\t\x1b[47m                                                                                             \x1b[0m"
;                              
                           
int teste = 0; // apenas para teste.

int main()
{
    system("clear");
    printf("\033[?25l");
    printf("\n\n\n%s\n", tela_selecao_modo_jogo);
    printf("%s\n", texto_selecao_modo_jogo);
    printf("\033[?25h");
    printf("\033[23;45H\x1b[100mEscolha o modo como deseja jogar --> ");
    scanf("%d", &teste); // apenas para parar o sistema

    return 0;
}