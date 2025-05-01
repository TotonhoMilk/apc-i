#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Entre com os valores de a, b, c: ");
    scanf("%i %i %i", &a, &b, &c);

    float delta = b*b - 4*a*c;

    if (delta < 0)
    {
        printf("Delta Negativo\nA funcao nao tem raizes reais.\n");
    }
    else
    {
        float x1 = (-b + sqrt(delta)) / 2 * a;
        float x2 = (-b - sqrt(delta)) / 2 * a;
        printf("x'=%.2f, e x''=%.2f\n", x1, x2);
    }
    
    return 0;
}