#include <stdio.h>
#include <string.h>

struct Funcionarios {
    char nome[40];
    float vendaMensal[3];
};

float Pontos(struct Funcionarios funcionarios) {
    float soma = 0;
    for (int i = 0; i < 3; i++) { 
        soma += funcionarios.vendaMensal[i];
    }
    return soma / 1000; 
}

float Vendatotal(struct Funcionarios funcionarios[]) { 
    float vendaTotal = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            vendaTotal += funcionarios[i].vendaMensal[j];
        }
    }
    return vendaTotal;
}

int main() {
    struct Funcionarios funcionarios[2];
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("Informe o nome do Funcionario (%d): \n", i + 1);
        fgets(funcionarios[i].nome, 40, stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = 0; 

        for (j = 0; j < 3; j++) { 
            printf("Informe a Venda do mes(%d): \n", j + 1);
            scanf("%f", &funcionarios[i].vendaMensal[j]);
        }
        getchar();  
    }

    for (i = 0; i < 2; i++) {
        float pontos = Pontos(funcionarios[i]);
        printf("Pontuacao do funcionario %s: %.2f pontos\n", funcionarios[i].nome, pontos);
    }

    for (int mes = 0; mes < 3; mes++) {
        float somaVendasMes = 0;

        for (i = 0; i < 2; i++) {
            somaVendasMes += funcionarios[i].vendaMensal[mes];
        }

        float pontosMes = somaVendasMes / 1000;

        printf("Pontuação geral de todos os funcionários no mês %d: %.2f pontos\n", mes + 1, pontosMes);
    }

    float maiorPontuacao = -1; 
    char nomeFuncionario[40]; 
    int contadorEmpates = 0; 

    for (i = 0; i < 2; i++) {
        float pontosFuncionario = Pontos(funcionarios[i]); 
        if (pontosFuncionario > maiorPontuacao) {
            maiorPontuacao = pontosFuncionario;
            strcpy(nomeFuncionario, funcionarios[i].nome); 
            contadorEmpates = 1; 
        } else if (pontosFuncionario == maiorPontuacao) {
            contadorEmpates++; 
        }
    }

    if (contadorEmpates == 1) {
        printf("Maior pontuacao atingida: %.2f pontos pelo funcionario %s\n", maiorPontuacao, nomeFuncionario);
    } else {
        printf("Houve empate na maior pontuacao.\n");
    }

    printf("Venda Total de todos os funcionarios: %.2f\n", Vendatotal(funcionarios)); 

    return 0;
}



