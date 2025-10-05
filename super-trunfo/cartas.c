#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turismo1, turismo2;

    // === Carta 1 ===
    printf("=== Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1); // lê até o Enter, aceita espaço

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
    scanf(" %c", &estado2); // espaço antes do %c

    printf("Código (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2); // lê até o Enter, aceita espaço

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &turismo2);

    // === Exibição ===
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões R$\nPontos turísticos: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões R$\nPontos turísticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2);

    return 0;
}
