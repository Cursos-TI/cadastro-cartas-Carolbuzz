#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;


  // Área para entrada de dados

  // CARTA 1

    printf("Cadastro da Carta 1\n");
    
    printf("Digite o estado da carta 1 (A a H): \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta 1 (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da carta 1: \n");
    scanf("%d", &pontos1);

    // CARTA 2

    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado da carta 2 (A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta 2 (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da carta 2: \n");
    scanf("%d", &pontos2);



  // Área para exibição dos dados da cidade

  // CARTA 1

    printf("Estado carta 1: %c\n", estado1);
    printf("Codigo carta 1: %s\n", codigo1);
    printf("Cidade carta 1: %s\n", cidade1);
    printf("Populacao carta 1: %d\n", populacao1);
    printf("Area carta 1: %f\n", area1);
    printf("PIB carta 1: %f\n", pib1);
    printf("Pontos turisticos carta 1: %d\n", pontos1);


   // CARTA 2
    
    printf("Estado carta 2: %c\n", estado2);
    printf("Codigo carta 2: %s\n", codigo2);
    printf("Cidade carta 2: %s\n", cidade2);
    printf("Populacao carta 2: %d\n", populacao2);
    printf("Area carta 2: %f\n", area2);
    printf("PIB carta 2: %f\n", pib2);
    printf("Pontos turisticos carta 2: %d\n", pontos2);

return 0;
} 