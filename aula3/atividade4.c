#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    char frase1[50], frase2[50];
    int aux2 = 0;

    puts("Digite uma frase: ");
    fgets(frase1, 49, stdin);

    puts("\nDigite outra frase: ");
    fgets(frase2, 49, stdin);

    frase1[strcspn(frase1, "\n")] = 0;
    frase2[strcspn(frase2, "\n")] = 0;

    if(strstr(frase1, frase2)){
        printf("\nA 2� frase \"%s\" est� contida na 1� frase \"%s\"!\n", frase2, frase1);
    }
    else{
        printf("\nA 2� frase \"%s\" n�o est� contida na 1� frase \"%s\"\n", frase2, frase1);
    }
}





