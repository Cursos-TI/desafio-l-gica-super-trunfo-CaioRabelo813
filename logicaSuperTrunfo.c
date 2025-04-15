#include <stdio.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para comparar os dois atributos escolhidos e calcular o vencedor
void compararCartas(Carta carta1, Carta carta2, int atributo1, int atributo2) {
    int resultadoAtributo1, resultadoAtributo2;

    // Comparação do primeiro atributo
    switch (atributo1) {
        case 1: // População
            resultadoAtributo1 = carta1.populacao > carta2.populacao;
            break;
        case 2: // Área
            resultadoAtributo1 = carta1.area > carta2.area;
            break;
        case 3: // PIB
            resultadoAtributo1 = carta1.pib > carta2.pib;
            break;
        case 4: // Pontos Turísticos
            resultadoAtributo1 = carta1.pontosTuristicos > carta2.pontosTuristicos;
            break;
        case 5: // Densidade Populacional
            resultadoAtributo1 = carta1.densidadePopulacional < carta2.densidadePopulacional; // Menor vence
            break;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
        case 1: // População
            resultadoAtributo2 = carta1.populacao > carta2.populacao;
            break;
        case 2: // Área
            resultadoAtributo2 = carta1.area > carta2.area;
            break;
        case 3: // PIB
            resultadoAtributo2 = carta1.pib > carta2.pib;
            break;
        case 4: // Pontos Turísticos
            resultadoAtributo2 = carta1.pontosTuristicos > carta2.pontosTuristicos;
            break;
        case 5: // Densidade Populacional
            resultadoAtributo2 = carta1.densidadePopulacional < carta2.densidadePopulacional; // Menor vence
            break;
    }

    // Exibição do resultado de cada atributo
    printf("Atributo 1 escolhido:\n");
    printf("Carta 1 - %s: ", carta1.nome);
    switch (atributo1) {
        case 1: printf("%d\n", carta1.populacao); break;
        case 2: printf("%.2f km²\n", carta1.area); break;
        case 3: printf("%.2f bilhões\n", carta1.pib); break;
        case 4: printf("%d\n", carta1.pontosTuristicos); break;
        case 5: printf("%.2f hab/km²\n", carta1.densidadePopulacional); break;
    }
    
    printf("Carta 2 - %s: ", carta2.nome);
    switch (atributo1) {
        case 1: printf("%d\n", carta2.populacao); break;
        case 2: printf("%.2f km²\n", carta2.area); break;
        case 3: printf("%.2f bilhões\n", carta2.pib); break;
        case 4: printf("%d\n", carta2.pontosTuristicos); break;
        case 5: printf("%.2f hab/km²\n", carta2.densidadePopulacional); break;
    }

    if (resultadoAtributo1) {
        printf("Carta 1 venceu no Atributo 1!\n");
    } else {
        printf("Carta 2 venceu no Atributo 1!\n");
    }

    printf("Atributo 2 escolhido:\n");
    printf("Carta 1 - %s: ", carta1.nome);
    switch (atributo2) {
        case 1: printf("%d\n", carta1.populacao); break;
        case 2: printf("%.2f km²\n", carta1.area); break;
        case 3: printf("%.2f bilhões\n", carta1.pib); break;
        case 4: printf("%d\n", carta1.pontosTuristicos); break;
        case 5: printf("%.2f hab/km²\n", carta1.densidadePopulacional); break;
    }
    
    printf("Carta 2 - %s: ", carta2.nome);
    switch (atributo2) {
        case 1: printf("%d\n", carta2.populacao); break;
        case 2: printf("%.2f km²\n", carta2.area); break;
        case 3: printf("%.2f bilhões\n", carta2.pib); break;
        case 4: printf("%d\n", carta2.pontosTuristicos); break;
        case 5: printf("%.2f hab/km²\n", carta2.densidadePopulacional); break;
    }

    if (resultadoAtributo2) {
        printf("Carta 1 venceu no Atributo 2!\n");
    } else {
        printf("Carta 2 venceu no Atributo 2!\n");
    }

    // Soma dos Atributos
    int somaCarta1 = resultadoAtributo1 + resultadoAtributo2;
    int somaCarta2 = 2 - somaCarta1;

    // Resultado final
    printf("Soma dos Atributos:\n");
    printf("Carta 1 - %s: %d\n", carta1.nome, somaCarta1);
    printf("Carta 2 - %s: %d\n", carta2.nome, somaCarta2);

    // Verificar quem venceu
    if (somaCarta1 > somaCarta2) {
        printf("Resultado: Carta 1 (vencedor)!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("Resultado: Carta 2 (vencedor)!\n");
    } else {
        printf("Empate!\n");
    }
}

int main() {
    // Definição das cartas
    Carta carta1 = {"São Paulo", 12300000, 1521.11, 750000.00, 80, 8086.20, 0.06};
    Carta carta2 = {"Rio de Janeiro", 6710000, 1182.30, 410000.00, 60, 5675.38, 0.06};

    int atributo1, atributo2;

    // Exibição dos menus
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("Digite o número do primeiro atributo desejado: ");
    scanf("%d", &atributo1);

    // Validar se o primeiro e o segundo atributo são diferentes
    do {
        printf("Escolha o segundo atributo para comparar as cartas:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
        printf("Digite o número do segundo atributo desejado: ");
        scanf("%d", &atributo2);
    } while (atributo1 == atributo2);  // Garantir que os atributos sejam diferentes

    // Comparar as cartas
    compararCartas(carta1, carta2, atributo1, atributo2);

    return 0;
}



