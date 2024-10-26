#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int m[3][4] ={{1,2,3,4},{5,6,7,8},{9,1,2,3}};
    int i,j , soma[3]={0};
      
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        soma[i] += m[i][j];
    
    }
}
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            m[i][j] *= soma[i];
        }
    }

    // Exibindo a matriz resultante
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}