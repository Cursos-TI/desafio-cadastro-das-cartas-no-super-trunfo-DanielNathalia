#include <stdio.h>

int main() {

    char estado[2], nome_cidade[50], codigo_carta[10];
    int populacao, pontos_turisticos;
    float area, pib;

    char estado_2[2], nome_cidade_2[50], codigo_carta_2[10];
    int populacao_2, pontos_turisticos_2;
    float area_2, pib_2;

    //carta 1
    printf("Digite a inicial do estado (de'A' a 'H')da carta 1:");
    scanf("%s", &estado);

    printf("Digite o código da carta 1 (uma letra seguida de um número de 01 a 04):");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade);

    printf("Digite o numero de habitantes da cidade:");
    scanf("%d" , &populacao);

    printf("Digite a area da cidade (em km²");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%d", &pontos_turisticos);

    //Carta2
    printf("Digite a inicial do estado (de'A' a 'H')da carta 2:");
    scanf("%s", &estado_2);

    printf("Digite o código da carta 2 (uma letra seguida de um número de 01 a 04):");
    scanf("%s", &codigo_carta_2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade_2);

    printf("Digite o numero de habitantes da cidade:");
    scanf("%d" , &populacao_2);

    printf("Digite a area da cidade (em km²");
    scanf("%f", &area_2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%d", &pontos_turisticos_2);

    //Impressão das cartas
    printf("\n Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf(" Código: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n ", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f  \n", pib);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos);

    printf("\n Carta 2: \n");
    printf("Estado: %s \n", estado_2);
    printf(" Código: %s \n", codigo_carta_2);
    printf("Nome da cidade: %s \n ", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %f km² \n", area_2);
    printf("PIB: %f \n", pib_2);
    printf("Número de pontos turísticos: %d", pontos_turisticos_2);



    return 0;

}

