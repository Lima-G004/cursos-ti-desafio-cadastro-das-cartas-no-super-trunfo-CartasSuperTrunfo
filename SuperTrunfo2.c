#include <stdio.h>

int main() {
   
    /*CADASTRO DA CARTA 1*/

    char estado[50];
    char codigo_da_carta[15];
    char nome_da_cidade[40];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; 
    float densidade;  // Declarando a variável sem valor inicial
    float pib_per_capita;  // Declarando a variável sem valor inicial

    // DADOS CARTA 1
    printf("Digite o Estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", nome_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Calculando a densidade populacional e o PIB per capita
    densidade = (float)populacao / area;  // Cast para garantir que a divisão seja feita corretamente
    pib_per_capita = pib / populacao;

    printf("São Paulo: %s\n", estado);
    printf("B3: %s\n", codigo_da_carta);
    printf("Francisco Morato: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_per_capita);

    /*CADASTRO DA CARTA 2*/
 
    char estado2[30];
    char codigo_da_carta2[15];
    char nome_da_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;  // Declarando a variável sem valor inicial
    float pib_per_capita2;  // Declarando a variável sem valor inicial

    // DADOS CARTA 2
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Calculando a densidade populacional e o PIB per capita
    densidade2 = (float)populacao2 / area2;  // Cast para garantir que a divisão seja feita corretamente
    pib_per_capita2 = pib2 / populacao2;

    printf("Rio de Janeiro: %s\n", estado2);
    printf("C4: %s\n", codigo_da_carta2);
    printf("Angra dos Reis: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}
