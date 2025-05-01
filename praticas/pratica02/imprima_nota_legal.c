#include <stdio.h>

int main(){
    printf("================================\n");
    printf("      N O T A    L E G A L\n");
    printf("================================\n");
    printf("Produto         Qtd.  Valor Unit\n");
    printf("%-15s %03i %12.2f\n", "Camiseta", 2, 33.99);
    printf("%-15s %03i %12.2f\n", "Calca", 1, 89.99);
    printf("%-15s %03i %12.2f\n", "Meia Social", 3, 19.99);
    printf("================================\n");
    printf("Total:%26.2f\n", 229.85);
    return 0;
}