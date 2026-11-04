#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double n1, n2, res;
    
    scanf(" %c", &op);
    scanf("%lf %lf", &n1, &n2);
    
    switch(op) {
        case '+':
            res = n1 + n2;
            printf("%.2lf\n", res);
            break;
        case '-':
            res = n1 - n2;
            printf("%.2lf\n", res);
            break;
        case '*':
            res = n1 * n2;
            printf("%.2lf\n", res);
            break;
        case '/':
            if (n2 != 0) {
                res = n1 / n2;
                printf("%.2lf\n", res);
            } else {
                printf("Erro: Divisao por zero\n");
            }
            break;
        case '^':
            res = pow(n1, n2);
            printf("%.2lf\n", res);
            break;
        default:
            printf("Operacao invalida\n");
    }
    
    return 0;
}