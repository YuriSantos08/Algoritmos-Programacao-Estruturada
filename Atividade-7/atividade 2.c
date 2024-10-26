#include <stdio.h>
#include <locale.h>

void ordenar(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main () {

    setlocale(LC_ALL, "Portuguese");

    int vet1[3], vet2[3], vet3[6];
    int i , x ,j;

    for (i = 0; i < 3; i++) {
        printf("Informe os elementos do primeiro vetor (3 posições): ");
        scanf("%d", &vet1[i]);
    }
    for (i = 0; i < 3; i++) {
        printf("Informe os elementos do segundo vetor (3 posições): ");
        scanf("%d", &vet2[i]);
    }

 for(i=0; i<3; i++){
        vet3[i] = vet1[i];
    }
    for (j=0; j<3; j++){
        vet3[i+j] = vet2[j];
    }

    printf("\n\nJunção dos Vetores fora de ormdem!:\n");
    
    for (x=0; x<6; x++){
        printf("%d ", vet3[x]);
    }

 ordenar(vet3, 6);

    printf("\nVetor em ordem crescente: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", vet3[i]);
    }
    return 0;
}
