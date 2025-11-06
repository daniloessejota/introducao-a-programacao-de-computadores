//Pequeno progrma para monitorar a segurança em um estoque

#include <stdio.h>

int main() {
    //Declaração de variáveis
    float temperatura, umidade;
    unsigned int estoque;

    //Entrada de dados
    printf("Digite a temperatura do estoque (em °C): ");
    scanf("%f", &temperatura);

    printf("Digite a umidade do estoque (em %%): ");
    scanf("%f", &umidade);

    printf("Digite a quantidade de itens no estoque: ");
    scanf("%u", &estoque);

    //Verificação das condições de segurança
    
    printf("======= VERIFICACAO DAS CONDIÇÕES DE SEGURANÇA =======\n");


    if (temperatura > 25)
    {
        printf("ALERTA: Temperatura acima do limite seguro!\n");
    } else {
        printf("BOM: Temperatura dentro do limite seguro.\n");
    }   

    if (umidade < 60)
    {
        printf("ALERTA: Umidade abaixo do valor seguro!\n");
    } else {
        printf("BOM: Umidade dentro do valor seguro.\n");
    }

    if (estoque <= 99)
    {
        printf("ALERTA: Estoque abaixo do limite mínimo seguro!\n");
    } else {
        if (estoque >= 10501)
        {
            printf("ALERTA: Estoque acima do limite máximo seguro!\n");

        } else {
        
        printf("BOM: Estoque dentro do limite mínimo e máximo seguro.\n");
    }
    } 

    return 0;
}