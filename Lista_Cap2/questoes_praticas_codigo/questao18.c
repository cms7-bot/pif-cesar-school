#include <stdio.h>
#define PI 3.141593

int main() {
    float raio, area_superficie, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area_superficie = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Área da superfície da esfera: %.2f\n", area_superficie);
    printf("Volume da esfera: %.2f\n", volume);
    

    return 0;
}