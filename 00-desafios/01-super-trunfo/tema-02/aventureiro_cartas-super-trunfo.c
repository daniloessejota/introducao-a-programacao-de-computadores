#include <stdio.h>

int main() {

    int populacao, pontosTuristicos;
    float pib, area;
    char estado[10], codigoCarta [20], nomeCidade[50];

    int populacao_2, pontosTuristicos_2;
    float pib_2, area_2;
    char estado_2[10], codigoCarta_2[20], nomeCidade_2[50];

    // Cadastro da primeira carta
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


    // Cadastro da segunda carta
    printf("\nCADASTRO DE CARTAS SUPER TRUNFO - PAÍSES\n");
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


    //Calculando a Densidade Populacional e o PIB per Capita para a primeira carta
    float densidadePopulacional = populacao / area;
    float pibPerCapita = pib / populacao;


    //Calculando a Densidade Populacional e o PIB per Capita para a segunda carta
    float densidadePopulacional_2 = populacao_2 / area_2;
    float pibPerCapita_2 = pib_2 / populacao_2;



    // Exibição das cartas cadastradas
    printf("\n***** CARTA 1 *****\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %2f Km² \n", area);
    printf("Densidade Populacional: %.2f  hab/Km² \n", densidadePopulacional);
    printf("PIB: R$ %.2f\n", pib);
    printf("PIB per Capita: R$ %.2f \n", pibPerCapita);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);



    printf("\n***** CARTA 2 *****\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %2f\n", area_2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional_2);
    printf("PIB: %.2f\n", pib_2);
    printf("PIB per Capita: %.2f\n", pibPerCapita_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);

    return 0;

}