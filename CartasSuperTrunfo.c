#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[3], codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis da carta 2
    char estado2[3], codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Cadastro das cartas
    printf("Digite os dados da carta 1:\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    printf("\nDigite os dados da carta 2:\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Primeiro atributo
    int escolha1;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
    printf("Opcao: "); scanf("%d", &escolha1);

    // Segundo atributo (exclui o primeiro)
    int escolha2;
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for(int i = 1; i <= 6; i++) {
        if(i != escolha1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Opcao: "); scanf("%d", &escolha2);

    // Arrays para facilitar comparação
    float valores1[6] = {populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1};
    float valores2[6] = {populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2};
    char nomesAtributos[6][30] = {"Populacao","Area","PIB","Pontos Turisticos","Densidade Demografica","PIB per Capita"};

    // Comparações individuais
    float soma1 = 0, soma2 = 0;
    for(int i = 0; i < 2; i++) {
        int escolha = (i == 0) ? escolha1-1 : escolha2-1; // ajustar índice
        float v1 = valores1[escolha];
        float v2 = valores2[escolha];
        printf("\nComparacao do atributo %s:\n", nomesAtributos[escolha]);
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, v1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, v2);

        if(escolha == 4) { // densidade: menor vence
            if(v1 < v2) { printf("Carta 1 venceu!\n"); soma1 += 1; }
            else if(v2 < v1) { printf("Carta 2 venceu!\n"); soma2 += 1; }
            else printf("Empate!\n");
        } else { // outros atributos: maior vence
            if(v1 > v2) { printf("Carta 1 venceu!\n"); soma1 += 1; }
            else if(v2 > v1) { printf("Carta 2 venceu!\n"); soma2 += 1; }
            else printf("Empate!\n");
        }
    }

    // Determinar vencedora final
    printf("\nResultado final:\n");
    printf("Soma dos atributos - Carta 1: %.2f\n", soma1);
    printf("Soma dos atributos - Carta 2: %.2f\n", soma2);

    if(soma1 > soma2) printf("Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    else if(soma2 > soma1) printf("Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    else printf("Empate na rodada!\n");

    return 0;
}


