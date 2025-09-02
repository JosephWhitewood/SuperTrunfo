#include <stdio.h>

typedef struct {
    char estado,codigo[4],cidade[50];
    int populacao,pontos_turisticos;
    float area,pib;
} Cartas;

void ler_carta(Cartas* carta, int numero_carta) {
    printf("Digite os dados da Carta %d:\n", numero_carta);
    printf("Estado (1 caractere): ");
    scanf(" %c", &carta->estado);
    printf("Codigo da Carta (3 caracteres): ");
    scanf("%s", carta->codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta->cidade);
    printf("Populacao: ");
    scanf("%d", &carta->populacao);
    printf("Area (em km2): ");
    scanf("%f", &carta->area);
    printf("PIB: ");
    scanf("%f", &carta->pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta->pontos_turisticos);
  
}

void exibindo_cartas(const Cartas* carta, int numero_carta) {
    printf("--- Dados da Carta %d ---\n", numero_carta);
    printf("Estado: %c\n", carta->estado);
    printf("Codigo da Carta: %s\n", carta->codigo);
    printf("Cidade: %s\n", carta->cidade);
    printf("Populacao: %d\n", carta->populacao);
    printf("Area: %.2f km2\n", carta->area);
    printf("PIB: %.2f\n", carta->pib);
    printf("Pontos Turisticos: %d\n", carta->pontos_turisticos);
    printf("------------------------------------\n");
}

int main() {
    Cartas carta1, carta2;

    ler_carta(&carta1,1);
    ler_carta(&carta2,2);

    exibindo_cartas(&carta1, 1);
    exibindo_cartas(&carta2, 2); 
    return 0;
}

    
