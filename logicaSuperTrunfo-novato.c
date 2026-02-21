#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // ===== CARTA 2 =====
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // ===== ENTRADA DE DADOS CARTA 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // ===== ENTRADA DE DADOS CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // ===== EXIBIÇÃO DAS CARTAS =====
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    // ===== COMPARAÇÃO (ESCOLHA NO CÓDIGO) =====
    // Você pode trocar o atributo aqui:
    // Exemplo atual: População
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");

    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);

    // Regra: maior valor vence (exceto densidade)
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
