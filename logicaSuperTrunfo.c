#include <stdio.h>

int main() {

    /* ===== Dados das cartas (já cadastradas) ===== */

    char pais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767;
    float pib1 = 1.92;
    int pontos1 = 25;
    float densidade1 = populacao1 / area1;

    char pais2[50] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400;
    float pib2 = 0.63;
    int pontos2 = 18;
    float densidade2 = populacao2 / area2;

    int opcao;

    /* ===== Menu ===== */

    printf("SUPER TRUNFO - COMPARACAO\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");

    scanf("%d", &opcao);

    printf("\nComparacao entre %s e %s\n\n", pais1, pais2);

    /* ===== Switch ===== */

    switch(opcao) {

        case 1:

            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if(populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if(populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");

            break;

        case 2:

            printf("Atributo: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if(area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if(area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");

            break;

        case 3:

            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if(pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if(pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");

            break;

        case 4:

            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if(pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if(pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");

            break;

        case 5:

            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            /* regra invertida */

            if(densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if(densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");

            break;

        default:
            printf("Opcao invalida!\n");

    }

    return 0;
}