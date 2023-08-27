#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
};

int main () {
    int n = 5;
    struct funcionario func[n];

    for(int aux = 0; aux < n; aux++){
        printf("Informe o ID do funcionario %d: ", aux + 1);
        scanf(" %d", &func[aux].id);
        getchar();
        printf("Informe o nome do funcionario %d: ", aux + 1);
        fgets(func[aux].nome, 29, stdin);
        func[aux].nome[strlen(func[aux].nome) - 1] = '\0';
        printf("Informe a idade do funcionario %d: ", aux + 1);
        scanf(" %d", &func[aux].idade);
        getchar();
        printf("Informe o salario do funcionario %d: ", aux + 1);
        scanf(" %f", &func[aux].salario);
        getchar();
        printf("\n");
        system("cls");
    }
    for(int aux = 0; aux < n; aux++) {
        printf("Dados do funcionario %d:\n", aux +1);
        printf("ID: %d\n", func[aux].id);
        printf("Nome: %s\n", func[aux].nome);
        printf("Idade: %d\n", func[aux].idade);
        printf("Salario: %.2f\n", func[aux].salario);
        printf("\n");
    }
}
