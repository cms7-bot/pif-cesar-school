#include <stdio.h>

void contagem_for() {
    printf("Versao for:\n");
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

void contagem_while() {
    printf("Versao while:\n");
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void contagem_do_while() {
    printf("Versao do-while:\n");
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main() {
    contagem_for();
    contagem_while();
    contagem_do_while();
    return 0;
}
