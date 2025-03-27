#include <stdio.h>

#define PI 3.1416


int main() {
    float raio = 5.6f;
    float resultado;
    const char SEXO_FEMININO = 'F';

    resultado = PI * raio * raio;

    printf("O valor de pi = %.4f\n", PI);
    printf("Area do circulo = %.2f\n", resultado);

    return 0;
}