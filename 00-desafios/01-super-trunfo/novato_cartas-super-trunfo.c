#include <stdio.h>

int main() {

    int populacao, pontosTuristicos;
    float pib, area;
    char estado[10], codigoCarta [20], nomeCidade[50];

    int populacao_2, pontosTuristicos_2;
    float pib_2, area_2;
    char estado_2[10], codigoCarta_2[20], nomeCidade_2[50];


    printf("CADASTRO DE CARTAS SUPER TRUNFO - PAÍSES\n");
    printf("CARTA 1\n");

    printf("Digite o nome do estado (use uma letra de 'A' a 'H'): ");
    scanf("%s", &estado);

    printf("Digite o código da carta (use a letra do estado digitada anteriormente mais um número de 01 a 04): ");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Insira a quantidade da sua população: ");
    scanf("%d", &populacao);

    printf("Insira a área (em KM²): ");
    scanf("%f", &area);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);


    printf("\n CADASTRO DE CARTAS SUPER TRUNFO - PAÍSES\n");
    printf("CARTA 2\n");

    printf("Digite o nome do estado (use uma letra de 'A' a 'H'): ");
    scanf("%s", &estado_2);

    printf("Digite o código da carta (use a letra do estado digitada anteriormente mais um número de 01 a 04): ");
    scanf("%s", &codigoCarta_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade_2);

    printf("Insira a quantidade da sua população: ");
    scanf("%d", &populacao_2);

    printf("Insira a área (em KM²): ");
    scanf("%f", &area_2);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib_2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos_2);


    printf("\nCARTA 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);

    return 0;

}