#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

char troca(char *frase, char consoante);

int main () {

    setlocale(LC_ALL, "Portuguese");

    char frase[50], vogais[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}, consoante;
    int auxiliar = 0;

    puts("Digite uma frase: ");
    gets(frase);

     for(int i = 0; i < strlen(frase); i++){
        for(int x = 0; x < strlen(vogais); x++){
            if(frase[i] == vogais[x]){
                auxiliar++;
            }
        }
    }
    printf("\nSua frase tem %d vogais!", auxiliar);
    puts("\n\nDigite uma consoante: ");
    scanf(" %c", &consoante);

    for(int i = 0; i < strlen(frase); i++){
        for(int x = 0; x < strlen(vogais); x++){
            if(frase[i] == vogais[x]){
                troca(&frase[i], consoante);
            }
        }
    }
    printf("\nSua frase substituída pela consoante fica assim: %s!\n", frase);
}

char troca(char *frase, char consoante){
    *frase = consoante;
}



