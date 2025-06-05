#include <stdio.h>

#define SEGUNDA 1
#define TERCA 2
#define QUARTA 3
#define QUINTA 4
#define SEXTA 5
#define SABADO 6
#define DOMINGO 7

int main()
{
    enum dias_da_semana_e
    {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };

    enum boolean {false, true};

    printf("Informe o dia da semana (1 a 7) --> ");
    int dia_da_semana = 0;
    scanf("%i", &dia_da_semana);

    switch (dia_da_semana)
    {
    case seg:
    case ter:
    case qua:
    case qui:
    case sex:
        printf("Eh um dia util\n");
        break;
    case sab:
    case dom:
        printf("Naum eh um dia util\n");
        break;
    default:
        printf("Dia invalido!\n");
    }
}