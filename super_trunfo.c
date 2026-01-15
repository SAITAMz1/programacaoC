#include <stdio.h>

int main()
{

    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    char estado1, estado2;
    char codigo1[30], codigo2[30]; 
    char nome1[50], nome2[50];
    float area1, area2;
    float pib1, pib2;
    
    printf("---Vamos Jogar Super Trunfo--- \n");
    
    // --- CADASTRO DA CARTA 1 ---
    
    printf("\n Cadastre a 1a Carta. \n");
    
    printf("\n Escolha um estado de 'A' a 'H':\n");
    scanf(" %c", &estado1); 
    
    printf("\n Escolha um codigo para sua carta. (Exemplo: A01): \n" );
    scanf("%s", codigo1); 
    
    printf("\n Informe o numero de habitantes da sua cidade: \n");
    scanf("%d", &populacao1);
    
    printf("\n Informe a area da sua cidade em KM2: \n");
    scanf("%f", &area1);
    
    printf("\n Informe o PIB da sua cidade: \n");
    scanf("%f", &pib1);
    
    printf("\n Informe a quantidade de pontos turisticos de sua cidade: \n");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n Escolha um nome para sua cidade (sem espacos): \n");
    scanf("%s", nome1); 
    
    
    // --- CADASTRO DA CARTA 2 ---
    
    printf("\n Cadastre a 2a Carta. \n");
    
    printf("\n Escolha um estado de 'A' a 'H':\n");
    scanf(" %c", &estado2); 
    
    printf("\n Escolha um codigo para sua carta. (Exemplo: A01): \n" );
    scanf("%s", codigo2); 
    
    printf("\n Informe o numero de habitantes da sua cidade: \n");
    scanf("%d", &populacao2);
    
    printf("\n Informe a area da sua cidade em KM2: \n");
    scanf("%f", &area2);
    
    printf("\n Informe o PIB da sua cidade: \n");
    scanf("%f", &pib2);
    
    printf("\n Informe a quantidade de pontos turisticos de sua cidade: \n");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n Escolha um nome para sua cidade (sem espacos): \n");
    scanf("%s", nome2); 
    
    
    // --- EXIBIÇÃO DOS DADOS ---
    
    printf("\n ---SUAS CARTAS SAO:--- \n");
    
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome: %s \n", nome1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km2 \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km2 \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);

    return 0;
}
    
  
  