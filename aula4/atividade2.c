#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

struct funcionario coletaDados();
void exibir(FUNCIONARIO func[], int n);
void ajuste (float *salario);
void rel_salario_corrigido (FUNCIONARIO func[], int n);

int n = 5, num = 0;

int main () {
    FUNCIONARIO func[n];
    for(int aux = 0; aux < n; aux++){
        func[aux] = coletaDados();
    }
    exibir(func, n);
    for(int aux = 0; aux < n; aux++) {
        ajuste(&func[aux].salario);
    }
    rel_salario_corrigido(func, n);
}

struct funcionario coletaDados (){

    FUNCIONARIO dados[n];
    for(int aux = 0; aux < n; aux++){
        printf("Informe o ID do funcionario %d: ", num + 1);
        scanf(" %d", &dados[aux].id);
        getchar();
        printf("Informe o nome do funcionario %d: ", num + 1);
        fgets(dados[aux].nome, 29, stdin);
        dados[aux].nome[strlen(dados[aux].nome) - 1] = '\0';
        printf("Informe a idade do funcionario %d: ", num + 1);
        scanf(" %d", &dados[aux].idade);
        getchar();
        printf("Informe o salario do funcionario %d: ", num + 1);
        scanf(" %f", &dados[aux].salario);
        getchar();
        printf("\n");
        system("cls");
        num++;
        return dados[aux];
    }
    num = 0;
}

void exibir(FUNCIONARIO func[], int n) {
      for(int aux = 0; aux < n; aux++) {
        printf("Dados do funcionario %d:\n", aux + 1);
        printf("ID: %d\n", func[aux].id);
        printf("Nome: %s\n", func[aux].nome);
        printf("Idade: %d\n", func[aux].idade);
        printf("Salario: %.2f\n", func[aux].salario);
        printf("\n");
    }
}

void ajuste (float *salario) {
    *salario *= 1.10;
}

void rel_salario_corrigido (FUNCIONARIO func[], int n) {
    for(int aux = 0; aux < n; aux++) {
        printf("Reajuste do salario do funcionario %d:\n", aux + 1);
        printf("Nome: %s\n", func[aux].nome);
        printf("Salario reajustado: %.2f\n", func[aux].salario);
        printf("\n");
    }
}


