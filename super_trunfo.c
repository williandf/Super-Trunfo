#include <stdio.h>

int main() {
    // CARTA 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // CARTA 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // ENTRADA CARTA 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ENTRADA CARTA 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // CÁLCULOS DERIVADOS
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // EXIBIÇÃO DAS CARTAS
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // COMPARAÇÕES
    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPib = pib1 > pib2;
    int vTurismo = pontosTuristicos1 > pontosTuristicos2;
    int vDensidade = densidade1 < densidade2; // menor densidade vence
    int vPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    // RESULTADO DAS COMPARAÇÕES
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vTurismo);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    return 0;
}
