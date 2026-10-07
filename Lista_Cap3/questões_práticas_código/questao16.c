#include <stdio.h>

int main() {
    int senha_correta = 2026;
    int tentativa;
    int acertou = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Tentativa %d/3 - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == senha_correta) {
            printf("Acesso Concedido! (Tentativas utilizadas: %d)\n", i);
            acertou = 1;
            break; 
        } else {
            printf("Senha incorreta.\n\n");
        }
    }

    if (!acertou) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}