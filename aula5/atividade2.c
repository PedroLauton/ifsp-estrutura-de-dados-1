#include <stdio.h>
#include <stdlib.h>

int main () {

    int num_1 = 0, num_2 = 0;
    int *p_1, *p_2;

    puts("Digite um valor: ");
    scanf("%d", &num_1);
    puts("\nDigite outro valor: ");
    scanf(" %d", &num_2);

    p_1 = &num_1;
    p_2 = &num_2;

    if(&p_1 > &p_2) {
        printf("\n\nMaior enderenco: primeiro valor!\n");
        printf("\nEndereco da variavel: %p", &p_1);
        printf("\nConteudo da variavel: %d\n", *p_1);
    }else{
        printf("\n\nMaior enderenco: segundo valor!\n");
        printf("\nEndereco da variavel: %p", &p_2);
        printf("\nConteudo da variavel: %d\n", *p_2);
    }
}


