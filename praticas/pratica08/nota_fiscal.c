#include <stdio.h>

int main()
{
    float nota_fiscal[5][3];
    float total = 0.0f;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o primeiro valor: ");
        scanf("%f", &nota_fiscal[i][0]);
        printf("Digite o segundo valor: ");
        scanf("%f", &nota_fiscal[i][1]);
        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];
        total = total + nota_fiscal[i][2];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4.2f | ", nota_fiscal[i][j]);
        }
        printf("\n");
    }
    
    printf("Total: %6.2f", total);

    return 0;
}