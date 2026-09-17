#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    float num_degraus_exato;
    int num_degraus;

    printf("=== CALCULO DE DEGRAUS DA ESCADA ===\n");

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a ser alcancada (em metros): ");
    scanf("%f", &altura_total_m);

    altura_total_cm = altura_total_m * 100.0;

    num_degraus_exato = altura_total_cm / altura_degrau_cm;

    num_degraus = (int) ceil(num_degraus_exato);

    printf("\nAltura total em centimetros = %.2f cm\n", altura_total_cm);
    printf("Numero minimo de degraus necessarios = %d\n", num_degraus);

    return 0;
}