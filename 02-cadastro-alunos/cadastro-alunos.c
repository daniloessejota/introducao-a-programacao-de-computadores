#include <stdio.h>

int main() {

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Cadastro de Alunos\n");

    printf("Digite seu número de matrícula: ");
    scanf("%d", &matricula);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    printf("\nDados do Aluno Cadastrado:\n");
    printf("Matrícula: %d\n", matricula);
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}