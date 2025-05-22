#include <stdio.h>

int main()
{
    char frase[30] = "Eu programo em C!";

    for (int i = 0; i < 30; i++)
    {
        printf("%c", frase[i]);
    }

    frase[5] = '\0';
    printf("\n");
    printf("%s", frase);

    printf("\nEntre com uma frase\n--> ");
    scanf("%[^\n]s", frase);
    while (getchar() != '\n');

    char cesar[6][5];
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cesar[i][j] = frase[k];
            k++;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("%c", cesar[i][j]);
        }
    }

    printf("\n");

    return 0;
}