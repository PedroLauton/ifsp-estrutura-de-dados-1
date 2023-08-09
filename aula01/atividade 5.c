//Incluindo as bibliotecas.
#include <stdio.h>
#include <stdlib.h>

int main () {

    //Definindo as variaveis, vetores e matriz.
    int matriz [5][5], vetor[10];
    int aux1 = 0, aux2 = 0, soma = 0;

    //Coletando os valores da matriz.
    for (aux1 = 0; aux1 < 5; aux1++) {
        for (aux2 = 0; aux2 < 5; aux2++) {
            printf("Digite os valores da matriz na posicao %d e %d: ", aux1 + 1, aux2 + 1);
            scanf("%d", &matriz[aux1][aux2]);
        }
    }

    //Realizando a soma das linhas da matriz.
    printf("\n\nTotal por linha\n\n");
    for (aux1 = 0; aux1 < 5; aux1++) {
        for (aux2 = 0; aux2 < 5; aux2++) {
            soma += matriz[aux1][aux2];
        }

        printf("Linha %d: soma = %d\n", aux1 + 1, soma);
        vetor[aux1] = soma;
        soma = 0;
    }

    //Realizando a soma das colunas da matriz.
    printf("\n\nTotal por coluna\n\n");
    for (aux2 = 0; aux2 < 5; aux2++) {
        for (aux1 = 0; aux1 < 5; aux1++) {
            soma += matriz[aux1][aux2];
        }

        printf("Coluna %d: soma = %d\n", aux2 + 1, soma);
        vetor[aux2 + 5] = soma;
        soma = 0;
    }

    //Imprimindo os valores das somas.
    for(aux1 = 0; aux1 < 5; aux1++){
        printf("\nOs valores da soma da linha %d sao: %d\n", aux1 +1, vetor[aux1]);
        printf("Os valores da soma da coluna %d sao: %d\n", aux1 +1, vetor[aux1 + 5]);
     }

    //Exibindo a matriz.
    printf("\n\nImpressao\n\n");
    for (aux1 = 0; aux1 < 5; aux1++) {
        for (aux2 = 0; aux2 < 5; aux2++) {
            printf("%d  ", matriz[aux1][aux2]);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
