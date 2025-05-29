#include <stdio.h>
#include <string.h>

int main()
{
    char primeiro_nome[11];
    char ultimo_nome[11];

    printf("Digite seu primeiro nome --> ");
    scanf("%s", primeiro_nome);
    printf("Digite seu ultimo nome --> ");
    scanf("%s", ultimo_nome);

    char nome[31];

    strcpy(nome, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);

    printf("%s", nome);


    return 0;
}