#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char nome[50];
    char estado[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta c) {
    printf("Cidade: %s (%s)\n", c.nome, c.estado);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per capita: %.2f\n", c.pib_per_capita);
}

// Função para comparar as cartas com base no atributo escolhido
void compararCartas(Carta c1, Carta c2, int atributoEscolhido) {
    switch (atributoEscolhido) {
        case 1: // População
            printf("Comparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d\n", c1.nome, c1.populacao);
            printf("Carta 2 - %s: %d\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
            } else if (c1.populacao < c2.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 2: // Área
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", c1.nome, c1.area);
            printf("Carta 2 - %s: %.2f km²\n", c2.nome, c2.area);
            if (c1.area > c2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
            } else if (c1.area < c2.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 3: // PIB
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões\n", c1.nome, c1.pib);
            printf("Carta 2 - %s: %.2f bilhões\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
            } else if (c1.pib < c2.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 4: // Pontos turísticos
            printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d\n", c1.nome, c1.pontos_turisticos);
            printf("Carta 2 - %s: %d\n", c2.nome, c2.pontos_turisticos);
            if (c1.pontos_turisticos > c2.pontos_turisticos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
            } else if (c1.pontos_turisticos < c2.pontos_turisticos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 5: // Densidade Populacional
            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", c1.nome, c1.densidade_populacional);
            printf("Carta 2 - %s: %.2f hab/km²\n", c2.nome, c2.densidade_populacional);
            if (c1.densidade_populacional < c2.densidade_populacional) {
                printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
            } else if (c1.densidade_populacional > c2.densidade_populacional) {
                printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;
        
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
}

int main() {
    // Cartas pré-cadastradas
    Carta carta1 = {"São Paulo", "SP", 12300000, 1521.11, 750000.0, 80, 8086.20, 60975608.0};
    Carta carta2 = {"Rio de Janeiro", "RJ", 6710000, 1182.30, 410000.0, 60, 5675.38, 61102832.0};

    int escolha;
    
    // Menu interativo
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &escolha);

    // Chama a função para comparar as cartas
    compararCartas(carta1, carta2, escolha);
    
    return 0;
}

