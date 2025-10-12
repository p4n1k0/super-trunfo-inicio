#include <stdio.h>

int main()
{
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
    scanf(" %[^\n]", cidade1); // lê até o Enter, aceita espaço

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

    // === Cálculo de Densidade e PIB per capita ===
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1e9) / populacao1; // === 1e9: 1.000.000.000 ===
    pib_per_capita2 = (pib2 * 1e9) / populacao2; // PIB em R$ / habitante

    // --- Declaração das variáveis ---
    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0; // --- Variável para fazer comparações de atributos ---
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2; // --- Variável para somar atributos ---

    // === Menu Interativo ===
    printf("\n=== MENU DE COMPARAÇÃO AVANÇADA ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");

    printf("\nEscolha o PRIMEIRO atributo: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++)
    {
        if (i == atributo1)
            continue; // evita repetir atributo
        // === Usando Switch Case para comparações ===
        switch (i)
        {
        case 1:
            printf("%d - População\n", i);
            break;
        case 2:
            printf("%d - Área\n", i);
            break;
        case 3:
            printf("%d - PIB\n", i);
            break;
        case 4:
            printf("%d - Pontos Turísticos\n", i);
            break;
        case 5:
            printf("%d - Densidade Populacional (menor vence)\n", i);
            break;
        case 6:
            printf("%d - PIB per Capita\n", i);
            break;
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    // === Caso atributos iguais ocorre erro ===
    if (atributo1 == atributo2)
    {
        printf("\nErro: os dois atributos não podem ser iguais!\n");
        return 1;
    }

    // === Atribui os valores dos atributos escolhidos ===
    // Função genérica via switch
    switch (atributo1)
    {
    case 1:
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
        break;
    case 2:
        valor1_c1 = area1;
        valor1_c2 = area2;
        break;
    case 3:
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        break;
    case 4:
        valor1_c1 = turismo1;
        valor1_c2 = turismo2;
        break;
    case 5:
        valor1_c1 = 1 / densidade1;
        valor1_c2 = 1 / densidade2;
        break; // menor vence
    case 6:
        valor1_c1 = pib_per_capita1;
        valor1_c2 = pib_per_capita2;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
    }

    switch (atributo2)
    {
    case 1:
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
        break;
    case 2:
        valor2_c1 = area1;
        valor2_c2 = area2;
        break;
    case 3:
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        break;
    case 4:
        valor2_c1 = turismo1;
        valor2_c2 = turismo2;
        break;
    case 5:
        valor2_c1 = 1 / densidade1;
        valor2_c2 = 1 / densidade2;
        break;
    case 6:
        valor2_c1 = pib_per_capita1;
        valor2_c2 = pib_per_capita2;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
    }

    // === Exibe valores escolhidos ===
    printf("\n=== VALORES ESCOLHIDOS ===\n");

    char *nomes[7] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade Populacional", "PIB per Capita"};
    printf("Atributo 1: %s\n", nomes[atributo1]);
    printf("Atributo 2: %s\n\n", nomes[atributo2]);

    printf("%s -> %.2f e %.2f\n", cidade1, valor1_c1, valor2_c1);
    printf("%s -> %.2f e %.2f\n", cidade2, valor1_c2, valor2_c2);

    // === Soma dos atributos ===
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // === Adiciona país relacionado a cidade ===
    printf("\n=== SOMA DOS ATRIBUTOS ===\n");
    printf("%s: %.2f (País: Eldia)\n", cidade1, soma1);
    printf("%s: %.2f (País: Marley)\n", cidade2, soma2);

    // === Resultado final com operador ternário ===
    printf("\n=== RESULTADO FINAL ===\n");
    (soma1 > soma2)
        ? printf("Vencedor: %s (País: Eldia)!\n", cidade1)
    : (soma2 > soma1)
        ? printf("Vencedor: %s (País: Marley)!\n", cidade2)
        : printf("Empate!\n");

    return 0;
}
