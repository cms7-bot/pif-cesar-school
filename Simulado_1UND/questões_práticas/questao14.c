#include <stdio.h>

int main() {
    int senha_correta = 2026;
    int tentativa;
    int tentativas_restantes = 3;
    
    while (tentativas_restantes > 0) {
        printf("Digite a senha (Tentativas restantes: %d): ", tentativas_restantes);
        scanf("%d", &tentativa);
        
        if (tentativa == senha_correta) {
            printf("Acesso Concedido!\n");
            return 0; // Encerra o programa
        } else {
            printf("Senha incorreta.\n");
            tentativas_restantes--;
        }
    }
    
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}