#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turismo1, turismo2;

    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // === Carta 1 ===
    printf("=== Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &turismo1);

    // === Carta 2 ===
    printf("\n=== Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &turismo2);

    // === Cálculos extras ===
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 * 1e9 / populacao1; // PIB em R$ / habitante
    pib_per_capita2 = pib2 * 1e9 / populacao2;

    // === Exibição das cartas ===
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões R$\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f R$\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1, densidade1, pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões R$\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f R$\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2, densidade2, pib_per_capita2);

    // === Comparação de atributo (População) ===
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
