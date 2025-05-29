#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char minusculo[11];
    char maiusculo[11];
    char string[11];

    printf("Digite uma palavra -> ");
    scanf("%s", string);

    memset(minusculo, '\0', sizeof(minusculo));
    memset(maiusculo, '\0', sizeof(maiusculo));

    for (int i = 0; i < strlen(string); i++)
    {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }

    printf("%s\n%s\n", maiusculo, minusculo);

    return 0;
}