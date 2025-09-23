#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_1[3];
    char codigo_1[5];
    char nome_da_cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_turisticos_1;

    char estado_2[3];
    char codigo_2[5];
    char nome_da_cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_turisticos_2;


  // Área para entrada de dados
    printf("Bem-vindo ao Jogo Super Trunfo")
    printf("Cadastro das Cartas\n");

    printf("Digite o Estado: \n");
    scanf("%2s", estado_1);

    printf("Digite o Código da Carta: \n");
    scanf("%4s", codigo_1);

    printf("Digite o nome da Cidade: \n");
    scanf("%49s", nome_da_cidade_1);

    printf("Informe a População: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área em KM2: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos_1);

  // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_1);
return 0;
} 
