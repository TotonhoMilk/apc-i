#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dezenas[6];

    srand(time(NULL));

    for(int i = 0; i < 6; i++)
    {
        dezenas[i] = rand() % 60;
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%02i, ", dezenas[i]);
    }

    printf("\n");

    return 0;
}