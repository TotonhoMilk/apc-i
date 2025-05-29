#include <stdio.h>

int main()
{
    char frase[31];
    printf("Digite uma frase -> ");
    scanf("%[^\n]s", frase);
    printf("%s\n", frase);

    char matriz[6][5];
    int k = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = frase[k];
            printf("%i\n", k);
            k += 1;
        }
    }

    printf("A transposicao da frase eh --> \n");
    
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("%c", matriz[i][j]);
        }
    }

    return 0;
}