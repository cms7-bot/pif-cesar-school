/*Programa que pede o ano de nascimento do usuário e 
e calcula a idade*/


#include <stdio.h>

int main() {
    
    int ano_nascimento, idade; /*declara as variáveis do tipo inteiro*/
    printf("Digite o ano de nascimento: "); /*chama a função printf*/
    scanf("%d", &ano_nascimento); /*chama a função scanf para ler o ano de nascimento do usuário*/
    idade = 2026 - ano_nascimento; /*calcula a idade*/
    printf("A idade é: %d\n", idade); /*chama a função printf para exibir a idade*/

    return 0; /*retorna 0 para indicar que o programa terminou com sucesso*/
}