#include <stdio.h>
#include <locale.h>

void conversao (char option , float segundos) {

float minutos , horas;

if (option == 'M' || option == 'm'){
    minutos = (segundos / 60);
    printf("Os %.2f segndos representam %.2f Minutos.",segundos,minutos);
}else if (option == 'H' || option == 'h') {
    horas = (segundos / 3600);
    printf("Os %.2f segndos representam %.2f Horas.");
}else if (option == 'E' || option == 'e') {
    printf("Programa ENcerrado!!!.");
}else {
    printf("Opção invalida!!!.");
}
}

int main () {

    setlocale(LC_ALL, "Portuguese");

float segundos;
char option;

    printf("Informe os Segundos a serem convertidos: ");
    scanf("%f",&segundos);
    do
    {
        printf("\n\nEsoolha a Conversão desejada:\n");
        printf("M - De Segundos para Minutos.\n");
        printf("H - De Segundos para Horas.\n");
        printf("E - Encerrar.\n");
        scanf(" %c",&option);

        conversao(option,segundos);
    } while (option != 'E' && option != 'e');
    

    return 0;
}