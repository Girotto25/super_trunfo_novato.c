#include <stdio.h>

    int main() {

        //variaveis da primeira carta

        char estado1[100]; //uma letra de a ate h
        char carta1[100]; //código da carta 
        char cidade1[100];
        float populacao1;
        float area1; //em km2
        float pib1;
        int pturisticos1; //pontos turisticos

        //variaveis da segunda carta

        char estado2[100]; //uma letra de a ate h
        char carta2[100]; //código da carta 
        char cidade2[100];
        float populacao2;
        float area2; //em km2
        float pib2;
        int pturisticos2; //pontos turistico


    printf("Seja bem vindo ao cadastro de cartas, comece escolhendo uma letra de A a H para representar um estado: \n");
    scanf(" %s", estado1);
    
    printf("Agora você precisa escolhe um número para ser o Código da sua carta, pode ser qualquer número de 01 a 100, digite a letra que você escolheu para representar seu estado junto com o número para ser o código da sua carta ex: A01, B32, C344: \n");
    scanf(" %s", carta1);

    printf("Digite um nome para a cidade, pode ser uma cidade real ou fictícia :  \n");
    scanf(" %[^\n]", cidade1); 

    printf("Ta na hora de povoar sua cidade, digite quantos habitantes tem na cidade que você está criou ou escolheu:  \n");
    scanf(" %f", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite também quantos pontos turisticos a cidade vai tee: \n");
    scanf(" %d", &pturisticos1);

    printf("\n");
    printf("Otimo a sua primeira carta ficou dessa maneira : \n ");
    printf("\n");
    printf("Letra que representa o estado:%s\n", estado1);
    printf("O código da carta: %s\n", carta1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%.3f\n",populacao1);
    printf("Área da cidade: %.3f\n", area1);
    printf("O PIB: %f\n", pib1);
    printf("E os pontos turisticos: %d\n", pturisticos1);

    printf("\n");
    printf("Agora precisamos de mais uma carta no mesmo estilo, novamente começamos com uma letra de A a H: \n");
    scanf(" %s", estado2);
    
    printf("Agora você precisa escolhe um número para ser o Código da sua carta, pode ser qualquer número de 01 a 100, digite a letra que você escolheu para representar seu estado junto com o número para ser o código da sua carta ex: A01, B32, C344: \n");
    scanf(" %s", carta2);

    printf("Digite um nome para a cidade, pode ser uma cidade real ou fictícia :  \n");
    scanf(" %[^\n]", cidade2); 

    printf("Ta na hora de povoar sua cidade, digite quantos habitantes tem na cidade que você está criou ou escolheu:  \n");
    scanf(" %f", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);
    getchar();

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite também quantos pontos turisticos a cidade vai tee: \n");
    scanf(" %d", &pturisticos2);

    float densidadepopulacional1, pibpercapita1,densidadepopulacional2,pibpercapita2;
    densidadepopulacional1 =  (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;

     densidadepopulacional2 =  (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
    
    printf("\n");
    printf("Suas duas cartas ficaram assim: \n ");
    printf("\n");
    printf("Carta 1: \n");
    printf("\n");
    printf("Letra que representa o estado:%s\n", estado1);
    printf("O código da carta: %s\n", carta1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%.2f\n",populacao1);
    printf("Área da cidade: %.2f Km²\n", area1);
    printf("O PIB: %f\n", pib1);
    printf("E os pontos turisticos: %d\n", pturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita:  %.2f Reais\n", pibpercapita1);

    printf("\n");
    printf("Carta 2: \n");
    printf("\n");
    printf("Letra que representa o estado:%s\n", estado2);
    printf("O código da carta: %s\n", carta2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%.3f\n",populacao2);
    printf("Área da cidade: %.3f\n", area2);
    printf("O PIB: %f\n", pib2);
    printf("E os pontos turisticos: %d\n", pturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita:  %.2f Reais\n", pibpercapita2);

    return 0;

    
    }
