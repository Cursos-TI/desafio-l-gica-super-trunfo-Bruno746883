#include <stdio.h>

int main(){

    /* ===== Cartas pré-cadastradas ===== */

    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767;
    float pib1 = 1.9;
    int pontos1 = 25;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780400;
    float pib2 = 0.63;
    int pontos2 = 18;
    float densidade2 = populacao2 / area2;

    int op1, op2;
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    float soma1, soma2;

    printf("=== SUPER TRUNFO ===\n\n");

    /* ===== PRIMEIRO MENU ===== */

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    scanf("%d",&op1);

    /* ===== SEGUNDO MENU (dinâmico) ===== */

    printf("\nEscolha o SEGUNDO atributo:\n");

    if(op1!=1) printf("1 - Populacao\n");
    if(op1!=2) printf("2 - Area\n");
    if(op1!=3) printf("3 - PIB\n");
    if(op1!=4) printf("4 - Pontos Turisticos\n");
    if(op1!=5) printf("5 - Densidade Demografica\n");

    scanf("%d",&op2);

    /* ===== ATRIBUTO 1 ===== */

    switch(op1){

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
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;

        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    /* ===== ATRIBUTO 2 ===== */

    switch(op2){

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
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;

        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    /* ===== SOMA DOS ATRIBUTOS ===== */

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    /* ===== RESULTADOS ===== */

    printf("\nComparacao entre %s e %s\n\n",pais1,pais2);

    printf("Atributo 1: %.2f vs %.2f\n",valor1_c1,valor1_c2);
    printf("Atributo 2: %.2f vs %.2f\n",valor2_c1,valor2_c2);

    printf("\nSoma %s: %.2f\n",pais1,soma1);
    printf("Soma %s: %.2f\n",pais2,soma2);

    /* ===== VENCEDOR (operador ternario) ===== */

    printf("\nResultado: ");

    soma1 > soma2 ? printf("%s venceu!\n",pais1) :
    soma2 > soma1 ? printf("%s venceu!\n",pais2) :
    printf("Empate!\n");

    return 0;
}