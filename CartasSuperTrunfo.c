#include <stdio.h>

int main() {
  // Carta 1
  char estado1;
  char codigo1[10];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Carta 2
  char estado2;
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  printf("===Cadastro da carta1===\n");

  printf("Estado(letra): ");
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  printf("\n=== Cadastro da Carta 2 ===\n");

  printf("Estado (letra): ");
  scanf(" %c", &estado2);

  printf("Codigo: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  // Mostrar cartas
  printf("\n=== CARTA 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);

  printf("\n=== CARTA 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);

  int escolha;

  printf("\nEscolha um atributo:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  scanf("%d", &escolha);

  if (escolha == 1) {
    if (populacao1 > populacao2)
      printf("\nVoce venceu!\n");
    else if (populacao1 < populacao2)
      printf("\nComputador venceu!\n");
    else
      printf("\nEmpate!\n");

  } else if (escolha == 2) {
    if (area1 > area2)
      printf("\nVoce venceu!\n");
    else if (area1 < area2)
      printf("\nComputador venceu!\n");
    else
      printf("\nEmpate!\n");

  } else if (escolha == 3) {
    if (pib1 > pib2)
      printf("\nVoce venceu!\n");
    else if (pib1 < pib2)
      printf("\nComputador venceu!\n");
    else
      printf("\nEmpate!\n");

  } else if (escolha == 4) {
    if (pontos1 > pontos2)
      printf("\nVoce venceu!\n");
    else if (pontos1 < pontos2)
      printf("\nComputador venceu!\n");
    else
      printf("\nEmpate!\n");

  } else {
    printf("\nOpcao invalida!\n");
  }

  return 0;
}

