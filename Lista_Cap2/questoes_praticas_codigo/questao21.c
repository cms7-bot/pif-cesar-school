#include <stdio.h>

int main() {  
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("O caractere '%c' tem o valor ASCII %d.\n", c, c);
    
    /*O caractere é lido e armazenadoo na variavel c como um número inteiro de 1 byte, de acordo com a tabela ASCIII
      Ao usar %d, estamos imprimindo o valor ASCII do caractere, então o compilador converte o valor ASCII para o número inteiro
      exibindo assim o código númerico correspondente ao caractere digitado.*/





    return 0;
}