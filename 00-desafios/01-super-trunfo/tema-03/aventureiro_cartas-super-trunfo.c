#include <stdio.h>

int main() {

    // Definição das variáveis para a primeira e segunda carta
    unsigned long int populacao_1 = 12325000; 
    int pontosTuristicos = 50;
    float pib = 700280000, area = 1521.11;
    char estado[10] = "A", codigoCarta [20] = "A01", nomeCidade[50] = "SãoPaulo";

    unsigned long int populacao_2 = 6748000;
    int pontosTuristicos_2 = 30;
    float pib_2 = 300500000, area_2 = 1302.95;
    char estado_2[10] = "B", codigoCarta_2[20] = "B02", nomeCidade_2[50] = "RioDeJaneiro";

    int atributoComparar; // 1: População, 2: Pontos Turísticos, 3: PIB, 4: Área, 5: PIB per Capita, 6: Densidade Populacional, 7: Super Poder


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
    printf ("CADASTRO DE CARTAS SUPER TRUNFO - PAÍSES\n");
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

    //Escolhendo o atributo para comparar

    printf("\nEscolha o que você quer comparar \n1: População, \n2: Pontos Turísticos, \n3: PIB, \n4: Área, \n5: PIB per Capita, \n6: Densidade Populacional, \n7: Super Poder: \n");
    scanf("%d", &atributoComparar);

    
    switch (atributoComparar)
    {
    case 1:
        if (populacao_1 > populacao_2)
        {
            printf("** %s VENCEU! ** A cidade %s tem maior população que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem maior população que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;

    case 2:
        if (pontosTuristicos > pontosTuristicos_2)
        {
            printf("** %s VENCEU! ** A cidade %s tem mais pontos turísticos que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem mais pontos turísticos que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;

    case 3:
        if (pib > pib_2)
        {
            printf("** %s VENCEU! ** A cidade %s tem maior PIB que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem maior PIB que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;

    case 4:
        if (area > area_2)
        {
            printf("** %s VENCEU! ** A cidade %s tem maior área que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem maior área que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;

    case 5:
        if (pibPerCapita > pibPerCapita_2)
        {
            printf("** %s VENCEU! ** A cidade %s tem maior PIB per Capita que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem maior PIB per Capita que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;

    case 6:
        if (densidadePopulacional < densidadePopulacional_2)
        {
            printf("** %s VENCEU! ** A cidade %s tem menor Densidade Populacional que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem menor Densidade Populacional que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;

    case 7:
        if (superPoder_carta1 > superPoder_carta2)
        {
            printf("** %s VENCEU! ** A cidade %s tem maior Super Poder que %s.\n", nomeCidade, nomeCidade, nomeCidade_2);
        } else {
            printf("** %s VENCEU! ** A cidade %s tem maior Super Poder que %s.\n" , nomeCidade_2, nomeCidade_2, nomeCidade);
        }
        break;  

    default: printf("Atributo inválido! Tente novamente.\n");
        break;
    }

    return 0;

}