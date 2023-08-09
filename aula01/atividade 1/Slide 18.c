#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b;

    printf("informe dois numeros: \n");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Os numeros sao iguais \n\n\n");
    }else if (a > b) {
        printf("O primeiro numero e maior \n\n\n");
    }else if (a < b) {
        printf("O segundo numero e maior \n\n\n");
    }

    system("pause");
    return 0;
}
