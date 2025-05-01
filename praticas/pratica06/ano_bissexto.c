#include <stdio.h>
//PAGINA PARA FONTES MASSA
//https://patorjk.com/software/taag/#p=display&f=Fire%20Font-k&t=GAME%20OVER

//PAGINA PARA CORES
//https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a


int main()
{
    int ano = 0;

    printf("Insira o ano: ");
    scanf("%i", &ano);

    int ano_multiplo_4 = ano % 4 == 0;
    int ano_nao_multiplo_100 = ano % 100 != 0;
    int ano_multiplo_4_e_nao_multiplo_100 = ano_multiplo_4 && ano_nao_multiplo_100;
    int ano_multiplo_400 = ano % 400 == 0;
    int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400 = ano_multiplo_4_e_nao_multiplo_100 || ano_multiplo_400;

    printf("%i\n", ano_multiplo_4);
    printf("%i\n", ano_nao_multiplo_100);
    printf("%i\n", ano_multiplo_4_e_nao_multiplo_100);
    printf("%i\n", ano_multiplo_400);
    printf("%i\n", ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400);

    if (ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400)
    {
        printf("O ano %d eh bissexto!\n", ano);
    }
    else
    {
        printf("O ano %d naum eh bissexto!\n", ano);
    }

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("O ano %d eh bissexto!\n", ano);
    }
    else
    {
        printf("O ano %d naum eh bissexto!\n", ano);
    }

    return 0;
}