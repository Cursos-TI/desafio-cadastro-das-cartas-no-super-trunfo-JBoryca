#include <stdio.h>

int main() {

        char estado;
        char carta[3];
        char cidade[20];
        float populacao;
        float densidade;
        float area;
        float PIB;
        float capita; 
        int turismo;
     
   
    printf("*** Super Trunfo - Países ***\n");

    printf("Insira o código do Estado (letra de A a H):\n");
    scanf("%c", &estado);

    printf("Insira o código da carta (código do Estado + número de 01 a 04):\n");
    scanf("%s", &carta);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Insira a quantidade de habitantes:\n");
    scanf("%f", &populacao);

    printf("Insira a área:\n");
    scanf("%f", &area);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo);

    densidade = populacao/area;
    capita = PIB/populacao;
  
    printf("*** Carta inserida com sucesso ***\n");
    printf("Estado: %c\n", estado);
    printf("Cógido da carta: %s \n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB: %.2f\n", PIB);
    printf("PIB per capita: %.2f\n", capita);
    printf("Pontos Turísticos: %d\n", turismo);

    
   return 0;
}