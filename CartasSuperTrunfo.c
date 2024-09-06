#include <stdio.h>

int main() {

    //Declaração das variáveis para armazenar os dados

        char carta1[3]; //Código das cartas
        char carta2[3];

        char cidade1[30]; //Nome das cidades
        char cidade2[30];

        unsigned int populacao1; //População
        unsigned int populacao2;

        float densidade1; //Densidade populacional
        float densidade2;

        float area1; //Área por km2
        float area2;

        float PIB1; //PIBs
        float PIB2;

        float capita1; //PIB per capita
        float capita2; 

        int turismo1; //Pontos turísticos
        int turismo2;

           
    //Coleta de dados da carta 1 
   
    printf("***** Super Trunfo - Países *****\n");

    printf("** Carta 1 ** \n");
    
    printf("Insira o código da carta (código do Estado de A a H + número da cidade de 01 a 04):\n");
    scanf("%s", &carta1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Insira a quantidade de habitantes:\n");
    scanf("%u", &populacao1);

    printf("Insira a área em km2:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB1);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo1);

    //Cálculo de PIB per capita e densidade populacional
    densidade1 = populacao1/area1;
    capita1 = PIB1/populacao1;

    //Exibição dos dados da carta 1
  
    printf("*** Carta 1 inserida com sucesso ***\n");
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2u \n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB per capita: %.2f\n", capita1);
    printf("Pontos Turísticos: %d\n", turismo1);

    //Coleta de dados da carta 2 

    printf("** Carta 2 ** \n");

    printf("Insira o código da carta (código do Estado de A a H + número da cidade de 01 a 04):\n");
    scanf("%s", &carta2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Insira a quantidade de habitantes:\n");
    scanf("%u", &populacao2);

    printf("Insira a área em km2:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo2);

    //Cálculo de PIB per capita e densidade populacional
    densidade2 = populacao2/area2;
    capita2 = PIB2/populacao2;

    //Exibição dos dados da carta 2
    printf("*** Carta 2 inserida com sucesso ***\n");
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2u \n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB per capita: %.2f\n", capita2);
    printf("Pontos Turísticos: %d\n", turismo2);

    //Inicio da comparação entre as propriedades das cartas
    printf("*** Comparação entre as cartas ***\n");
             
    //Declaração de variáveis para a comparação
    int totalPopulacao;    
    int totalArea;   
    int totalDensidade;
    int totalPIB;
    int totalCapita;    
    int totalTurismo;
    float totalCarta1; //Total das propriedades da carta 1
    float totalCarta2; // Total das propriedades da carta 2
    int totalCartaVencedora; // Determina a carta vencedora pela soma das propriedades

    //Comparação das propriedades utilizando operadores racionais
    totalPopulacao = (populacao2 > populacao1); //Verifica se a população da carta 2 é maior que a carta 1
    totalPopulacao = totalPopulacao+1; //Adiciona 1 para indicar qual é a carta vencedora

    printf("Propriedade - População: A carta vencedora é a carta de número: %d \n", totalPopulacao);

    totalArea = (area2 > area1);//Verifica se a área da carta 2 é maior que a carta 1
    totalArea = totalArea+1; //Adiciona 1 para indicar qual é a carta vencedora

    printf("Propriedade - Área: A carta vencedora é a carta de número: %d \n", totalArea);

    totalDensidade = (densidade2 < densidade1); //Verifica se a área da carta 2 é menor que a carta 1
    totalDensidade = totalDensidade+1;//Adiciona 1 para indicar qual é a carta vencedora

    printf("Propriedade - Densidade Populacional: A carta vencedora é a carta de número: %d \n", totalDensidade);

    totalPIB = (PIB2 > PIB1);//Verifica se o PIB da carta 2 é maior que a carta 1
    totalPIB = totalPIB+1;//Adiciona 1 para indicar qual é a carta vencedora
    
    printf("Propriedade - PIB: A carta vencedora é a carta de número: %d \n", totalPIB);

    totalCapita = (capita2 > capita1); //Verifica se o PIB per capita da carta 2 é maior que a carta 1
    totalCapita = totalCapita+1;//Adiciona 1 para indicar qual é a carta vencedora
    
    printf("Propriedade - PIB per capita: A carta vencedora é a carta de número: %d \n", totalCapita);

    totalTurismo = (turismo2 > turismo1);//Verifica se os pontos turísticos da carta 2 é maior que a carta 1
    totalTurismo = totalTurismo+1;//Adiciona 1 para indicar qual é a carta vencedora

    printf("Propriedade - Turismo: A carta vencedora é a carta de número: %d \n", totalArea);
  
   //Cálculo da soma das propriedades (exceto densidade populacional)
    totalCarta1 = populacao1 + area1 + PIB1 + capita1 + turismo1; 
    totalCarta2 = populacao2 + area2 + PIB2 + capita2 + turismo2;

    //Determinação da carta vencedora com base na soma das propriedades
    totalCartaVencedora = (totalCarta2 > totalCarta1);
    totalCartaVencedora = totalCartaVencedora+1; // Adiciona 1 para indicar a carta vencedora

    printf("Soma de todas as propriedades: a carta vencedora é a carta de número: ** %d **\n", totalCartaVencedora);

             
   return 0;
}