//Incluindo as bibliotecas.
#include <stdio.h>
#include <stdlib.h>

int main () {

    //Definindo a variavel.
    int num;

    //Colhendo o numero.
    printf("Insira um numero: ");
    scanf("%d", &num);

    //Selecionando uma acao com base no caractere numerico.
    if (num < 1 || num > 4) {
        num = 0;
        printf("\nRetorno: %d\n", num);
    }else{
        if (num == 1) {
            num = 65;
            printf("\nRetorno: %c\n", num);
        }else{
            if (num == 2) {
                num = 66;
                printf("\nRetorno: %c\n", num);
            }else{
                if (num == 3) {
                    num = 67;
                    printf("\nRetorno: %c\n", num);
                }else{
                    if (num == 4) {
                        num = 68;
                        printf("\nRetorno: %c\n", num);
                    }
                }
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
