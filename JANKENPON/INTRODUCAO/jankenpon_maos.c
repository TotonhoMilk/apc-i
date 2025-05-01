//============INCLUSÃO DE BIBLIOTECA ===============
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//================== DEFINIÇÕES ====================
//#define DEBUG_MODE

//=============== VARIAVEIS GLOBAL =================
char pedra_mao_esquerda[] = 
"\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m    _______ \x1b[0m\n"
"\t\t\t\t\t        \x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m---'   ____) \x1b[0m\n"
"\t\t\t\t\t    \x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m      (_____) \x1b[0m\n"
"\t\t\t\t\t  \x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m      (_____) \x1b[0m\n"
"\t\t\t\t\t\x1b[103m.\x1b[101m..\x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m      (____) \x1b[0m\n"
"\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m---.__(___) \x1b[0m\n"
;
char pedra_mao_direita[] =
"\t\t\t\t\t\t  \x1b[44m _______    \x1b[41m...\x1b[101m...\x1b[0m\n"
"\t\t\t\t\t\t \x1b[44m (____   '---\x1b[41m...\x1b[101m.....\x1b[103m....\x1b[0m\n"
"\t\t\t\t\t\t\x1b[44m (_____)      \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[0m\n"
"\t\t\t\t\t\t\x1b[44m (_____)      \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[0m\n"
"\t\t\t\t\t\t \x1b[44m (____)      \x1b[41m...\x1b[101m.....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[101m..\x1b[103m.\x1b[0m\n"
"\t\t\t\t\t\t  \x1b[44m (___)__,---\x1b[41m...\x1b[101m...\x1b[0m\n"
;
char papel_mao_esquerda[] =
"\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m    _______ \x1b[0m\n"
"\t\t\t\t\t        \x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m---'   ____)____ \x1b[0m\n"
"\t\t\t\t\t    \x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m          ______) \x1b[0m\n"
"\t\t\t\t\t  \x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m          _______) \x1b[0m\n"
"\t\t\t\t\t\x1b[103m.\x1b[101m..\x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m         _______) \x1b[0m\n"
"\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m---.__________) \x1b[0m\n"
;
char papel_mao_direita[] =
"\t\t\t\t\t\t       \x1b[44m _______    \x1b[41m...\x1b[101m...\x1b[0m\n"
"\t\t\t\t\t\t  \x1b[44m ____(____   '---\x1b[41m...\x1b[101m.....\x1b[103m....\x1b[0m\n"
"\t\t\t\t\t\t \x1b[44m (______          \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[0m\n"
"\t\t\t\t\t\t\x1b[44m (_______          \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[0m\n"
"\t\t\t\t\t\t \x1b[44m (_______         \x1b[41m...\x1b[101m.....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[101m..\x1b[103m.\x1b[0m\n"
"\t\t\t\t\t\t   \x1b[44m (__________,---\x1b[41m...\x1b[101m...\x1b[0m\n"
;
char tesoura_mao_esquerda[] =
"\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m    _______ \x1b[0m\n"
"\t\t\t\t\t        \x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m---'   ____)____ \x1b[0m\n"
"\t\t\t\t\t    \x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m          ______) \x1b[0m\n"
"\t\t\t\t\t  \x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m....\x1b[41m.....\x1b[45m       __________) \x1b[0m\n"
"\t\t\t\t\t\x1b[103m.\x1b[101m..\x1b[103m..\x1b[101m...\x1b[103m....\x1b[101m.....\x1b[41m...\x1b[45m      (____) \x1b[0m\n"
"\t\t\t\t\t              \x1b[101m...\x1b[41m...\x1b[45m---.__(___) \x1b[0m\n"
;
char tesoura_mao_direita[] =
"\t\t\t\t\t\t      \x1b[44m _______    \x1b[41m...\x1b[101m...\x1b[0m\n"
"\t\t\t\t\t\t \x1b[44m ____(____   '---\x1b[41m...\x1b[101m.....\x1b[103m....\x1b[0m\n"
"\t\t\t\t\t\t\x1b[44m (______          \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[0m\n"
"\t\t\t\t\t\t\x1b[44m(__________       \x1b[41m.....\x1b[101m....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[0m\n"
"\t\t\t\t\t\t     \x1b[44m (____)      \x1b[41m...\x1b[101m.....\x1b[103m....\x1b[101m...\x1b[103m..\x1b[101m..\x1b[103m.\x1b[0m\n"
"\t\t\t\t\t\t      \x1b[44m (___)__,---\x1b[41m...\x1b[101m...\x1b[0m\n"
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
char titulo_jankenpon[] =
//"\x1b[0m"
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
"\t\t \x1b[100m                     .'   .' \\   /   /   \\          / .`/ ../         ;                    \x1b[47m \n"
"\t\t \x1b[100m                   ,----,'    | /   .     :        /' / ;\\` `\\  .`-    '                   \x1b[47m \n"
"\t\t \x1b[100m                   |    :  .  ;.   /   ;.  \\      /  /  .'\\___\\/  \\    :                   \x1b[47m \n"
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
char game_over[] =
"\033[15;0H \x1b[5m"
"\033[40G  __|    \\     \\  |  __|     _ \\ \\ \\   / __|  _ \\ \n"
"\033[40G (_ |   _ \\   |\\/ |  _|     (   | \\ \\ /  _|     / \n"
"\033[40G\\___| _/  _\\ _|  _| ___|   \\___/   \\_/  ___| _|_\\ \n \x1b[0m"                                               
;
char titulo_pedra[] = 
"\033[50G ___ ___ ___  ___   _    \n"   
"\033[50G| _ \\ __|   \\| _ \\ /_\\   \n"
"\033[50G|  _/ _|| |) |   // _ \\  \n"
"\033[50G|_| |___|___/|_|_\\_/ \\_\\ \n"
;
char titulo_papel[] = 
"\033[50G ___  _   ___ ___ _    \n"
"\033[50G| _ \\/_\\ | _ \\ __| |   \n"
"\033[50G|  _/ _ \\|  _/ _|| |__ \n"
"\033[50G|_|/_/ \\_\\_| |___|____|\n"
;
char titulo_tesoura[] = 
"\033[45G _____ ___ ___  ___  _   _ ___   _    \n"
"\033[45G|_   _| __/ __|/ _ \\| | | | _ \\ /_\\   \n"
"\033[45G  | | | _|\\__ \\ (_) | |_| |   // _ \\  \n"
"\033[45G  |_| |___|___/\\___/ \\___/|_|_\\_/ \\_\\ \n"
;                                                                                                           

