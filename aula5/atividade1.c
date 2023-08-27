#include <stdio.h>
#include <stdlib.h>

void ponteiro (int *p1, int *p2, int *p3);

int main () {

    int num_1 = 0, num_2 = 0, num_3 = 0;
    int *p_1, *p_2, *p_3;

    puts("Digite um valor: ");
    scanf("%d", &num_1);
    puts("\nDigite outro valor: ");
    scanf(" %d", &num_2);
    puts("\nDigite o ultimo valor: ");
    scanf(" %d", &num_3);

    p_1 = &num_1;
    p_2 = &num_2;
    p_3 = &num_3;

    ponteiro(p_1, p_2, p_3);

    printf("\nValores finais (somados 100): \n%d \n%d \n%d\n", num_1, num_2, num_3);
}

void ponteiro (int *p1, int *p2, int *p3) {
    *p1 += 100;
    *p2 += 100;
    *p3 += 100;
}
