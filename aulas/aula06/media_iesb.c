#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_a1 = 0.0f;
    float nota_a2 = 0.0f;
    int leu_certo = 0;

    system("clear");

    printf("Insira a nota 1 --> ");
    leu_certo = scanf("%f", &nota_a1);
    getchar();

    if (!leu_certo || nota_a1 < 0.0f || nota_a1 > 10.0f)
    {
        printf("As notas devem estar em 0 e 10!\n");
        exit(0);
    }

    printf("Insira a nota 2 --> ");
    leu_certo = scanf("%f", &nota_a2);
    getchar();

    if (!leu_certo || nota_a2 < 0.0f || nota_a2 > 10.0f)
    {
        printf("As notas devem estar em 0 e 10!\n");
        exit(0);
    }

    printf("=================================\n");

    float media = 0.4f * nota_a1 + 0.6f * nota_a2;

    if (media >= 9.0f)
    {
        printf("Sua media eh %.1f e a mensao eh SS\n", media);
    }
    else if (media >= 7.0f)
    {
        printf("Sua media eh %.1f e a mensao eh MS\n", media);
    }
    else if (media >= 5.0f)
    {
        printf("Sua media eh %.1f e a mensao eh MM\n", media);
    }
    else if (media >= 3.0f)
    {
        printf("Sua media eh %.1f e a mensao eh MI\n", media);
    }
    else if (media >= 0.1f)
    {
        printf("Sua media eh %.1f e a mensao eh II\n", media);
    }
    else
    {
        printf("Sua media eh %.1f e a mensao eh SR\n", media);
    }

    printf("=================================\n");
    printf("Tes\rte");

    return 0;
}