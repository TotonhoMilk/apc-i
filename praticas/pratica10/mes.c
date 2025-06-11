#include <stdio.h>

int main()
{
    enum mes_e 
    {
        jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez
    };

    char meses[12][10] =
    {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio",
        "Junho", "Julho", "Agosto", "Setembro", "Outubro",
        "Novembro", "Dezembro"
    };

    int mes = 0;
    printf("Entre com um mes de 1 a 12: ");
    scanf("%i", &mes);

    if (jan <= mes - 1 && mes - 1 <= dez)
    {
        printf("O mes escolhido foi %s\n", meses[mes - 1]);
    }
    else
    {
        printf("Mes invalido.\n");
    }

    return 0;
}