//================ FUNÇÃO PRINCIPAL ================
int main(){
    #ifndef DEBUG_MODE

    size_t sec = 3;

    system("clear");

    printf("\n\n");
    printf("%s", titulo_pedra);
    printf("%s", pedra_mao_esquerda);
    printf("\n");

    printf("%s", titulo_pedra);
    printf("%s", pedra_mao_direita);
    printf("\n\n");

    sleep(sec);
    system("clear");

    printf("\n\n");
    printf("%s", titulo_papel);
    printf("%s", papel_mao_esquerda);
    printf("\n");

    printf("%s", titulo_papel);
    printf("%s", papel_mao_direita);
    printf("\n\n");

    sleep(sec);
    system("clear");

    printf("\n\n");
    printf("%s", titulo_tesoura);
    printf("%s", tesoura_mao_esquerda);
    printf("\n");

    printf("%s", titulo_tesoura);
    printf("%s", tesoura_mao_direita);
    printf("\n\n");

    sleep(sec);
    system("clear");

    printf("%s\n", titulo_selecao_jogador);
    printf("\t\t\t\t\t\t\x1b[5mAperte ENTER para continuar . . .\n");
    getchar();
    fflush(stdin);
    printf("\x1b[0m");
    
    system("clear");

    printf("%s\n", game_over);
    sleep(2);
    printf("\t\t\t\t\t\tPressione ENTER para sair . . .\n");
    getchar();
    system("clear");

    printf("\n\n%s", jogador_feminino);

    sleep(sec);
    system("clear");

    printf("\n\n%s", jogador_masculino);

    sleep(sec);
    system("clear");

    printf("\n\n\n%s", titulo_abertura_1);
    sleep(1);
    printf("%s", titulo_abertura_2);
    sleep(1);
    printf("%s\n", titulo_abertura_3);
    sleep(2);

    system("clear");

    printf("\x1b[5m");
    printf("\n\n\n%s", titulo_abertura_1);
    printf("%s", titulo_abertura_2);
    printf("%s\n", titulo_abertura_3);
    printf("\x1b[0m");
    sleep(5);

    system("clear");

    printf("\n\n\n%s\n\n", titulo_jankenpon);

    #endif

    

    return 0;
}