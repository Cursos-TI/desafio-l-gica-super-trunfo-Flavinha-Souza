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

    int atributo1, atributo2;

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

    // ===== MENU 1 =====
    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");

    printf("Escolha: ");
    scanf("%d", &atributo1);

    // ===== MENU 2 (DINAMICO) =====
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade demografica\n");

    printf("Escolha: ");
    scanf("%d", &atributo2);

    // ===== VALORES DOS ATRIBUTOS =====
    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;

    float soma1 = 0, soma2 = 0;

    // ===== PROCESSAMENTO DOS ATRIBUTOS =====
    for (int i = 1; i <= 2; i++) {

        int attr = (i == 1) ? atributo1 : atributo2;

        float *v1 = (i == 1) ? &valor1A : &valor1B;
        float *v2 = (i == 1) ? &valor2A : &valor2B;

        switch (attr) {

            case 1:
                *v1 = populacao1;
                *v2 = populacao2;
                break;

            case 2:
                *v1 = area1;
                *v2 = area2;
                break;

            case 3:
                *v1 = pib1;
                *v2 = pib2;
                break;

            case 4:
                *v1 = pontos1;
                *v2 = pontos2;
                break;

            case 5:
                *v1 = densidade1;
                *v2 = densidade2;
                break;
        }

        // regra: densidade menor vence
        if (attr == 5) {
            soma1 += (*v1 < *v2) ? 1 : 0;
            soma2 += (*v2 < *v1) ? 1 : 0;
        } else {
            soma1 += (*v1 > *v2) ? 1 : 0;
            soma2 += (*v2 > *v1) ? 1 : 0;
        }
    }

    // ===== RESULTADO =====
    printf("\n=== RESULTADO FINAL ===\n");

    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n", pais2);

    printf("Soma Pais 1: %.0f\n", soma1);
    printf("Soma Pais 2: %.0f\n", soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", pais1);
    }
    else if (soma2 > soma1) {
        printf("Vencedor: %s\n", pais2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}