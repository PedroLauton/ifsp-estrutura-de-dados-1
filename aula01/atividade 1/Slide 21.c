#include <stdio.h>
#include <stdlib.h>

int main () {

    char escolha;

    printf("Quer continuar? [sim - s / nao n]: ");
    scanf(" %c", &escolha);

    switch (escolha) {

        case 's':
            printf("\nVoce quer continuar");
            break;

        case 'n':
            printf("\nVoce quer parar");
            break;

        default:
            printf("\nEscolha invalida!");
            break;
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}
