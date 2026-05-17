#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Niterói, carta1
 char Estado1 = 'A';
 char Codigo_da_carta1[3] = "A01";
 char Nome_da_cidade1[20] = "Niteroi";
 int População1 = 516000;
 float Area_por_km1 = 133.757;
 float PIB1 = 66300000000;
 int Pontos_turisticos1 = 5;

  //São Gonçalo
 char Estado2 = 'A';
 char Codigo_da_carta2[3] = "A02";
 char Nome_da_cidade2[20] = "São_Gonçalo";
 int População2 = 960652;
 float Area_por_km2 = 248.159;
 float PIB2 = 20300000000;
 int Pontos_turisticos2 = 7;
  // Área para exibição dos dados da cidade
  //Niterói
 printf("Carta 1\n");
 printf("Estado: %c\n", Estado1);
 printf("Código da carta: %s\n", Codigo_da_carta1);
 printf("Nome da Cidade: %s\n", Nome_da_cidade1);
 printf("População: %d\n", População1);
 printf("Área por km²: %f\n", Area_por_km1);
 printf("PIB: %f\n", PIB1);
 printf("Pontos Turísticos: %d\n", Pontos_turisticos1);

 //São Goonçalo
 printf("Carta 2\n");
 printf("Estado: %c\n", Estado2);
 printf("Código da carta: %s\n", Codigo_da_carta2);
 printf("Nome da Cidade: %s\n", Nome_da_cidade2);
 printf("População: %d\n", População2);
 printf("Área por km²: %f\n", Area_por_km2);
 printf("PIB: %f\n", PIB2);
 printf("Pontos Turísticos: %d\n", Pontos_turisticos2);
 
return 0;
} 
