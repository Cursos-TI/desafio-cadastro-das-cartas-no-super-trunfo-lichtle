#include <stdio.h>

int main(){
  // 1) Declarar as variáveis

  // Carta 1
  char nomeCidade[50], estado, codigoCarta[4];
  int numHabitantes, numPontosTuristicos;
  float area, pib;

  // Carta 2
  char nomeCidade2[50], estado2, codigoCarta2[4];
  int numHabitantes2, numPontosTuristicos2;
  float area2, pib2;

  // 2) Solicitar input do usuário para a carta 1
  printf("Inserindo os dados da carta 1...\n");

  printf("Digite o nome da cidade (ex.: Fortaleza):\n");
  scanf("%s", nomeCidade);

  printf("Digite uma letra de A à H para representar o estado (ex.: B):\n");
  scanf(" %c", &estado);

  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: B03):\n");
  scanf("%s", codigoCarta);

  printf("Digite o número de habitantes da cidade (ex.: 125555):\n");
  scanf("%d", &numHabitantes);

  printf("Digite a área em quilômetros quadrados (ex.: 125.555):\n");
  scanf("%f", &area);

  printf("Digite o PIB (Produto Interno Bruto) da cidade (ex.: 1.25):\n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos da cidade (ex.: 38):\n");
  scanf("%d", &numPontosTuristicos);  

  // 3) Solicitar input do usuário para a carta 2
  printf("Inserindo os dados da carta 2...\n");

  printf("Digite o nome da cidade (ex.: Patos):\n");
  scanf("%s", nomeCidade2);

  printf("Digite uma letra de A à H para representar o estado (ex.: D):\n");
  scanf(" %c", &estado2);

  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: D02):\n");
  scanf("%s", codigoCarta2);

  printf("Digite o número de habitantes da cidade (ex.: 48500):\n");
  scanf("%d", &numHabitantes2);

  printf("Digite a área em quilômetros quadrados (ex.: 12.585):\n");
  scanf("%f", &area2);

  printf("Digite o PIB (Produto Interno Bruto) da cidade (ex.: 1.02):\n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade (ex.: 27):\n");
  scanf("%d", &numPontosTuristicos2);

  // 4) Calcular a densidade populacional (população da cidade dividida pela área) e PIB per capita (PIB da cidade dividido pela população)
  float densidadePop, densidadePop2;
  float pibPerCapita, pibPerCapita2;

  densidadePop = numHabitantes/area;
  densidadePop2 = numHabitantes2/area2;

  pibPerCapita = (pib * 1000000000)/numHabitantes;
  pibPerCapita2 = (pib2 * 1000000000)/numHabitantes2;

  // 5) Exibir os dados das cartas 1 e 2, respectivamente
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %d\n", numHabitantes);
  printf("Área: %.3f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePop);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %d\n", numHabitantes2);
  printf("Área: %.3f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePop2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  return 0;
}