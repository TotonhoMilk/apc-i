#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    0 < numero < 10
    0 < numero E numero < 10 -- &&
    numero < 0 OU maior > 10 -- ||
    NAO numero > 0 ------------  !
    */
    system("clear");
    printf("TABELA DA VERDADE\n");
    printf(" 0 E 0 = %i\n", 0 && 0);
    printf(" 0 E 1 = %i\n", 0 && 1);
    printf(" 1 E 0 = %i\n", 1 && 0);
    printf(" 1 E 1 = %i\n", 1 && 1);
    printf("\n");
    printf(" 0 E 0 = %i\n", 0 || 0);
    printf(" 0 E 1 = %i\n", 0 || 1);
    printf(" 1 E 0 = %i\n", 1 || 0);
    printf(" 1 E 1 = %i\n", 1 || 1);
    printf("\n");
    printf("NAO 0 = %i\n", !0);
    printf("NAO 1 = %i\n", !1);
   
    return 0;
}