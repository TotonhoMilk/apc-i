#include <stdio.h>
#include <string.h>

#define CLIENTE 2

int main()
{
    struct endereco_t
    {
        char logradouro[101];
        int numero;
        char bairro[41];
        char cidade[41];
        char uf[3];
        int cep;
    };

    struct cliente_t
    {
        char nome[101];
        long long int telefone;
        char email[101];
        struct endereco_t endereco;
    };

    struct fornecedor_t
    {
        struct endereco_t endereco;
    };

    struct cliente_t clientes[CLIENTE];

    for (int i = 0; i < CLIENTE; i++)
    {
        printf("Dados do cliente no %i\n", i + 1);
        printf("Nome do cliente -> ");
        scanf("%[^\n]s", clientes[i].nome);
        while(getchar() != '\n');
        printf("Telefone do cliente -> ");
        scanf("%lli", &clientes[i].telefone);
        while(getchar() != '\n');
        printf("Email do cliente -> ");
        scanf("%[^\n]s", clientes[i].email);
        while(getchar() != '\n');
        printf("Logradouro do cliente -> ");
        scanf("%[^\n]s", clientes[i].endereco.logradouro);
        while(getchar() != '\n');
        printf("Numero do cliente -> ");
        scanf("%i", &clientes[i].endereco.numero);
        while(getchar() != '\n');
        printf("Bairro do cliente -> ");
        scanf("%[^\n]s", clientes[i].endereco.bairro);
        while(getchar() != '\n');
        printf("Cidade do cliente -> ");
        scanf("%[^\n]s", clientes[i].endereco.cidade);
        while(getchar() != '\n');
        printf("UF do cliente -> ");
        scanf("%[^\n]s", clientes[i].endereco.uf);
        while(getchar() != '\n');
        printf("CEP do cliente -> ");
        scanf("%i", &clientes[i].endereco.cep);
        while(getchar() != '\n');
    }
    for (int i = 0; i < CLIENTE; i++)
    {
        printf("Dados do cliente no%i\n", i + 1);
        printf("Nome do cliente -> %s \n", clientes[i].nome);
        printf("Telefone do cliente -> %lli\n", clientes[i].telefone);
        printf("Email do cliente -> %s\n", clientes[i].email);
        printf("Endereco do cliente -> \n");
        printf("%s %i %s\n", clientes[i].endereco.logradouro, clientes[i].endereco.numero, clientes[i].endereco.bairro);
        printf("%s %s\n", clientes[i].endereco.cidade, clientes[i].endereco.uf);
        printf("CEP -> %i\n", clientes[i].endereco.cep); 
    }

    return 0;
}