a) A mensagem impressa no console será "Opção B".
Apesar da indentação visual sugerir que o else faz par com o primeiro if (x > 10), o compilador da linguagem C ignora a formatação. Como x vale 15, a primeira condição (15 > 10) é verdadeira, e o programa entra no bloco para avaliar a segunda condição. Como y vale 5, a condição if (y > 10) é falsa. Como o else está associado a este segundo if, o programa executa sua respectiva instrução, imprimindo "Opção B".

b) A regra oficial  dita que uma cláusula else sempre se associa ao comando if mais próximo anterior a ela que não possua um else correspondente, desde que estejam no mesmo escopo. Como não há chaves de bloco definindo escopos diferentes no trecho original, o else se liga obrigatoriamente ao if (y > 10).

c) int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}