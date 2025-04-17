#include<stdio.h>

int main(){
    printf("O tipo 'short int' ocupa %lu bytes na memoria\n", sizeof(short int));
    printf("O tipo 'long int' ocupa %lu bytes na memoria\n", sizeof(long int));
    printf("O tipo 'long double' ocupa %lu bytes na memoria\n", sizeof(long double));

    return 0;
}