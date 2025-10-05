#include <stdio.h>

int main() {
    // --- Declaração das variáveis ---
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turismo1, turismo2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // === Cadastro da Carta 1 ===
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

    // === Cadastro da Carta 2 ===
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

    // === Cálculo de Densidade demográfica ===
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;
    pib_per_capita2 = (pib2 * 1e9) / populacao2;

    int opcao;

    // === Menu Interativo ===
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    // === Usando Switch Case para comparações ===
    printf("\n=== Comparação ===\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n%s: %d\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s (País: Eldia) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s (País: Marley) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s (País: Eldia) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s (País: Marley) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões R$\n%s: %.2f bilhões R$\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s (País: Eldia) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s (País: Marley) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n%s: %d\n", cidade1, turismo1, cidade2, turismo2);
            if (turismo1 > turismo2)
                printf("Resultado: %s (País: Eldia) venceu!\n", cidade1);
            else if (turismo2 > turismo1)
                printf("Resultado: %s (País: Marley) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s (País: Eldia) venceu! (menor densidade)\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s (País: Marley) venceu! (menor densidade)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f R$\n%s: %.2f R$\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Resultado: %s (País: Eldia) venceu!\n", cidade1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Resultado: %s (País: Marley) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha de 1 a 6.\n");
    }

    return 0;
}
