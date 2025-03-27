#include <stdio.h>

int main(){
    long double sem_valor;
    char tecla;
    tecla = 'A';
    printf("O valor da tecla = %c\n", tecla);
    tecla = 100;
    printf("O valor da tecla = %c\n", tecla);
    int numero = 10;
    printf("Numero = %i\n", numero);

    {
        int numero = 20;
        printf("Numero = %i\n", numero);
    }

    printf("Numero = %i\n", numero);

    printf("Valor = %E\n", sem_valor);

    float media = 9.5f;
    printf("Media = %.1f\n", media);

    return 0;
}