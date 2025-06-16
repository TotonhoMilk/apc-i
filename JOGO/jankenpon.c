/*
   ___  ___   _   _  _   __ _____ _   _ ______ _____ _   _
  |_  |/ _ \ | \ | || | / /|  ___| \ | || ___ \  _  | \ | |
    | / /_\ \|  \| || |/ / | |__ |  \| || |_/ / | | |  \| |
    | |  _  || . ` ||    \ |  __|| . ` ||  __/| | | | . ` |
/\__/ / | | || |\  || |\  \| |___| |\  || |   \ \_/ / |\  |
\____/\_| |_/\_| \_/\_| \_/\____/\_| \_/\_|    \___/\_| \_/
                                                            Escrito em 2025.
                                                            Por: Antônio Alexandre Cavalcante Leite
                                                                 Paulo Gomes Leite
                                                            ACPI - Prof Reginaldo.
    fonte: Doom
    https://patorjk.com/software/taag/#p=display&f=Doom&t=JANKENPON
*/

// ==================INCLUSÃO DE BIBLIOTECAS======================
#include "jankenpon_conf.h"

// ======================FUNÇÃO PRINCIPAL=========================
int main()
{
    setlocale(LC_ALL, "Portuguese");

    // ----------------------TELA INTRODUÇÃO--------------------------
    if (!primeira_rodada)
    {
        //---------------------INTRODUÇÃO----------------------------------
#ifdef INTRO // Mostra ou esconde a introdução do pré-compilador.
        system("clear");
        printf("\033[?25l"); // Esconder o cursor.
        printf("\n\n\n%s", titulo_abertura_1);

        SLEEP_1;

        printf("%s", titulo_abertura_2);

        SLEEP_1;

        printf("%s\n", titulo_abertura_3);

        SLEEP_1;

        system("clear");
        printf("\n\n\n\a\x1b[5m%s\x1b[0m\n", tela_em_branco_jogo);
        printf("\x1b[5m%s\x1b[0m\n", titulo_abertura_4);
        printf("\x1b[5m%s\x1b[0m\n", titulo_abertura_5);

        SLEEP_3;

        system("clear");
        printf("\n\n\n%s\n", tela_em_branco_jogo);
        printf("\x1b[0m%s\x1b[0m\n", titulo_abertura_4);
        printf("\x1b[0m%s\x1b[0m\n", titulo_abertura_5);

        //---------------------------A T E N Ç Ã O-------------------------------
        // Fomato de "Aperte ENTER para continuar" que deve ser usado em todo jogo.
        printf("\n\n\t\t\t\t\t\tAperte\x1b[3m\x1b[1m\x1b[5m ENTER \x1b[0mpara continuar . . .");
        getchar();
//-----------------------------------------------------------------------
#endif

        // ------------------TELA SELEÇÃO MODO JOGO-----------------------
        system("clear");

        while (TRUE)
        {
            system("clear");

            printf("\033[?25l");
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            printf("%s\n", texto_selecao_modo_jogo);
            printf("\033[?25h");
            printf("\033[23;35H\x1b[100mEscolha o modo como deseja jogar e aperte ENTER --> ");

            scanf("%d", &opcao_modo_jogo);
            while (getchar() != '\n')
                ;

            if (opcao_modo_jogo == 1 || opcao_modo_jogo == 2)
            {
                primeira_rodada = 1;
                opcao_modo_jogo--;
                break;
            }
            else
            {
                printf("\033[?25l");
                printf("\033[23;35H\x1b[100m                OPÇÃO INVÁLIDA!. Tente novamente!                       \n");

                SLEEP_2;

                system("clear"); // RESET da tela
                printf("\n\n\n%s\n", tela_em_branco_jogo);
                system("clear");

                continue;
            }
        }

        // ------------------TELA SELEÇÃO PERSONAGEM-----------------------
        system("clear"); // RESET da tela
        printf("\n\n\n%s\n", tela_em_branco_jogo);
        system("clear");

        if (opcao_modo_jogo == CPU_VS_HUMANO)
        {
            int opcao_invalida = 0;

            while (TRUE)
            {
                //---------------TELA CHOOSE YOUR FIGHTER--------------------
                if (opcao_invalida == 0)
                {
                    printf("\033[?25l");
                    printf("\n\n\n%s\n", tela_em_branco_jogo);
                    printf("%s\n", texto_selecao_choose);

                    SLEEP_1;

                    printf("%s\n", texto_selecao_your);

                    SLEEP_1;

                    printf("%s\n", texto_selecao_fighter);

                    SLEEP_1;
                }

                system("clear");

                printf("\n\n\n%s\n", tela_em_branco_jogo);
                printf("%s\n", jogador_masculino);
                printf("%s\n", texto_jogador_masculino);
                printf("%s\n", jogador_feminino);
                printf("%s\n", texto_jogador_feminino);

                printf("\033[?25h");
                printf("\033[26;43H\x1b[100mEscolha o seu jogador e aperter ENTER --> ");

                scanf("%d", &opcao_personagem);
                while (getchar() != '\n')
                    ;

                if (opcao_personagem == 1 || opcao_personagem == 2)
                {
                    opcao_personagem--;
                    break;
                }
                else
                {
                    printf("\033[?25l");
                    printf("\033[26;43H\x1b[100m      OPÇÃO INVÁLIDA!. Tente novamente!                       \n");
                    opcao_invalida = 1;

                    SLEEP_2;

                    system("clear"); // RESET da tela
                    printf("\n\n\n%s\n", tela_em_branco_jogo);
                    system("clear");

                    continue;
                }
            }
        }
    }

    system("clear"); // RESET da tela
    printf("\n\n\n%s\n", tela_em_branco_jogo);
    system("clear");

    // ------------------TELA PRINCIPAL DO JOGO----------------------- TO DO
    // ----------------TELA SELEÇÃO JOGADA HUMANO---------------------
    system("clear");

    if (opcao_modo_jogo == CPU_VS_HUMANO)
    {
        while (TRUE)
        {
            printf("\033[?25l");
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            printf("%s\n", titulo_escolha_sua_jogada);
            printf("%s\n", selecao_pedra);
            printf("%s\n", titulo_pedra);
            printf("%s\n", selecao_papel);
            printf("%s\n", titulo_papel);
            printf("%s\n", selecao_tesoura);
            printf("%s\n", titulo_tesoura);
            printf("\033[26;43H\x1b[100mEscolha sua jogada e aperter ENTER --> ");
            printf("\033[?25h");
            scanf("%d", &opcao_jogada_humano);
            while (getchar() != '\n')
                ;

            // ver a possibilidade de trocar por switch e realizar a recpção da jogada do humano aqui.

            if (opcao_jogada_humano == 1 || opcao_jogada_humano == 2 || opcao_jogada_humano == 3)
            {
                opcao_jogada_humano--;
                break;
            }
            else
            {
                printf("\033[?25l");
                printf("\033[26;43H\x1b[100m      OPÇÃO INVÁLIDA!. Tente novamente!                       \n");

                SLEEP_2;

                system("clear"); // RESET da tela
                printf("\n\n\n%s\n", tela_em_branco_jogo);
                system("clear");

                continue;
            }
        }
    }

    system("clear"); // RESET da tela
    printf("\n\n\n%s\n", tela_em_branco_jogo);
    system("clear");

    // Fazer tela que mostre a seleção da jogada!

    // ------------------SELEÇÃO JOGADA ALEATÓRIA---------------------
    int jogadas[] = {0, 0};

    srand(time(NULL));

    for (int i = 0; i < QTD_JOGADORES; i++) // Seleção para 2 jogadores
    {
        jogadas[i] = rand() % QTD_JOGADAS; // Seleção entre 3 possíveis jogadas.
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

    // FAZER TELA DO PERSONAGEM COM A JOGADA E O TEXTO DE LUTA.

    //-------------------------TELA RODADA-----------------------------
    printf("\033[?25l");
    printf("\n\n\n%s\n", tela_em_branco_jogo);
    printf("%s\n", titulo_round);

    SLEEP_1;

    if (contador == 1)
    {
        printf("%s\n", titulo_1);
    }
    else if (contador == 2)
    {
        printf("%s\n", titulo_2);
    }
    else
    {
        printf("%s\n", titulo_3);
    }

    SLEEP_1;

    printf("%s\n", titulo_fight);

    SLEEP_1;

    //----------------------------PLACAR-------------------------------
    // fazer a tela princital aqui...!
    system("clear");

    printf("\033[?25l");
    printf("\n\n\n%s\n", tela_em_branco_jogo);
    printf("%s\n", titulo_placar);
    printf("%s\n", titulo_ze);
    printf("%s\n", titulo_bere);
    printf("%s\n", titulo_empate);
    printf("%s\n", titulo_em_branco);
    printf("%s\n", titulo_zezinho);
    printf("%s\n", titulo_berenice);

    // ------------------ATRIBUIÇÃO DAS JOGADAS------------------------
    if (jogadas[ZEZINHO] == PEDRA)
    {
        printf("%s\n", zezinho_pedra);
        printf("\x1b[7m\x1b[1m\033[16;45H    PEDRA   \x1b[0m\n");
    }
    else if (jogadas[ZEZINHO] == PAPEL)
    {
        printf("%s\n", zezinho_papel);
        printf("\x1b[7m\x1b[1m\033[16;45H    PAPEL   \x1b[0m\n");
    }
    else
    {
        printf("%s\n", zezinho_tesoura);
        printf("\x1b[7m\x1b[1m\033[16;46H  TESOURA  \x1b[0m\n");
    }

    if (jogadas[BERENICE] == PEDRA)
    {
        printf("%s\n", berenice_pedra);
        printf("\x1b[7m\x1b[1m\033[21;69H    PEDRA   \x1b[0m\n");
    }
    else if (jogadas[BERENICE] == PAPEL)
    {
        printf("%s\n", berenice_papel);
        printf("\x1b[7m\x1b[1m\033[21;72H    PAPEL   \x1b[0m\n");
    }
    else
    {
        printf("%s\n", berenice_tesoura);
        printf("\x1b[7m\x1b[1m\033[21;71H  TESOURA  \x1b[0m\n");
    }

    // --------------------------REGRAS------------------------------
    if (jogadas[ZEZINHO] == PEDRA && jogadas[BERENICE] == TESOURA)
    {
        printf("\033[23;24H\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
        printf("\033[24;24H\x1b[7m   %s   \x1b[0m\n", regras[0]);
        placar[ZEZINHO]++;
    }
    else if (jogadas[ZEZINHO] == PAPEL && jogadas[BERENICE] == PEDRA)
    {
        printf("\033[23;24H\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
        printf("\033[24;24H\x1b[7m    %s    \x1b[0m\n", regras[1]);
        placar[ZEZINHO]++;
    }
    else if (jogadas[ZEZINHO] == TESOURA && jogadas[BERENICE] == PAPEL)
    {
        printf("\033[23;24H\x1b[1m\x1b[44m %s VENCEU! \n\x1b[0m", nome_jogadores[ZEZINHO]);
        printf("\033[24;24H\x1b[7m   %s   \x1b[0m\n", regras[2]);
        placar[ZEZINHO]++;
    }
    else if (jogadas[BERENICE] == PEDRA && jogadas[ZEZINHO] == TESOURA)
    {
        printf("\033[23;23H\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
        printf("\033[24;23H\x1b[7m    %s    \x1b[0m\n", regras[0]);
        placar[BERENICE]++;
    }
    else if (jogadas[BERENICE] == PAPEL && jogadas[ZEZINHO] == PEDRA)
    {
        printf("\033[23;23H\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
        printf("\033[24;23H\x1b[7m     %s     \x1b[0m\n", regras[1]);
        placar[BERENICE]++;
    }
    else if (jogadas[BERENICE] == TESOURA && jogadas[ZEZINHO] == PAPEL)
    {
        printf("\033[23;23H\x1b[1m\x1b[45m %s VENCEU! \x1b[0m\n", nome_jogadores[BERENICE]);
        printf("\033[24;23H\x1b[7m    %s    \x1b[0m\n", regras[2]);
        placar[BERENICE]++;
    }
    else
    {
        printf("\033[23;30H\x1b[7m    EMPATE    \x1b[0m\n");
        placar[EMPATE]++;
    }

    printf("\033[6;88H\x1b[44m\x1b[1m %02i \x1b[0m\n", placar[0]);
    printf("\033[6;93H\x1b[45m\x1b[1m  %02i  \x1b[0m\n", placar[1]);
    printf("\033[6;100H\x1b[43m\x1b[1m   %02i   \x1b[0m\n", placar[2]);

    printf("\033[29;48H\x1b[1mAperte\x1b[3m\x1b[1m\x1b[5m ENTER \x1b[0mpara continuar . . .");
    getchar();

    // ------------------------LOOP DE REPETIÇÃO-----------------------
    if (contador < 3)
    { // Loop de repetição das 3 tentativas
        contador++;
        main();
    }
    if (contador > 1)
    {
        contador--;
        return 0;
    }

    // -------------------------TESTE VENCEDOR------------------------- TO DO
    system("clear");

    printf("\033[?25l");
    printf("\n\n\n%s\n", tela_em_branco_jogo);

    int frase = 0;
    srand(time(NULL));
    frase = rand() % 4;

    if (placar[ZEZINHO] > placar[BERENICE])
    {
        printf("%s\n", titulo_vencedor);
        printf("%s\n", vencedor_masculino);
        printf("%s\n", texto_vencedor_masculino);
        printf("%s", frase_vencedor[frase]);
    }
    else if (placar[BERENICE] > placar[ZEZINHO])
    {
        printf("%s\n", titulo_vencedor);
        printf("%s\n", vencedor_feminino);
        printf("%s\n", texto_vencedor_feminino);
        printf("%s", frase_vencedor[frase]);
    }
    else if (placar[EMPATE] == 3 || placar[ZEZINHO] == placar[BERENICE])
    {
        printf("%s\n", titulo_empate_grande);
    }

    printf("\x1b[7m\x1b[1m\033[13;75H        PLACAR        \x1b[0m\n");
    printf("\033[14;75H\x1b[7m \x1b[0m\x1b[44m\x1b[1m ZE \x1b[7m \x1b[0m\n");
    printf("\033[14;81H\x1b[45m\x1b[1m BERE \x1b[7m \x1b[0m\n");
    printf("\033[14;88H\x1b[43m\x1b[1m EMPATE \x1b[7m \x1b[0m\n");
    printf("\033[15;75H\x1b[7m \x1b[0m\x1b[44m\x1b[1m %02i \x1b[0m\n", placar[0]);
    printf("\033[15;80H\x1b[7m \x1b[0m\x1b[45m\x1b[1m  %02i  \x1b[0m\n", placar[1]);
    printf("\033[15;87H\x1b[7m \x1b[0m\x1b[43m\x1b[1m   %02i   \x1b[0m\x1b[7m \x1b[0m\n", placar[2]);

    printf("\033[29;48H\x1b[0m\x1b[1mAperte\x1b[3m\x1b[1m\x1b[5m ENTER \x1b[0m\x1b[1mpara continuar . . .");
    getchar();

    // ----------------------JOGAR NOVAMENTE?-------------------------
    system("clear");

    int opcao_jogar_novamente = 0;

    while (TRUE)
    {
        printf("\033[?25l");
        printf("\n\n\n%s\n", tela_em_branco_jogo);
        printf("%s\n", titulo_continue);
        printf("%s\n", titulo_sim_nao);
        printf("\033[?25h");
        printf("\033[23;43H\x1b[100mEscolha sua opção e aperte ENTER --> ");

        scanf("%i", &opcao_jogar_novamente);
        while (getchar() != '\n')
            ;

        switch (opcao_jogar_novamente)
        {
        case 1:
            for (int i = 0; i < 3; i++)
                placar[i] = 0;
            contador = 1;
            opcao_modo_jogo = 0;
            opcao_personagem = 0;
            opcao_jogada_humano = 0;
            primeira_rodada = 0;

            system("clear"); // RESET da tela
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            system("clear");

            main();
        case 2:
            system("clear"); // RESET da tela
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            system("clear");

            printf("\033[?25l");
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            printf("%s\n", titulo_game_over);

            printf("\033[?25h");
            printf("\033[20;48H\x1b[1m\x1b[100mAperte\x1b[3m\x1b[1m\x1b[5m ENTER \x1b[0m\x1b[100mpara continuar . . .");
            getchar();

            printf("\033[?25h"); // Reset do Terminal
            printf("\x1b[0m");

            system("clear"); // RESET da tela
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            system("clear");

            exit(0); // Saida limpa
        default:
            printf("\033[?25l");
            printf("\033[23;43H\x1b[100m      OPÇÃO INVÁLIDA!. Tente novamente!                       \n");

            SLEEP_2;

            system("clear"); // RESET da tela
            printf("\n\n\n%s\n", tela_em_branco_jogo);
            system("clear");
            break;
        }
    }
}