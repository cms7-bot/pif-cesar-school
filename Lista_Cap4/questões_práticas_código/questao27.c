#include <stdio.h>

int main() {
    int horas;
    float total = 0.0;
    
    scanf("%d", &horas);
    
    if (horas >= 1) total += 2.00;
    if (horas >= 2) total += 2.00;
    if (horas >= 3) total += 2.50;
    if (horas >= 4) total += 2.50;
    if (horas >= 5) total += (horas - 4) * 3.00;
    
    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor final: R$ %.2f\n", total);
    
    return 0;
}