#include <stdio.h>

int main() {

    //Declaração das variáveis

        char estado1;
        char estado2;

        char carta1[3];
        char carta2[3];

        char cidade1[30];
        char cidade2[30];

        unsigned int populacao1;
        unsigned int populacao2;

        float densidade1;
        float densidade2;

        float area1;
        float area2;

        float PIB1;
        float PIB2;

        float capita1; 
        float capita2; 

        int turismo1;
        int turismo2;

        int resultado1, resultado2; 
     

    //Informações para a inserção de dados da carta 1 pelo usuário
   
    printf("***** Super Trunfo - Países *****\n");

    printf("** Carta 01 ** \n");

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

    densidade1 = populacao1/area1;
    capita1 = PIB1/populacao1;

    //Imprimi 
  
    printf("*** Carta 01 inserida com sucesso ***\n");
    printf("Estado: %c\n", estado1);
    printf("Cógido da carta: %s \n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2u \n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB per capita: %.2f\n", capita1);
    printf("Pontos Turísticos: %d\n", turismo1);

    //Imprimi as informações para a inserção de dados da carta 2 pelo usuário d

    printf("** Carta 02 ** \n");


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

    densidade2 = populacao2/area2;
    capita2 = PIB2/populacao2;
  
    printf("*** Carta 02 inserida com sucesso ***\n");
    printf("Estado: %c\n", estado2);
    printf("Cógido da carta: %s \n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2u \n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB per capita: %.2f\n", capita2);
    printf("Pontos Turísticos: %d\n", turismo2);

    printf("*** Comparando as cartas inseridas ***");

    

    
   return 0;
}