#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nome1[30];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    double pib1;  // PIB em bilhões de reais
    int pontos1;

    char estado2;
    char codigo2[4];
    char nome2[30];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    double pib2;  // PIB em bilhões de reais
    int pontos2;

    // Carta 1
    printf("Informe os dados da primeira carta!\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1); // Usando %lu para unsigned long int

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nInforme os dados da segunda carta!\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2); // Usando %lu para unsigned long int

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    double densidadePopulacional1 = populacao1 / area1;
    double densidadePopulacional2 = populacao2 / area2;

    // PIB per Capita
    double pibPerCapita1 = pib1 / populacao1;
    double pibPerCapita2 = pib2 / populacao2;

    // Super Poder
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + (1.0 / densidadePopulacional1) + pibPerCapita1;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + (1.0 / densidadePopulacional2) + pibPerCapita2;

    // Exibição
    printf("\nComparação de Cartas:\n");

    // Comparação de População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    
    // Comparação de Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    
    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    
    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2) ? 1 : 0);
    
    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);
    
    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    
    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}
