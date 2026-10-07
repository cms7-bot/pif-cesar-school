#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;
    
    printf("Digite os comprimentos dos tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    printf("A area do triangulo eh: %.2lf\n", area);
    
    return 0;
}