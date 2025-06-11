#include <stdio.h>

int main()
{
    struct cliente_t
    {
        char nome[61];
        char telefone[15];
        char email[61];
    };

    struct cliente_t cliente;

    printf("Entre com o nome do cliente: ");
    scanf("%[^\n]s", cliente.nome);
    while (getchar() != '\n');
    printf("Entre com o telefone do cliente: ");
    scanf("%[^\n]s", cliente.telefone);
    while (getchar() != '\n');
    printf("Entre com o e-mail do cliente: ");
    scanf("%[^\n]s", cliente.email);
    while (getchar() != '\n');

    printf("\nDados do cliente: \n");
    printf("%s\n", cliente.nome);
    printf("%s\n", cliente.telefone);
    printf("%s\n", cliente.email);
    

    return 0;
}