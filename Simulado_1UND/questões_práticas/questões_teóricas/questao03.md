a += b + c; --> a = 2 + (4 + 5) = 11

b *= c = d - 2; --> Primeiro: c = 10 - 2 (c=8); depois b = 4 * 8 (b=32) e d permance valendo 10.

a += b += c += 5; ==> Da direita para a esquerda: c = 5 + 5 (c=10); b = 4 + 10 (b=14); a = 2 + 14 (a=16). ==> Valores finais de a = 16, b = 14, c = 10.

d %= a + 3; --> d = 10 % (2 + 3) --> d = 10 % 5 --> Valor final de d = 0.

