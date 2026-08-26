#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%5s\n", "X");
    printf("%4s%s%s\n", "X","*", "X");
    printf("%3s%s%s%s%s\n", "X","*", "*", "*", "X");
    printf("%2s%s%s%s%s%s%s\n", "X","X", "X", "X", "X", "X", "X");
    printf("%5s\n", "X");
    printf("%5s\n", "X");
    printf("%4s%s%s\n\n", "X","+", "X");

    system("pause");

    return 0;
}