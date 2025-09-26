#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: No nível aventureiro, implementação de lógica para calcular e exibir duas novas propriedades para cada cidade: a densidade populacional e o PIB per capita.
// Objetivo: No nível mestre, implementação da lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito
// de "Super Poder".

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_1[3], estado_2[3];
    char codigo_1[5], codigo_2[5];
    char nome_da_cidade_1[20], nome_da_cidade_2[20];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int num_pontos_turisticos_1, num_pontos_turisticos_2;

  // Área para entrada de dados
    printf("Cadastro das Cartas\n");
    printf("Cadastre a Carta 1:\n");

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

    printf("\nCadastre a Carta 2:\n");
    printf("Digite o Estado: \n");
    scanf("%2s", estado_2);

    printf("Digite o Código da Carta: \n");
    scanf("%4s", codigo_2);

    printf("Digite o nome da Cidade: \n");
    scanf("%49s", nome_da_cidade_2);

    printf("Informe a População: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área em KM2: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos_2);

    float dens_pop_1 = (populacao_1 / area_1), dens_pop_2 = (populacao_2 / area_2); //variáveis do nível aventureiro
    float pib_pc_1 = (pib_1 / populacao_1), pib_pc_2 = (pib_2 / populacao_2); //variáveis do nível aventureiro

    float super_poder_1 = (float) populacao_1 + area_1 + pib_1 + (float) num_pontos_turisticos_1 + (1/dens_pop_1); //variáveis do nível mestre
    float super_poder_2 = (float) populacao_2 + area_2 + pib_2 + (float) num_pontos_turisticos_2 + (1/dens_pop_2); //variáveis do nível mestre

  // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f\n", dens_pop_1); //resultado das variáveis do nível aventureiro
    printf("PIB per Capita: %.2f\n", pib_pc_1); //resultado das variáveis do nível aventureiro
    printf("Super Poder: %.4f\n", super_poder_1); //resultado das variáveis do nível mestre


    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f\n", dens_pop_2); //resultado das variáveis do nível aventureiro
    printf("PIB per Capita: %.2f\n", pib_pc_2); //resultado das variáveis do nível aventureiro
    printf("Super Poder: %.4f\n", super_poder_2); //resultado das variáveis do nível mestre

    int comp_populacao = (populacao_1 > populacao_2);
    int comp_area = (area_1 > area_2);
    int comp_pib = (pib_1 > pib_2);
    int comp_num_pontos_turisticos = (num_pontos_turisticos_1 > num_pontos_turisticos_2);
    int comp_dens_pop = (dens_pop_1 < dens_pop_2); // menor densidade vence
    int comp_pib_pc = (pib_pc_1 > pib_pc_2);
    int comp_super_poder = (super_poder_1 > super_poder_2);

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", comp_populacao);
    printf("Área: %d\n", comp_area);
    printf("PIB: %d\n", comp_pib);
    printf("Números de Pontos Turísticos: %d\n", comp_num_pontos_turisticos);
    printf("Densidade Populacional: %d\n", comp_dens_pop);
    printf("PIB per Capita: %d\n", comp_pib_pc);
    printf("Super Poder: %d\n", comp_super_poder);

return 0;
}
