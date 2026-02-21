#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

// Função para calcular densidade demográfica
void calcularDensidade(struct Carta *c) {
    c->densidade = c->populacao / c->area;
}

int main() {
    // Cartas pré-definidas (simplificação do desafio)
    struct Carta carta1 = {"Brasil", 203000000, 8515767.0, 1847.0, 30, 0};
    struct Carta carta2 = {"Argentina", 46000000, 2780400.0, 632.0, 20, 0};

    // Calculando densidade
    calcularDensidade(&carta1);
    calcularDensidade(&carta2);

    int opcao;

    // Menu interativo
    printf("=== SUPER TRUNFO - COMPARACAO DE PAISES ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s VS %s\n", carta1.pais, carta2.pais);

    switch(opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", carta1.pais, carta1.populacao);
            printf("%s: %d\n", carta2.pais, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", carta1.pais, carta1.area);
            printf("%s: %.2f\n", carta2.pais, carta2.area);

            if (carta1.area > carta2.area) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.pais, carta1.pib);
            printf("%s: %.2f\n", carta2.pais, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.pais, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta1.pais);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade (regra invertida)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", carta1.pais, carta1.densidade);
            printf("%s: %.2f\n", carta2.pais, carta2.densidade);

            // Regra especial: menor vence
            if (carta1.densidade < carta2.densidade) {
                printf("Resultado: %s venceu (menor densidade)!\n", carta1.pais);
            } else if (carta2.densidade < carta1.densidade) {
                printf("Resultado: %s venceu (menor densidade)!\n", carta2.pais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Reinicie e escolha entre 1 e 5.\n");
            break;
    }

    return 0;
}
