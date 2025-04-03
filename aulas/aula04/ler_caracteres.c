#include <stdio.h>
#include <limits.h>

int main(){
    char tecla;
    char nome[31];

    printf("\n\tDigite uma tecla e depois ENTER: ");
    scanf("%c", &tecla);
    getchar();
    printf("\n\tDigite seu nome: ");
    scanf("%[^\n]s", nome);
    getchar();

    printf("\n\t+=====================+");
    printf("\n\t| A tecla foi --> '%c' |", tecla);
    printf("\n\t+=====================+\n");
    printf("\n\tO valor ASCII da tecla --> %i\n", tecla);
    printf("\n\tO tamanho de nome e %u bytes\n", sizeof(nome));
    printf("\n\tSeu nome: %s\n", nome);
    printf("\n\tHi %s. Welcome to NASA!\n", nome);
    
    return 0;
}