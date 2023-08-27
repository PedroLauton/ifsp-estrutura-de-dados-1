#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

char *strupr(char *str);
char *strlwr(char *str);

int main () {

    setlocale(LC_ALL, "Portuguese");

    char frase[50], frase2[50];
    int aux = 0;

    puts("Digite uma frase: ");
    gets(frase);

    for(int aux = 0; aux < strlen(frase); aux++){
        if(islower(frase[aux])){
            frase[aux] = toupper(frase[aux]);
        }
        else{
            frase[aux] = tolower(frase[aux]);
        }
    }
    printf("\nFrase com as letras invertidas: %s\n", frase);

    puts("\nDigite outra frase: ");
    gets(frase2);

    for(aux = 0; aux < strlen(frase2); aux++){
        if(islower(frase2[aux])){
            strupr(&frase2[aux]);
        }
        else{
            strlwr(&frase2[aux]);
        }
    }
        printf("\nFrase com as letras invertidas: %s\n", frase2);
}

char *strupr(char *str){
    *str = toupper(*str);
    return str;

}

char *strlwr(char *str){
    *str = tolower(*str);
    return str;
}
