#include <stdio.h>

int main() {

    // Definição das variáveis para a primeira e segunda carta
    unsigned long int populacao_1; 
    int pontosTuristicos;
    float pib, area;
    char estado[10], codigoCarta [20], nomeCidade[50];

    unsigned long int populacao_2;
    int pontosTuristicos_2;
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
    scanf("%d", &populacao_1);

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
    float densidadePopulacional = populacao_1 / area;
    float pibPerCapita = pib / populacao_1;


    //Calculando a Densidade Populacional e o PIB per Capita para a segunda carta
    float densidadePopulacional_2 = populacao_2 / area_2;
    float pibPerCapita_2 = pib_2 / populacao_2;

    //Super Poder
    float superPoder_carta1 =  (float) populacao_1 + (float) pontosTuristicos + pib + area + pibPerCapita + (float) 1/densidadePopulacional;
    
    float superPoder_carta2 =  (float) populacao_2 + (float) pontosTuristicos_2 + pib_2 + area_2 + pibPerCapita_2 + (float) 1/densidadePopulacional_2;

    // Exibição das cartas cadastradas
    printf("\n***** CARTA 1 *****\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao_1);
    printf("Área: %2f Km² \n", area);
    printf("Densidade Populacional: %.2f  hab/Km² \n", densidadePopulacional);
    printf("PIB: R$ %.2f\n", pib);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("SUPER PODER: %.2f\n", superPoder_carta1);


    printf("\n***** CARTA 2 *****\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", nomeCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %2f\n", area_2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional_2);
    printf("PIB: %.2f\n", pib_2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita_2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_2);
    printf("SUPER PODER: %.2f\n", superPoder_carta2);


    /*Comparando as cartas
    printf("\n***** COMPARANDO AS CARTAS *****\n");
    printf("População: Carta 1 é maior que Carta 2? %d\n", (populacao_1 > populacao_2));
    printf("Pontos Turísticos: Carta 1 é maior que Carta 2? %d\n", (pontosTuristicos > pontosTuristicos_2));
    printf("PIB: Carta 1 é maior que Carta 2? %d\n", (pib > pib_2));
    printf("Área: Carta 1 é maior que Carta 2? %d\n", (area > area_2));
    printf("PIB per Capita: Carta 1 é maior que Carta 2? %d\n", (pibPerCapita > pibPerCapita_2));
    printf("Densidade Populacional: Carta 1 é menor que Carta 2? %d\n", (densidadePopulacional < densidadePopulacional_2)); 
    printf("Super Poder: Carta 1 é maior que Carta 2? %d\n", (superPoder_carta1 > superPoder_carta2));*/

    printf("\n***** COMPARANDO AS CARTAS *****\n");
    printf("COMPARANDO A POPULAÇÃO:\n");
    
    if (populacao_1 > populacao_2)
    {
        printf("Carta 1: %s %s: %d habitantes\n", estado, nomeCidade, populacao_1);
        printf("Carta 2: %s %s: %d habitantes\n", estado_2, nomeCidade_2, populacao_2);
        printf("\nA carta 1 tem maior população que a carta 2.\n");
    } else {
        printf("Carta 1: %s %s: %d habitantes\n", estado, nomeCidade, populacao_1);
        printf("Carta 2: %s %s: %d habitantes\n", estado_2, nomeCidade_2, populacao_2);
        printf("\nA carta 2 tem maior população que a carta 1.\n");
    }

    return 0;

}