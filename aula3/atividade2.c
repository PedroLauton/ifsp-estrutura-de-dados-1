#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");


    char nome[20], sobren1[20], sobren2[20], aux[10] = " ";

    puts("Digite o seu primeiro nome: ");
    gets(nome);

    puts("\nDigite o seu sobrenome: ");
    gets(sobren1);

    puts("\nDigite o seu outro sobrenome: ");
    gets(sobren2);


    for(int aux = 0; aux < strlen(nome); aux++) {
        if(aux == 0) {
            nome[aux] = toupper(nome[aux]);
            sobren1[aux] = toupper(sobren1[aux]);
            sobren2[aux] = toupper(sobren2[aux]);
        }
        else {
            nome[aux] = tolower(nome[aux]);
            sobren1[aux] = tolower(sobren1[aux]);
            sobren2[aux] = tolower(sobren2[aux]);
        }
    }

    strcat(nome, aux);
    strcat(nome, sobren1);
    strcat(nome, aux);
    strcat(nome, sobren2);

    printf("\nSeu nome concatenado: %s\n", nome);
}


