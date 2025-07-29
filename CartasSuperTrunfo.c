#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Variáveis da carta 1
    
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da carta 2

    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada de dados da carta 1 

    printf("Digite os dados da carta 1: \n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numeros de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2

    printf("\nDigite os dados da carta 2: \n");
    printf("Estado: ");
    scanf("%s", &estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numeros de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da carta 1

    //Operacao divisao Densidade Populacional
    densidade1 = populacao1 / area1;

     //Operacao divisao PIB per Capita
    pibPerCapita1 = (pib1 * 100000) / populacao1;

    printf("\nCarta 1:\n");
    printf("\nEstado: %c\n", estado1);
    printf("\nCodigo: %s\n", codigo1);
    printf("\nNome da cidade: %s\n", nomeCidade1);
    printf("\nPopulacao: %d\n", populacao1);
    printf("\nArea: %.2f km^2\n", area1);
    printf("\nPIB: %.2f bilhoes de reais\n", pib1);
    printf("\nNumero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\nDensidade Polulacional: %.2f hab/km^2\n", densidade1);
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da carta 2

    //Operacao divisao Densidade Populacional
    densidade2 = populacao2 / area2;

    //Operacao divisao PIB per Capita
    pibPerCapita2 = (pib2 * 100000) / populacao2;

    printf("\nCarta 2:\n");
    printf("\nEstado: %c\n", estado2);
    printf("\nCodigo: %s\n", codigo2);
    printf("\nNome da Cidade: %s\n", nomeCidade2);
    printf("\nPopulacao: %d\n", populacao2);
    printf("\nArea: %.2f km^2\n", area2);
    printf("\nPIB: %.2f bilhoes de reais\n", pib2);
    printf("\nNumero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("\nDensidade Polulacional: %.2f hab/km^2\n", densidade2);
    printf("\nPIB per Capita: %.2f reais\n", pibPerCapita2);

    

}