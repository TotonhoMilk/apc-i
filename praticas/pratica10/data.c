#include <stdio.h>

int main()
{
    struct data_t
    {
        int dia;
        int mes;
        int ano;
    };

    struct data_t data;

    printf("Entre com um dia: ");
    scanf("%i", &data.dia);
    while (getchar()!='\n');
    printf("Entre com um mes: ");
    scanf("%i", &data.mes);
    while (getchar()!='\n');
    printf("Entre com um ano: ");
    scanf("%i", &data.ano);
    while (getchar()!='\n');

    printf("A data no formato BR: %02i/%02i/%04i\n", data.dia, data. mes, data.ano);
    printf("A data no formato US: %02i/%02i/%04i\n", data.mes, data.dia, data.ano);
    

    return 0;
}