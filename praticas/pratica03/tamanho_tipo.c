#include <stdio.h>

int main(){
    printf("O tipo 'char'    ocupa %lu bytes na memoria.\n", sizeof(char));
    printf("O tipo 'int'     ocupa %lu bytes na memoria.\n", sizeof(int));
    printf("O tipo 'double'  ocupa %lu bytes na memoria.\n", sizeof(double));
    printf("O tipo 'void'    ocupa %lu bytes na memoria.\n", sizeof(void));


    return 0;
}