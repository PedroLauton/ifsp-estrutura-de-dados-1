#include <stdio.h>
#include <stdlib.h>

void calculoVantagens(float nh, float sh, int nf, float vf);
void calculoDeducoes(float sb, float tir);

float sbruto = 0, sfamilia = 0, van = 0, inss = 0, irpf = 0, dedc = 0;

int main () {

    float nhora = 0, shora = 0, vfilho = 0, taxair = 0;
    int nfilho = 0;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &nhora);
    printf("Digite o valor por hora do salario: ");
    scanf("%f", &shora);
    printf("Digite quantos filhos possui: ");
    scanf("%d", &nfilho);
    printf("Digite o valor por filho: ");
    scanf("%f", &vfilho);
    printf("Digite o a taxa de IR: ");
    scanf("%f", &taxair);

    calculoVantagens(nhora, shora, nfilho, vfilho);
    calculoDeducoes(sbruto, taxair);

    printf("\nSalario bruto: %.2f", sbruto);
    printf("\nSalario familia: %.2f", sfamilia);
    printf("\nVantagens: %.2f",van);
    printf("\nINSS: %.2f", inss);
    printf("\nIRPF: %.2f", irpf);
    printf("\nDeducoes: %.2f", dedc);

    printf("\n\n");
    system("pause");
    return 0;
}

void calculoVantagens (float nh, float sh, int nf, float vf) {
    sbruto = nh * sh;
    sfamilia = nf * vf;
    van = sbruto + sfamilia;
}

void calculoDeducoes(float sb, float tir) {
    inss = sbruto * 0.08;
    irpf = sbruto * tir;
    dedc = inss + irpf;
}
