#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;

    // ===== CARTA 2 =====
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;

    int escolha;

    // ===== ENTRADA CARTA 1 =====
    printf("=== CARTA 1 ===\n");

    printf("Nome do pais: ");
    scanf(" %[^\n]", pais1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== CARTA 2 ===\n");

    printf("Nome do pais: ");
    scanf(" %[^\n]", pais2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;

    // ===== MENU =====
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");

    printf("\nEscolha um atributo: ");
    scanf("%d", &escolha);

    printf("\n=== RESULTADO ===\n");

    switch (escolha) {

        case 1:
            printf("Atributo: Populacao\n");

            if (populacao1 > populacao2) {
                printf("%s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area\n");

            if (area1 > area2) {
                printf("%s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("%s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");

            if (pib1 > pib2) {
                printf("%s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");

            if (pontos1 > pontos2) {
                printf("%s venceu!\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("%s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");

            if (densidade1 < densidade2) {
                printf("%s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("%s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}