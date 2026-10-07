a) O erro de compilação ocorre pois a variável soma foi declarada dentro do bloco do laço for (int soma = 0;). Quando o laço termina, essa variável é destruída da memória, tornando-se invisível (fora de escopo) para o printf localizado fora do laço.

b) O laço iterará pelos valores de $i$ de 1 a 8. No i=5, o continue força o salto para a próxima iteração, ignorando o cálculo daquele ciclo. No i=8, o break força a interrupção imediata de todo o laço antes que o cálculo aconteça.

c) #include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Escopo corrigido
    
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    
    printf("Soma final = %d\n", soma);
    return 0;
}