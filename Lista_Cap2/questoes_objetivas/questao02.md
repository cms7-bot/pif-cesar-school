a)Pois não é portável, não é padronizada, está obsoleta mesmo no Windows e cria dependência de plataforma.

b) getchar() - lê um único caractere do stdin
   putchar() - escreve um único caractere no stdout
   fgets() / fputs() - Leitura/escrita de strings de forma segura
   printf() - saída formatada geral

c) #include <stdio.h>

   int main() {

      printf("Digite um caractere: ");
      scanf(" %c", &caractere);

      printf("Voce digitou: %c\n", caractere);

      return 0 
   }