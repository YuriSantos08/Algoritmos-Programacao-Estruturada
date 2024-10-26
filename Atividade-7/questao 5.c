#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

float notas[3],mediaA,mediaP;
int i;
char option;

for ( i = 0; i < 3; i++)
{
printf("Informe a nota(%d) do aluno: ",i+1);
scanf("%f",&notas[i]);
}

do{
    printf("\nSelecione:\n");
    printf("A- Calcular a Media Aritmetica.\n");
    printf("P- Calcular a Media Ponderada.\n");
    printf("S- Sair\n");
    scanf(" %c",&option);
    if (option == 'A' || option == 'a')
    {
        mediaA = (notas[0] + notas[1] + notas[2]) / 3;
        printf("A Media Aritimetica do aluno foi: %.2f\n",mediaA);
    }else if (option == 'P' || option == 'p')
    {
        mediaP = ((notas[0] * 5) + (notas[1] * 3) + (notas[2] * 2)) / 10;
        printf("A Media Ponderada do aluno foi: %.2f\n",mediaP);
    }else if (option == 'S' || option =='s')
    {
        printf("Programa Encerrado!!!\n");
    }else {
        printf("Opçao invalida!!!!\n");
    }
    
    
    
} while (option != 'S' && option != 's');

    
    return 0;
}