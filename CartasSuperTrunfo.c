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
    float densidadeP;
    float PIBpercapita;
    
    //CARTA B

    char cartaB[50];
    char carta2[50];
    char municipio[50];
    int habitantes;
    float terreno;
    float produtointernobruto;
    float pontos;
    float Dpopulacional;
    float PPC;

    //CARTA A - LEITURA DE INFORMAÇÕES

    printf("Digite o estado:\n");
    scanf("%s",cartaA);
    
    printf("Digite a cidade:\n");
    scanf("%s", cidade);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao);

    printf("Digite a area demarcada:\n");
    scanf("%f", &area);

    printf("Densidade populacional: %.2f\n", densidadeP = populacao / area);
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("PIB Per Capita: %.2f\n", PIBpercapita = PIB / populacao);
    
    printf("Digite os pontos de turismo:\n");
    scanf("%f", &turismo);

    printf("Digite o código da carta:\n");
    scanf("%s", carta1);

    printf("-------------------------------------");
    

    //SAIDA DAS INFORMAÇÕES DA CARTA A

    printf("\nEstado: %s \n Cidade: %s \n Habitantes: %d \n Area: %f \n Densidade Populacional: %.2f \n PIB: %f \n PIB Per Capita: %.2f \n Pontos de turismo: %f \n Numero da Carta: \n %s", cartaA, cidade, populacao, area, densidadeP, PIB, PIBpercapita, turismo, carta1);

    
    printf("\n--------------------\n--------------------\n");

    
    //CARTA B - LEITURA DE INFORMAÇÕES

    printf("Digite o estado:\n");
    scanf("%s", cartaB);

    printf("Digite a cidade:\n");
    scanf("%s", municipio);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes);

    printf("Digite a area demarcada:\n");
    scanf("%f", &terreno);

    printf("Densidade populacional: %.2f\n", Dpopulacional = habitantes / terreno);

    printf("Digite o PIB:\n");
    scanf("%f", &produtointernobruto);

    printf("PIB Per Capita: %.2f\n", PPC = produtointernobruto / habitantes);

    printf("Digite os pontos de turismo:\n");
    scanf("%f", &pontos);

    printf("Digite o código da carta:\n");
    scanf("%s", carta2);

    printf("------------------------------");
    
    //SAÍDA DAS INFORMAÇÕES DA CARTA B

    printf("\n Estado: %s \n Cidade: %s \n Habitantes: %d \n Area: %f Area Demarcada: %.2f \n PIB: %f \n PIB Per Capita: %.2f \n Número de turismo: %f \n Numero da Carta: %s \n", cartaB, municipio, habitantes, terreno, Dpopulacional, produtointernobruto, PPC, pontos, carta2);

    

    printf("\n--------------------\n--------------------\n");

    return 0;
}