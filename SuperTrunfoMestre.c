#include <stdio.h>

int main() {

  char estado[20], estado2[20];
  char codigo[20], codigo2[20];
  char nome[20], nome2[20];
  int populaçao , populaçao2;
  float area , area2;
  float pib , pib2;
  int pontos , pontos2;
  float densidade , densidade2;
  float capita , capita2;
  float pibc , pibc2;
  float superpoder , superpoder2;
  int resultadopopu; 
  int resultadopontos;
  int resultadoarea; 
  int resultadopib;
  int resultadodens; 
  int resultadocap;
  int resultadopoder;
  
  printf("Digite o nome de um estado: ");
  scanf("%s", &estado);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo);
  printf("Digite o nome de uma cidade nesse estado: ");
  scanf("%s", &nome);
  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populaçao);
  printf("Digite a área por km2 da cidade: ");
  scanf("%f", &area);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos);

  printf("Digite o nome de um estado: ");
  scanf("%s", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo2);
  printf("Digite o nome de uma cidade nesse estado: ");
  scanf("%s", &nome2);
  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populaçao2);
  printf("Digite a área por km2 da cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos2);

  pibc = pib * 1000000000;
  pibc2 = pib2 * 1000000000;

  densidade = (float)populaçao / area;
  densidade2 = (float)populaçao2 / area2;
  capita = pibc / (float)populaçao;
  capita2 = pibc2 / (float)populaçao2;

  superpoder = populaçao + area + pib + pontos + capita + (1 / densidade);
  superpoder2 = populaçao2 + area2 + pib2 + pontos2 + capita2 + (1 / densidade2);

  resultadoarea = area > area2;
  resultadocap = capita > capita2;
  resultadodens = densidade < densidade2;
  resultadopib = pib > pib2;
  resultadopontos = pontos > pontos2;
  resultadopopu = populaçao > populaçao2;
  resultadopoder = superpoder > superpoder2;

  printf("\n Carta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Codigo da Carta: %s \n", codigo);
  printf("Nome da Cidade: %s \n", nome);
  printf("População: %d \n", populaçao);
  printf("Área: %.2f km² \n", area);
  printf("PIB: %.2f bilhões de reais \n", pib);
  printf("Número de Pontos Turisticos: %d \n", pontos);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade);
  printf("PIB per Capita: %.2f reais \n", capita);
  printf("Super Poder: %.2f \n", superpoder);
  
  printf("\n Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Codigo da Carta: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nome2);
  printf("População: %d \n", populaçao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Numero de Pontos Turisticos: %d \n", pontos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", capita2);
  printf("Super Poder: %.2f \n", superpoder2);

  printf("\n Comparação de Cartas: \n");
  printf("1 = Carta 1 vence , 0 = Carta 2 vence \n");
  printf("População: %d \n", resultadopopu);
  printf("Área: %d \n", resultadoarea);
  printf("PIB: %d \n", resultadopib);
  printf("Pontos Turisticos: %d \n", resultadopontos);
  printf("Densidade Populacional: %d \n", resultadodens);
  printf("PIB per Capita: %d \n", resultadocap);
  printf("Super Poder: %d \n", resultadopoder);

   
}
