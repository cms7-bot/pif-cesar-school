a += b + c

    equivale a:  a = a + (b + c) --> a = 1 + (2 + 3) = 6, Valor final de a = 6 



b *= c = d + 2

    como os operadores de atribuição são resolvidos da direita pra esquerda, primeiro resolve o: c = d + 2 --> c = 4 + 2, depois: b = b * c --> b = 2 * 6 = 12, Valor final de b = 12 e c = 6


d %= a + a

    que é a mesma coisa de: d = d % (a + a) --> d = 4 % (6 + 6) = 4 % 12 = 4, Valor final de d = 4

d -= c -= b -= a

    primeiro resolvendo da direita pra esquerda, fica: b = b - a --> b = 12 - 6 = 6, logo depois vem: c = c - b --> c = 6 - 6 = 0, pra finalizar: d = d - c --> d = 4 - 0 = 4, Valor final de b = 6, c = 0, d = 4

a += b += c += 7

    seguindo a regra, c = c + 7 --> c = 0 + 7 = 7, depois b = b + c --> b = 6 + 7 = 13, pra finalizar a = a + b --> a = 6 + 13 = 19, Valor final de a = 19, b = 13, c = 7

