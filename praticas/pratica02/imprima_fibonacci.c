#include <stdio.h>

int main(){
    printf("%9i%2i\n", 1, 1);
    printf("%8i%2i%2i\n", 1, 2, 1);
    printf("%6i%2i%2i%2i%2i\n", 1, 2, 3, 2, 1);
    printf("%4i%2i%2i%2i%2i%2i%2i\n", 1, 2, 3, 5, 3, 2, 1);
    printf("%2i%2i%2i%2i%2i%2i%2i%2i%2i\n", 1, 2, 3, 5, 8, 5, 3, 2, 1);
    return 0;
}