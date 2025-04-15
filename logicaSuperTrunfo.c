#include <stdio.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
} Carta;

// Função para calcular a densidade populacional
void calcularDensidadePopulacional(Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
}

// Função para exibir os valores dos atributos
void exibirValores(Carta carta1, Carta carta2, int atributo) {
    switch (atributo) {
        case 1: // População
            printf("Carta 1 - %s: %d\n", carta1.nome, carta1.populacao);
            printf("Carta 2 - %s: %d\n", carta2.nome, carta2.populacao);
            break;
        case 2: // Área
            printf("Carta 1 - %s: %.2f km²\n", carta1.nome, carta1.area);
            printf("Carta 2 - %s: %.2f km²\n", carta2.nome, carta2.area);
            break;
        case 3: // PIB
            printf("Carta 1 - %s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("Carta 2 - %s: %.2f bilhões\n", carta2.nome, carta2.pib);
            break;
        case 4: // Pontos Turísticos
            printf("Carta 1 - %s: %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("Carta 2 - %s: %d\n", carta2.nome, carta2.pontosTuristicos);
            break;
        case 5: // Densidade Populacional
            printf("Carta 1 - %s: %.2f hab/km²\n", carta1.nome, carta1.densidadePopulacional);
            printf("Carta 2 - %s: %.2f hab/km²\n", carta2.nome, carta2.densidadePopulacional);
            break;
    }
}

// Função para comparar os atributos e retornar o vencedor
int compararAtributo(Carta carta1, Carta carta2, int atributo) {
    switch (atributo) {
        case 1: // População
            if (carta1.populacao > carta2.populacao) return 1;
            else if (carta1.populacao < carta2.populacao) return -1;
            else return 0;
        case 2: // Área
            if (carta1.area > carta2.area) return 1;
            else if (carta1.area < carta2.area) return -1;
            else return 0;
        case 3: // PIB
            if (carta1.pib > carta2.pib) return 1;
            else if (carta1.pib < carta2.pib) return -1;
            else return 0;
        case 4: // Pontos Turísticos
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) return 1;
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos) return -1;
            else return 0;
        case 5: // Densidade Populacional (menor valor vence)
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) return 1;
            else if (carta1.densidadePopulacional > carta2.densidadePopulacional) return -1;
            else return 0;
        default:
            return 0;
    }
}

// Função principal do jogo
int main() {
    Carta carta1 = {"São Paulo", 12300000, 1521.11, 750000.00, 80, 8086.20};
    Carta carta2 = {"Rio de Janeiro", 6710000, 1182.30, 410000.00, 60, 5675.38};

    // Calcular a densidade populacional de ambas as cartas
    calcularDensidadePopulacional(&carta1);
    calcularDensidadePopulacional(&carta2);

    int atributo1, atributo2;

    // Menu para escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o número do primeiro atributo desejado: ");
    scanf("%d", &atributo1);

    // Menu para escolher o segundo atributo
    printf("Escolha o segundo atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o número do segundo atributo desejado: ");
    scanf("%d", &atributo2);

    // Verificando se os atributos são diferentes
    if (atributo1 == atributo2) {
        printf("Os atributos não podem ser iguais! Tente novamente.\n");
        return 0;
    }

    // Exibindo os valores dos atributos escolhidos
    printf("\nComparação de cartas:\n");
    printf("Atributo 1 escolhido: ");
    exibirValores(carta1, carta2, atributo1);
    printf("\nAtributo 2 escolhido: ");
    exibirValores(carta1, carta2, atributo2);

    // Comparando os atributos e verificando o vencedor
    int resultado1 = compararAtributo(carta1, carta2, atributo1);
    int resultado2 = compararAtributo(carta1, carta2, atributo2);

    printf("\nResultado:\n");

    if (resultado1 == 1) {
        printf("Carta 1 (%s) venceu no Atributo 1!\n", carta1.nome);
    } else if (resultado1 == -1) {
        printf("Carta 2 (%s) venceu no Atributo 1!\n", carta2.nome);
    } else {
        printf("Empate no Atributo 1!\n");
    }

    if (resultado2 == 1) {
        printf("Carta 1 (%s) venceu no Atributo 2!\n", carta1.nome);
    } else if (resultado2 == -1) {
        printf("Carta 2 (%s) venceu no Atributo 2!\n", carta2.nome);
    } else {
        printf("Empate no Atributo 2!\n");
    }

    return 0;
}



