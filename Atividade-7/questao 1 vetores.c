#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int vet1[5]={1,2,3,4,5};
    int vet2 [5]={6,7,8,9,10};
    int troca[5];
    int i;
        printf("Primeiro Vetor:\n ");

    for(i=0;i<5;i++) {
        printf("%d ",vet1[i]);
    }

    printf("\n\nSegundo Vetor:\n ");

    for(i=0;i<5;i++) {
        printf("%d ",vet2[i]);
    }


    printf("\n\nTroca:\n ");

printf("Primeiro Vetor:\n ");

    for(i=0;i<5;i++) {
         troca[i] = vet2[i];
        printf("%d ",troca[i]);
    }

    printf("\n\nSegundo Vetor:\n ");

    for(i=0;i<5;i++) {
        troca[i] = vet1[i];
        printf("%d ",troca[i]);
    }

    return 0;
}