#include <stdio.h>

int main(){
    printf("%05i\n", 1234);
    printf("%05i\n", 5678);
    printf("(%i, %i)\n", -1, 1);
    printf("%02i/%02i/%04i", 5, 5, 2024);

    return 0;
}