#include <stdio.h>
int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura); 

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade); 
    printf("Altura: %.2f metros\n", altura);
    printf("Matricula: %d\n", matricula);
    return 0;
}     