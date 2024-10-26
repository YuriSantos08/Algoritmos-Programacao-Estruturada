#include <stdio.h>
#include <locale.h>

void pesoIdeial (float altura , char sexo) {

float pesoM , pesoF;

if (sexo == 'M' || sexo == 'm') {

    pesoM =  (72.7 *altura) - 58;
    printf("Seu peso ideal é: %.2f ",pesoM);
}else if (sexo == 'F' || sexo == 'f') {

    pesoF =  (62.1 * altura) - 44.7;
    printf("Seu peso ideal é: %.2f ",pesoF);
}else if (sexo == 'e' || sexo == 'E') {
    printf("\nPrograma Encerrado!!!.");
}else {
    printf("Opçao Invalida!!!!.");
}

}

int main () {

    setlocale(LC_ALL, "Portuguese");

float altura ;
char sexo;

do
{
    printf("Informe sua Altura: ");
    scanf("%f",&altura);

    printf("\n\nInforme seu Sexo:\n");
    printf("M- Masculino.\n");
    printf("F- Feiminino.\n");
    printf("E- Encerrar\n");
    scanf(" %c",&sexo);

    pesoIdeial(altura,sexo);
    
} while (sexo != 'E' || sexo != 'e');

    
    return 0;
}