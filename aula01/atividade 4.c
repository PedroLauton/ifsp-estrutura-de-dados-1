//Incluindo as bibliotecas.
#include <stdio.h>
#include <stdlib.h>

int main () {

    //Definindo as variaveis.
    int v1[5], v2[5];
    int l = 0, c = 0, aux;

    //Realizando a coleta dos caracteres no vetor 1.
    for (l = 0; l < 5; l++) {
        printf("Informe o valor do elemento %d do vetor 1: ", l + 1);
        scanf("%d", &v1[l]);
    }

    printf("\n");

    //Realizando a coleta dos caracteres no vetor 2.
    for (c = 0; c < 5; c++) {
        printf("Informe o valor do elemento %d do vetor 2: ", c + 1);
        scanf("%d", &v2[c]);
    }

    //Impressao dos vetores 1 e 2.
    printf("\n\nVetor 1: ");
    for (l = 0; l < 5; l++) {
        printf("%d ", v1[l]);
    }

    printf("\n\nVetor 2: ");
    for (c = 0; c < 5; c++) {
        printf("%d ", v2[c]);
    }

    printf("\n");

    //Analisando valores iguais em determinadas posicoes.
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            if (v1[l] == v2[c]) {
                printf("\nValores iguais na posicao %d do vetor 1 e %d do vetor 2", l + 1, c + 1);
                aux++;
            }
        }
    }

    printf("\n");

    if (aux == 0) {
        printf("\n\nOs vetores nao tem elementos iguais\n\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
