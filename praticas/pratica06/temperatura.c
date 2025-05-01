#include <stdio.h>

int main()
{
    float temperatura = 0.0f;

    printf("Insira a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 40.0f)
    {
        printf("Muito quente!\n");
    }
    else if (temperatura > 30.0f && temperatura < 40.0f)
    {
        printf("Quente!\n");
    }
    else if (temperatura > 20.0f && temperatura < 30.0f)
    {
        printf("Agradavel!\n");
    }
    else
    {
        printf("Frio\n");
    }


    return 0;
}