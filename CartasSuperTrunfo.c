#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta1
 char Estado1 = 'A';
 char Codigo_da_carta1[4] = "A01";
 char Nome_da_cidade1[20];
 unsigned long int População1;
 float Area_por_km1;
 float PIB1;
 int Pontos_turisticos1;

  //Carta2
 char Estado2 = 'A';
 char Codigo_da_carta2[4] = "A02";
 char Nome_da_cidade2[20];
 unsigned long int População2;
 float Area_por_km2;
 float PIB2;
 int Pontos_turisticos2;

  //Area dos comando

 printf("Insira o nome da primeira cidade do estado A: \n");
 scanf("%s", Nome_da_cidade1);

 printf("Insira a população da primeira cidade do estado A: \n");
 scanf("%lu", &População1);

  printf("Insira a área por km² da primeira cidade do estado A: \n");
 scanf("%f", &Area_por_km1);

  printf("Insira o PIB total da primeira cidade do estado A: \n");
  scanf("%f", &PIB1);

   printf("Insira tanto de pontos turísticos da primeira cidade do estado A: \n");
  scanf("%d", &Pontos_turisticos1);

   printf("Insira o nome da segunda cidade do estado A: \n");
   scanf("%s", Nome_da_cidade2);

    printf("Insira a população da segunda cidade do estado A: \n");
  scanf("%lu", &População2);
   
   printf("Insira a área por km² da segunda cidade do estado A: \n");
 scanf("%f", &Area_por_km2);

  printf("Insira o PIB total da segunda cidade do estado A: \n");
  scanf("%f", &PIB2);

  printf("Insira tanto de pontos turísticos da segunda cidade do estado A: \n");
  scanf("%d", &Pontos_turisticos2);

  // Área das conta

  float DensidadePopulacao1 = População1 / Area_por_km1;
  float PIBporCapt1 = PIB1 / População1;

  float DensidadePopulacao2 = População2 / Area_por_km2;
  float PIBporCapt2 = PIB2 / População2;
  
  float SuperPoder1 = ((População1 + Area_por_km1 + PIB1 + Pontos_turisticos1 + PIBporCapt1) / DensidadePopulacao1)/ 6;
  float SuperPoder2 = ((População2 + Area_por_km2 + PIB2 + Pontos_turisticos2 + PIBporCapt2) / DensidadePopulacao2)/ 6;

  // Área para exibição dos dados da cidade
  
   //CIdade 1
 printf("Carta 1\n");
 printf("Estado: %c\n", Estado1);
 printf("Código da carta: %s\n", Codigo_da_carta1);
 printf("Nome da Cidade: %s\n", Nome_da_cidade1);
 printf("População: %lu de habitantes \n", População1);
 printf("Área por km²: %f\n", Area_por_km1);
 printf("PIB: %f\n", PIB1);
 printf("Pontos Turísticos: %d\n", Pontos_turisticos1);
 printf("Densidade Populacional: %f\n", DensidadePopulacao1);
 printf("PIB por capital: %f\n", PIBporCapt1);

 printf("\n");

  //Cidade 2
 printf("Carta 2\n");
 printf("Estado: %c\n", Estado2);
 printf("Código da carta: %s\n", Codigo_da_carta2);
 printf("Nome da Cidade: %s\n", Nome_da_cidade2);
 printf("População: %lu de habitantes \n", População2);
 printf("Área por km²: %2.f\n", Area_por_km2);
 printf("PIB: %2.f\n", PIB2);
 printf("Pontos Turísticos: %d\n", Pontos_turisticos2);
 printf("Densidade Populacional: %f\n", DensidadePopulacao2);
 printf("PIB por capital: %f\n", PIBporCapt2);

 // Comparações

 printf("\n");

  if (População1 > População2) {
    printf("A cidade %s tem mais população que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
  } else if (População1 < População2) {
    printf("A cidade %s tem mais população que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else {
    printf("As cidades %s e %s têm a mesma população\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

 printf("\n");


   if (Area_por_km1 > Area_por_km2) {
    printf("A cidade %s tem uma área por km² maior que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
  } else if (Area_por_km1 < Area_por_km2) {
    printf("A cidade %s tem uma área por km² maior que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else {
    printf("As cidades %s e %s têm a mesma área por km²\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

printf("\n");

   if (PIB1 > PIB2) {
    printf("A cidade %s tem um PIB maior que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
  } else if (PIB1 < PIB2) {
    printf("A cidade %s tem um PIB maior que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else {
    printf("As cidades %s e %s têm o mesmo PIB\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

printf("\n");

   if (Pontos_turisticos1 > Pontos_turisticos2) {
    printf("A cidade %s tem mais pontos turísticos que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
  } else if (Pontos_turisticos1 < Pontos_turisticos2) {
    printf("A cidade %s tem mais pontos turísticos que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else {
    printf("As cidades %s e %s têm o mesmo número de pontos turísticos\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

printf("\n");

    if (DensidadePopulacao1 > DensidadePopulacao2) {
    printf("A cidade %s tem mais densidade populacional que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else if (DensidadePopulacao1 < DensidadePopulacao2) {
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
    printf("A cidade %s tem mais densidade populacional que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
  } else {
    printf("As cidades %s e %s têm a mesma densidade populacional\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

  printf("\n");

  if (PIBporCapt1 > PIBporCapt2) {
    printf("A cidade %s tem um PIB por capital maior que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
  } else if (PIBporCapt1 < PIBporCapt2) {
    printf("A cidade %s tem um PIB por capital maior que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else {
    printf("As cidades %s e %s têm o mesmo PIB por capital\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

printf("\n");

  if (SuperPoder1 > SuperPoder2) {
    printf("A cidade %s tem mais \"superpoderes\" que a cidade %s\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("A cidade %s Ganhou\n", Nome_da_cidade1);
  } else if (SuperPoder1 < SuperPoder2) {
    printf("A cidade %s tem mais \"superpoderes\" que a cidade %s\n", Nome_da_cidade2, Nome_da_cidade1);
    printf("A cidade %s Ganhou\n", Nome_da_cidade2);
  } else {
    printf("As cidades %s e %s têm o mesmo número de \"superpoderes\"\n", Nome_da_cidade1, Nome_da_cidade2);
    printf("Empate\n");
  }

  return 0;
} 
