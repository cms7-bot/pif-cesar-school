#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("Digite o valor do lado a: ");
    scanf("%f", &a);

    printf("Digite o valor do lado b: ");   
    scanf("%f", &b);

    printf("Digite o valor do lado c: ");
    scanf("%f", &c);

    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}