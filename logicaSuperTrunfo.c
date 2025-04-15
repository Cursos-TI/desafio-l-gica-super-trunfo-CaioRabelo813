#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[30];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular os dados derivados da carta
void calcularDados(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib * 1000000000.0 / carta->populacao;  // Corrigir PIB per capita
}

// Função para exibir os dados principais da carta
void exibirCarta(Carta carta) {
    printf("Cidade: %s (%s)\n", carta.cidade, carta.estado);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f\n\n", carta.pib_per_capita);
}

int main() {
    // Cadastro manual das duas cartas com dados fictícios
    Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 750000.0, 80};
    Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6710000, 1182.3, 410000.0, 60};

    // Cálculo da densidade populacional e do PIB per capita
    calcularDados(&carta1);
    calcularDados(&carta2);

    // Exibição das cartas
    printf("----- Carta 1 -----\n");
    exibirCarta(carta1);

    printf("----- Carta 2 -----\n");
    exibirCarta(carta2);

    // Comparação de atributo definido no código: PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s: %.2f\n", carta1.cidade, carta1.pib_per_capita);
    printf("Carta 2 - %s: %.2f\n\n", carta2.cidade, carta2.pib_per_capita);

    // Lógica de comparação com if / if-else
    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
