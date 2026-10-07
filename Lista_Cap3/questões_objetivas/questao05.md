a) O laço executará exatamente 5 iterações. A condição i < j será avaliada como verdadeira para os seguintes pares (i, j): (0, 10), (1, 9), (2, 8), (3, 7) e (4, 6). Quando os valores atingirem i = 5 e j = 5, a condição se torna falsa e o laço é encerrado.

b) i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}