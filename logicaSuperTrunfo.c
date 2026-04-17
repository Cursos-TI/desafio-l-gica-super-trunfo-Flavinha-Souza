#include <stdio.h>

// Desafio Super Trunfo - Comparação simples

int main() {

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("=== CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    getchar(); //  LIMPA BUFFER 

    printf("\n=== CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n=== COMPARACAO ===\n");

    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu\n");
    } else {
        printf("Populacao: Carta 2 venceu\n");
    }

    return 0;
}