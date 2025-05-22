#include <stdio.h>

int main()
{
    float notas[10];
    float soma, media;
    int qtde_acima_media = 0;

    for (int i = 0; i < 10 ; i++)
    {
        printf("Insira a %i nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > media)
        {
            qtde_acima_media += 1;
        }
    }

    printf("Media: %4.2f\nQtd de alunos aprovados: %i\n", media, qtde_acima_media);

    return 0;
}