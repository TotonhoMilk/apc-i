#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[11];
    char palavra2[11];

    printf("Digite uma palavra -> ");
    scanf("%s", palavra1);
    while (getchar() != '\n');
    printf("Digite outra palavra -> ");
    scanf("%s", palavra2);
    while (getchar() != '\n');

    if (strcmp(palavra1, palavra2) >= 0)
    {
        printf("%s %s", palavra2, palavra1);
    }
    else
    {
        printf("%s %s", palavra1, palavra2);
    }

    return 0;
}