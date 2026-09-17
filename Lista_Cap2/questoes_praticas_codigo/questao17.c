#include <stdio.h>;
#define PI 3.141593

int main() {
    float raio, area, circunferencia;

    printf("Digite o valor do raio: "); 
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Área do círculo: %.2f\n", area);
    printf("Circunferência do círculo: %.2f\n", circunferencia);

    return 0;

}
