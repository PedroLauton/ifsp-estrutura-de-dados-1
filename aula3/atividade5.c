#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    char frase[50];
    int aux = 0;

    puts("Digite uma frase com letras minúsculas: ");
    gets(frase);

    for(aux = 0; aux < strlen(frase); aux++){
        if(frase[aux] >= 97 && frase[aux] <= 122){
            frase[aux] = frase[aux] - 32;
        }
    }

    printf("\nFrase em Maiúsculas: %s\n", frase);
}
