#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 2

struct Estoque {
    int codigo;
    char descricao[50];
    float precoCompra;
    float precoVenda;
    int quantidade;
    int estoqueMinimo;
};

struct Estoque produtos[MAX_PRODUTOS]; 
int produtoCount = 0; 

float Mostrarlucro(float precoCompra, float precoVenda) {
    float lucro;
    lucro = precoVenda - precoCompra; 
    return lucro;
}

float Porcentagemlucro(float precoCompra, float lucro) {
    float porcentagemLucro;
    porcentagemLucro = (lucro / precoCompra) * 100;
    return porcentagemLucro;
}

int main() {
    int opcao;
    int i;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Mostrar Lucro de um Produto\n");
        printf("3. Mostrar Produtos abaixo do Estoque M�nimo\n");
        printf("4. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (produtoCount < MAX_PRODUTOS) {
                    printf("Informe o codigo do produto: ");
                    scanf("%d", &produtos[produtoCount].codigo);
                    getchar(); // Para capturar o newline deixado pelo scanf
                    printf("Adicione a descricao do produto: ");
                    fgets(produtos[produtoCount].descricao, 50, stdin);
                    printf("Informe o Pre�o de Compra do Produto: ");
                    scanf("%f", &produtos[produtoCount].precoCompra);
                    printf("Qual foi a quantidade comprada deste produto: ");
                    scanf("%d", &produtos[produtoCount].quantidade);
                    printf("Informe o estoque m�nimo: ");
                    scanf("%d", &produtos[produtoCount].estoqueMinimo);
                    produtoCount++; 
                } else {
                    printf("Estoque m�ximo de produtos atingido.\n");
                }
                break;

            case 2: 
                printf("Informe o codigo do Produto que deseja saber o lucro: ");
                int codigoBusca;
                scanf("%d", &codigoBusca);
                
                int produtoIndex = -1;
			
				
			for (i = 0; i < produtoCount; i++) {
   			 if (produtos[i].codigo == codigoBusca) {
       			 produtoIndex = i;
       			 break; 
    			}
				}
                if (produtoIndex != -1) {
                    printf("O produto que deseja consultar �: %d\n", produtos[produtoIndex].codigo); 
                    printf("Comprado no valor de: R$ %.2f reais.\n", produtos[produtoIndex].precoCompra); 
                    printf("Informe o valor de que est� sendo vendido: ");
                    scanf("%f", &produtos[produtoIndex].precoVenda);
                    
                    float lucro = Mostrarlucro(produtos[produtoIndex].precoCompra, produtos[produtoIndex].precoVenda);
                    float porcentagemLucro = Porcentagemlucro(produtos[produtoIndex].precoCompra, lucro);
                    
                    printf("O lucro obtido neste produto � de: R$ %.2f reais\n", lucro);
                    printf("O percentual que esse valor representa: %.2f%% de Lucro.\n", porcentagemLucro);
                } else {
                    printf("Produto n�o encontrado.\n");
                }
                break;
            case 3: // Mostrar Produtos abaixo do Estoque M�nimo
    printf("Produtos com quantidade em estoque abaixo do estoque m�nimo:\n");
   
    for (i = 0; i < produtoCount; i++) {
        if (produtos[i].quantidade < produtos[i].estoqueMinimo) {
            printf("C�digo: %d\n", produtos[i].codigo);
            printf("Descri��o: %s", produtos[i].descricao);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade);
            printf("Estoque M�nimo: %d\n", produtos[i].estoqueMinimo);
            printf("-------------------------\n");
        }
    }
    break;
            	default:
            		printf("Programa encerrado!!!.");
                break;
        
    } 
	}while(opcao != 4);

    return 0;
}

