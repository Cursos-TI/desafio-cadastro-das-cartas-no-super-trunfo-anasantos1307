#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[4];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
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
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nInforme os dados da segunda carta!\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);  // espaço antes do %c

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    return 0;
}
