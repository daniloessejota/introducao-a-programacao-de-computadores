// Projeto: Sistema de Controle de Estoque
// Autor: Danilo Silva de Jesus
// Data: 12/06/2024
// Descrição: Este programa gerencia o estoque de dois produtos, comparando quantidades e valores totais. Foi criado para praticar o uso de variáveis, tipos de dados e operações aritméticas em C, operadores relacionais e modificadores de tipos.

#include <stdio.h>

int main() {

    // Definição das variáveis para o estoque de produtos
    char nomeProdutoA[50] = "Hard Drive";
    char nomeProdutoB[50] = "Keyboard";

    unsigned int quantidade_ProdutoA = 1051;
    unsigned int quantidade_ProdutoB = 5760;

    unsigned int quantidade_MinimaProdutoA = 200;
    unsigned int quantidade_MaximaProdutoA = 10000;

    unsigned int quantidade_MinimaProdutoB = 150;
    unsigned int quantidade_MaximaProdutoB = 15000;

    float preco_UnitarioProdutoA = 299.99;
    float preco_UnitarioProdutoB = 49.99;

    double valor_TotalProdutoA = quantidade_ProdutoA * preco_UnitarioProdutoA;
    double valor_TotalProdutoB = quantidade_ProdutoB * preco_UnitarioProdutoB;

    int comparacao_EstoqueMinA, comparacao_EstoqueMaxA, comparacao_EstoqueMinB, comparacao_EstoqueMaxB;

    // Exibição das informações do estoque
    printf("O produto %s possui %u unidades em estoque.\n", nomeProdutoA, quantidade_ProdutoA);
    printf("O preço unitário do produto %s é R$ %.2f.\n", nomeProdutoA, preco_UnitarioProdutoA);

    printf("\nO produto %s possui %u unidades em estoque.\n", nomeProdutoB, quantidade_ProdutoB);
    printf("O preço unitário do produto %s é R$ %.2f.\n", nomeProdutoB, preco_UnitarioProdutoB);

    // Comparação do estoque com os níveis mínimos e máximos
    comparacao_EstoqueMinA = (quantidade_ProdutoA > quantidade_MinimaProdutoA);
    comparacao_EstoqueMaxA = (quantidade_ProdutoA > quantidade_MaximaProdutoA);

    comparacao_EstoqueMinB = (quantidade_ProdutoB > quantidade_MinimaProdutoB);
    comparacao_EstoqueMaxB = (quantidade_ProdutoB > quantidade_MaximaProdutoB);

    printf("\nA quantidade do produto %s está acima do estoque minímo? %d\n", nomeProdutoA, comparacao_EstoqueMinA);
    printf("A quantidade do produto %s está acima do estoque máximo? %d\n", nomeProdutoA, comparacao_EstoqueMaxA);

    printf("A quantidade do produto %s está acima do estoque minímo? %d\n", nomeProdutoB, comparacao_EstoqueMinB);
    printf("A quantidade do produto %s está acima do estoque máximo? %d\n", nomeProdutoB, comparacao_EstoqueMaxB);

    // Cálculo e exibição do valor total em estoque para cada produto
    printf("\nO valor total em estoque do produto %s é R$ %.2f.\n", nomeProdutoA, valor_TotalProdutoA);
    printf("O valor total em estoque do produto %s é R$ %.2f.\n", nomeProdutoB, valor_TotalProdutoB);

    //Comparação dos valores totais em estoque
    printf("\nO valor total em estoque do produto %s é maior que o do produto %s? %d\n", nomeProdutoA, nomeProdutoB, (valor_TotalProdutoA > valor_TotalProdutoB));

    return 0;
}