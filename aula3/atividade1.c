#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float salario = 0;
    int idade = 0;

    puts("Digite o seu nome: ");
    gets(nome);

    puts("\nDigite a sua idade: ");
    scanf("%d", &idade);

    puts("\nDigite o seu salário: ");
    scanf("%f", &salario);

    for(int aux = 0; aux < strlen(nome); aux++) {
        if(aux == 0) {
            nome[aux] = toupper(nome[aux]);
        }
        else if(isspace(nome[aux])){
            aux++;
            nome[aux] = toupper(nome[aux]);
        }
        else {
            nome[aux] = tolower(nome[aux]);
        }
    }


    printf("\nSeu nome: %s", nome);
    printf("\nSua idade: %d", idade);
    printf("\nSeu salário: %.2f\n\n", salario);
}

