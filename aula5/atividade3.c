#include <stdio.h>
#include <stdlib.h>

int main () {

    float vet_f[10];
    double vet_d[10];
    void *p;
    int tamVetorFloat = sizeof(vet_f) / sizeof(vet_f[0]);
    int tamVetorDouble = sizeof(vet_d) / sizeof(vet_d[0]);

    puts("Vetor float:\n");
    for(int aux = 0; aux < tamVetorFloat; aux++){
        p = &vet_f[aux];
        printf("Posicao %d: %p\n", aux, p);
    }
    puts("\nVetor double:\n");
    for(int aux = 0; aux < tamVetorDouble; aux++){
        p = &vet_d[aux];
        printf("Posicao %d: %p\n", aux, p);
    }
}
