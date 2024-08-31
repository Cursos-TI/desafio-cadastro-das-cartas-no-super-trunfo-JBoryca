#include <stdio.h>

int main() {

        // Declara variáveis para armazenar os dados inseridos pelo usuário
        char carta[3];
        float populacao;
        float area;
        float PIB;
        int turismo;
     
    // Solicita ao usuário que insira as informações para variáveis
    printf("Super Trunfo - Países\nInsira o código da cidade:\n");
    scanf("%s", &carta);

    printf("Insira a população:\n");
    scanf("%f", &populacao);

    printf("Insira a área:\n");
    scanf("%f", &area);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo);

    //Exibe os dados inseridos pelo usuário
    printf("Super Trunfo\nCógido da cidade: %s \n", carta);
    printf("População: %.f \n", populacao);
    printf("Área: %.f \n", area);
    printf("PIB: %.f\n", PIB);
    printf("Pontos Turísticos: %d \n", turismo);

    
   return 0; //Finaliza o programa
}
