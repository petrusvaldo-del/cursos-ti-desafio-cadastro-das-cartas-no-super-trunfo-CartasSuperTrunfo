#include <stdio.h>

int main(){

    //CARTA A

    char cartaA[50];
    char carta1[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    float turismo;

    //CARTA B

    char cartaB[50];
    char carta2[50];
    char municipio[50];
    int habitantes;
    float terreno;
    float produtointernobruto;
    float pontos;

    //CARTA A - LEITURA DE INFORMAÇÕES

    printf("digite o estado:\n");
    scanf("%s", cartaA);

    printf("digite a carta:\n");
    scanf("%s", carta1);

    printf("digite a cidade:\n");
    scanf("%s", cidade);
    

    printf("digite o número de habitantes:\n");
    scanf("%d", &populacao);

    printf("digite a área demarcada:\n");
    scanf("%f", &area);

    printf("digite o PIB:\n");
    scanf("%f", &PIB);
    
    printf("digite os pontos de turismo:\n");
    scanf("%f", &turismo);

    printf("-------------------------------------");
    

    //SAIDA DAS INFORMAÇÕES DA CARTA A

    printf("\nEstado: %s \n Cidade: %s \n Habitantes: %d \n Área: %f \n PIB: %f \n Número de turismo: %f \n Número da Carta: \n %s", cartaA, cidade, populacao, area, PIB, turismo, carta1);
    
    printf("\n--------------------\n--------------------\n");

    
    //CARTA B - LEITURA DE INFORMAÇÕES

    printf("digite o estado:\n");
    scanf("%s", cartaB);

    printf("digite o código da carta:\n");
    scanf("%s", carta2);

    printf("digite a cidade:\n");
    scanf("%s", municipio);

    printf("digite o número de habitantes:\n");
    scanf("%d", &habitantes);

    printf("digite a área demarcada:\n");
    scanf("%f", &terreno);

    printf("digite o PIB:\n");
    scanf("%f", &produtointernobruto);

    printf("digite os pontos de turismo:\n");
    scanf("%f", &pontos);

    printf("------------------------------");
    
    //SAÍDA DAS INFORMAÇÕES DA CARTA B

    printf("\n Estado: %s \n Cidade: %s \n Habitantes: %d \n Área: %f \n PIB: %f \n Número de turismo: %f \n Número da Carta: %s \n", cartaB, municipio, habitantes, terreno, produtointernobruto, pontos, carta2);

    

    printf("\n--------------------\n--------------------\n");

    return 0;
}