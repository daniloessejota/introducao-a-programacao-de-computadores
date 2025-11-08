#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    // Declaração das variáveis
    int jogador_Usuario, jogador_Computador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    // Exibição do menu e leitura da jogada do usuário
    printf(" ===== JOKENPÔ - PEDRA, PAPEL E TESOURA ===== \n");
    printf("\nEscolha sua jogada: \n");
    printf("1 - PEDRA \n");
    printf("2 - PAPEL \n"); 
    printf("3 - TESOURA \n");
    printf("Digite o número correspondente à sua jogada: ");

    scanf("%d", &jogador_Usuario);

    // Geração da jogada do computador
    jogador_Computador = (rand() % 3) + 1; // Gera um número aleatório entre 1 e 3

    // Exibição das jogadas
    switch (jogador_Usuario)
    {
    case 1:
        printf("\nVocê escolheu PEDRA\n");
        break;
    case 2:
        printf("\nVocê escolheu PAPEL\n");
        break;
    case 3:
        printf("\nVocê escolheu TESOURA\n");
        break;
        
    default: printf("\n *** Jogada Inválida! *** ");
        break;
    }

    switch (jogador_Computador)
    {
    case 1:
        printf("\nComputador escolheu PEDRA\n");
        break;
    case 2:
        printf("\nComputador escolheu PAPEL\n");
        break;
    case 3:
        printf("\nComputador escolheu TESOURA\n");    
        break;      
    }

    // Determinação do vencedor
    if (jogador_Usuario == jogador_Computador)
    {
        printf("\nEmpate!\n");

    } else if (jogador_Usuario == 1 && jogador_Computador == 3 || 
               jogador_Usuario == 2 && jogador_Computador == 1 || 
               jogador_Usuario == 3 && jogador_Computador == 2) {
        printf("\n**** VOCÊ VENCEU! ****\n");

    } else {  
        printf("\n**** VOCÊ PERDEU! Computador Venceu! ****\n");
    }

    return 0; 

}