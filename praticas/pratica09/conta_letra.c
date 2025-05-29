#include <stdio.h>
#include <string.h>

int main()
{
    char frase[31];
    printf("Digite em frase -> ");
    scanf("%[^\n]s", frase);
    while (getchar() != '\n');

    char letra;

    printf("Digite uma letra -> ");
    scanf("%c", &letra);
    while (getchar() != '\n');

    int quantidade = 0;

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == letra)
        {
            quantidade++;
        }
    }

    if (quantidade > 0)
    {
        printf("Foram achados %i da letra %c\n", quantidade, letra);
    }
    else
    {
        printf("A frase nao contem a letra %c", letra);
    }

    return 0;
}
