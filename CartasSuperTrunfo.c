#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta1
 char Estado1 = 'A';
 char Codigo_da_carta1[4] = "A01";
 char Nome_da_cidade1[20];
 int População1;
 float Area_por_km1;
 float PIB1;
 int Pontos_turisticos1;

  //Carta2
 char Estado2 = 'A';
 char Codigo_da_carta2[4] = "A02";
 char Nome_da_cidade2[20];
 int População2;
 float Area_por_km2;
 float PIB2;
 int Pontos_turisticos2;
  //Area dos comando
 printf("Insira o nome da primeira cidade do estado A: \n");
 scanf("%s", Nome_da_cidade1);

 printf("Insira a população da primeira cidade do estado A: \n");
 scanf("%d", &População1);

  printf("Insira a área por km² da primeira cidade do estado A: \n");
 scanf("%f", &Area_por_km1);

  printf("Insira o PIB total da primeira cidade do estado A: \n");
  scanf("%f", &PIB1);

   printf("Insira tanto de pontos turísticos da primeira cidade do estado A: \n");
  scanf("%d", &Pontos_turisticos1);

   printf("Insira o nome da segunda cidade do estado A: \n");
   scanf("%s", Nome_da_cidade2);

    printf("Insira a população da segunda cidade do estado A: \n");
  scanf("%d", &População2);
   
   printf("Insira a área por km² da segunda cidade do estado A: \n");
 scanf("%f", &Area_por_km2);

  printf("Insira o PIB total da segunda cidade do estado A: \n");
  scanf("%f", &PIB2);

  printf("Insira tanto de pontos turísticos da segunda cidade do estado A: \n");
  scanf("%d", &Pontos_turisticos2);

  // Área para exibição dos dados da cidade
  
   //Niterói
 printf("Carta 1\n");
 printf("Estado: %c\n", Estado1);
 printf("Código da carta: %s\n", Codigo_da_carta1);
 printf("Nome da Cidade: %s\n", Nome_da_cidade1);
 printf("População: %d de habitantes \n", População1);
 printf("Área por km²: %f\n", Area_por_km1);
 printf("PIB: %f\n", PIB1);
 printf("Pontos Turísticos: %d\n", Pontos_turisticos1);

 printf("\n");

  //São Goonçalo
 printf("Carta 2\n");
 printf("Estado: %c\n", Estado2);
 printf("Código da carta: %s\n", Codigo_da_carta2);
 printf("Nome da Cidade: %s\n", Nome_da_cidade2);
 printf("População: %d de habitantes \n", População2);
 printf("Área por km²: %2.f\n", Area_por_km2);
 printf("PIB: %2.f\n", PIB2);
 printf("Pontos Turísticos: %d\n", Pontos_turisticos2);
 
return 0;
} 
