#include <stdio.h>

int main() {
    printf("--------------------------------------------------------\n");
    printf("              N  O  T  A     I  L  E  G  A  L\n");
    printf("--------------------------------------------------------\n");
    printf(" Item               Qtd.          Prc.          Valor\n");
    printf(" %-18s %03i%14.2f\t\t%5.2f\n", "Caneta Azul", 2, 2.0, 4.0);
    printf(" %-18s %03i%14.2f\t\t%5.2f\n", "Borracha", 1, 5.0, 5.0);
    printf(" %-18s %03i%14.2f\t\t%5.2f\n", "Resma de Papel", 1, 10.0, 10.0);
    printf("--------------------------------------------------------\n");
    printf("                                    TOTAL: R$%8.2f\n" , 19.0);


    return 0;
}