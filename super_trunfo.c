#include <stdio.h>

int main(){
  // 1) Declarar as variáveis

  // Carta 1
  char nomeCidade[50], estado, codigoCarta[4];
  int numPontosTuristicos;
  unsigned long int numHabitantes;
  float area, pib;

  // Carta 2
  char nomeCidade2[50], estado2, codigoCarta2[4];
  int numPontosTuristicos2;
  unsigned long int numHabitantes2;
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
  scanf("%lu", &numHabitantes);

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
  scanf("%lu", &numHabitantes2);

  printf("Digite a área em quilômetros quadrados (ex.: 12.585):\n");
  scanf("%f", &area2);

  printf("Digite o PIB (Produto Interno Bruto) da cidade (ex.: 1.02):\n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade (ex.: 27):\n");
  scanf("%d", &numPontosTuristicos2);

  // 4) Calcular a densidade populacional (população da cidade dividida pela área) e PIB per capita (PIB da cidade dividido pela população)
  float densidadePop, densidadePop2, pibPerCapita, pibPerCapita2;

  densidadePop = (float)numHabitantes/area;
  densidadePop2 = (float)numHabitantes2/area2;

  pibPerCapita = (pib * 1000000000)/(float)numHabitantes;
  pibPerCapita2 = (pib2 * 1000000000)/(float)numHabitantes2;

  // 5) Calcular o super poder de cada carta
  float superPoder, superPoder2;

  superPoder = (float)numHabitantes + area + pib + (float)numPontosTuristicos + pibPerCapita + (-densidadePop);
  superPoder2 = (float)numHabitantes2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapita2 + (-densidadePop2);

  // 6) Comparar as cartas
  int comparaNumHabitantes, comparaArea, comparaPib, comparaNumPontosTuristicos, comparaDensidadePop, comparaPibPerCapita, comparaSuperPoder;
  
  comparaNumHabitantes = numHabitantes > numHabitantes2;
  comparaArea = area > area2;
  comparaPib = pib > pib2;
  comparaNumPontosTuristicos = numPontosTuristicos > numPontosTuristicos2;
  comparaDensidadePop = densidadePop < densidadePop2;
  comparaPibPerCapita = pibPerCapita > pibPerCapita2;
  comparaSuperPoder = superPoder > superPoder2;

  // 7) Permitir que o usuário escolha um atributo para comparar
  int opcao;

  printf("Escolha o atributo a ser comparado:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de pontos turísticos\n");
  printf("5 - Densidade demográfica\n");
  scanf("%d", &opcao);

  // 8) Exibir o resultado da comparação do atributo escolhido pelo usuário
  switch(opcao){
    case 1:
    printf("Comparando população: %s vs. %s\n", nomeCidade, nomeCidade2);
    printf("%s: %lu habitantes e %s: %lu habitantes\n", nomeCidade, numHabitantes, nomeCidade2, numHabitantes2);

    if(comparaNumHabitantes) {
      printf("%s venceu!\n", nomeCidade);
    } else {
      printf("%s venceu!\n", nomeCidade2);
    }
    break;

    case 2:
    printf("Comparando área: %s vs. %s\n", nomeCidade, nomeCidade2);
    printf("%s: %fkm² e %s: %fkm²\n", nomeCidade, area, nomeCidade2, area2);

    if(comparaArea) {
      printf("%s venceu!\n", nomeCidade);
    } else {
      printf("%s venceu!\n", nomeCidade2);
    }
    break;

    case 3:
    printf("Comparando PIB: %s vs. %s\n", nomeCidade, nomeCidade2);
    printf("%s: %f bilhões de reais e %s: %f bilhões de reais\n", nomeCidade, pib, nomeCidade2, pib2);

    if(comparaPib) {
      printf("%s venceu!\n", nomeCidade);
    } else {
      printf("%s venceu!\n", nomeCidade2);
    }
    break;

    case 4:
    printf("Comparando número de pontos turísticos: %s vs. %s\n", nomeCidade, nomeCidade2);
    printf("%s: %d e %s: %d\n", nomeCidade, numPontosTuristicos, nomeCidade2, numPontosTuristicos2);

    if(comparaNumPontosTuristicos) {
      printf("%s venceu!\n", nomeCidade);
    } else {
      printf("%s venceu!\n", nomeCidade2);
    }
    break;

    case 5:
    printf("Comparando densidade demográfica: %s vs. %s\n", nomeCidade, nomeCidade2);
    printf("%s: %f e %s: %f\n", nomeCidade, densidadePop, nomeCidade2, densidadePop2);

    if(comparaDensidadePop) {
      printf("%s venceu!\n", nomeCidade2);
    } else {
      printf("%s venceu!\n", nomeCidade);
    }
    break;

    default:
      printf("Opção inválida, tente novamente inserindo um número de 1 a 5.\n");
  }

  // 9) Exibir os dados das cartas 1 e 2, respectivamente
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %lu\n", numHabitantes);
  printf("Área: %.3f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePop);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita);
  printf("Super Poder: %.2f\n", superPoder);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", numHabitantes2);
  printf("Área: %.3f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidadePop2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  return 0;
}