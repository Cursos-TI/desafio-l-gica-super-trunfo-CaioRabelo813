#include <stdio.h>

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

void calcular_densidade_populacional(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
}

void calcular_pib_per_capita(Carta *carta) {
    carta->pib_per_capita = carta->pib / carta->populacao;
}

void exibir_carta(Carta carta) {
    printf("----- Carta -----\n");
    printf("Cidade: %s (%s)\n", carta.nome, carta.estado);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta.pib_per_capita);
}

void comparar_cartas(Carta carta1, Carta carta2, int atributo) {
    printf("\nComparação de cartas:\n");
    switch (atributo) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %d\n", carta1.nome, carta1.populacao);
            printf("Carta 2 - %s: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", carta1.nome, carta1.area);
            printf("Carta 2 - %s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("Carta 2 - %s: %.2f bilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: // Pontos turísticos
            printf("Atributo: Pontos turísticos\n");
            printf("Carta 1 - %s: %d\n", carta1.nome, carta1.pontos_turisticos);
            printf("Carta 2 - %s: %d\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: // Densidade Populacional
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", carta1.nome, carta1.densidade_populacional);
            printf("Carta 2 - %s: %.2f hab/km²\n", carta2.nome, carta2.densidade_populacional);
            if (carta1.densidade_populacional < carta2.densidade_populacional) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.densidade_populacional > carta2.densidade_populacional) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Atributo inválido!\n");
            break;
    }
}

int main() {
    Carta carta1 = {"São Paulo", "SP", 12300000, 1521.11, 750000.00, 80, 0.0, 0.0};
    Carta carta2 = {"Rio de Janeiro", "RJ", 6710000, 1182.30, 410000.00, 60, 0.0, 0.0};

    // Calculando a densidade populacional e PIB per capita
    calcular_densidade_populacional(&carta1);
    calcular_densidade_populacional(&carta2);
    calcular_pib_per_capita(&carta1);
    calcular_pib_per_capita(&carta2);

    // Exibir as cartas
    exibir_carta(carta1);
    exibir_carta(carta2);

    // Menu para o jogador escolher o atributo
    int escolha;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &escolha);

    // Comparar as cartas com o atributo escolhido
    comparar_cartas(carta1, carta2, escolha);

    return 0;
}
