a) Idoso
Adulto
Jovem

Múltiplas mensagens são exibidas porque o código foi construído com uma sequência de comandos if independentes em vez de estruturas mutuamente exclusivas. O interpretador avalia a primeira condição (65 >= 60), que é verdadeira, e imprime "Idoso". O fluxo continua e avalia o próximo if de forma isolada (65 >= 18), que também é verdadeiro, imprimindo "Adulto". O mesmo ocorre para o terceiro if (65 >= 12), resultando na impressão de "Jovem". A instrução else está vinculada unicamente ao último if, por isso a mensagem "Criança" é a única ignorada.

b) Em uma sequência de comandos if independentes, o programa é forçado a testar todas as condições listadas uma após a outra, independentemente de as anteriores terem sido avaliadas como verdadeiras ou não. Em contraste, uma cadeia else-if cria uma estrutura de decisão condicional mutuamente exclusiva. Na cadeia else-if, assim que o programa encontra a primeira condição verdadeira, ele executa o bloco de código correspondente e salta (ignora) automaticamente todo o restante da estrutura, evitando testes redundantes e saídas sobrepostas.

c) int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}

