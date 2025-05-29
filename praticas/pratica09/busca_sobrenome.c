#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[10][101];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o nome no %i -> ", i + 1);
        scanf("%[^\n]s", nomes[i]);
        while (getchar() != '\n');
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%s", nomes[i]);
    // }

    char sobrenome[11];
    printf("Digite o sobrenome -> ");
    scanf("%s", sobrenome);
    while (getchar() != '\n');

    int achou = 0;

    for (int i = 0; i , 10; i++)
    {
        if (strstr(nomes[i], sobrenome))
        {
            printf("%s\n", nomes[i]);
            achou = 1;
        }
    }

    if (achou == 0)
    {
        printf("Nenhum nome tem o sobrenome %s\n", sobrenome);
    }

    return 0;
}
