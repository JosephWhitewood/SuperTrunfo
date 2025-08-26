#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;
    char codigo[50];
    char cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;
} Cartas;

int ler_carta(Cartas* carta, int numero_carta) {
   char temp_input[256];
    printf("--- Insira os dados para a Carta %d ---\n", numero_carta);
    
    printf("Estado: ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, " %c", &carta->estado);

    printf("Codigo da Carta: ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, "%s", carta->codigo);

    printf("Nome da Cidade: ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, "%[^\n]", carta->cidade);

    printf("Populacao: ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, "%d", &carta->populacao);

    printf("Area (em km2): ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, "%f", &carta->area);

    printf("PIB: ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, "%f", &carta->pib);

    printf("Numero de Pontos Turisticos: ");
    fgets(temp_input, sizeof(temp_input), stdin);
    sscanf(temp_input, "%d", &carta->pontos_turisticos);
}

int exibindo_cartas(const Cartas* carta, int numero_carta) {
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
    