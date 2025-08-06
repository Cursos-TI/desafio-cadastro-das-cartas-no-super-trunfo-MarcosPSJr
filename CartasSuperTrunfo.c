#include <stdio.h>

// Desafio Super Trunfo - Países
int main() {  

    //Declarando as variáveis
    char estado1[100],estado2[100];
    char cidade1[100],cidade2[100];
    float populacao1,populacao2;
    float area1,area2,densidade_populacional1,densidade_populacional2;
    float pib1,pib2;
    float pibpercapita1,pibpercapita2;
    int pontos_turisticos1,pontos_turisticos2;
    char codigo1[10],codigo2[10];
    
    

    printf("Bem vindo ao Super Trunfo - Países!\n\n");

    printf("Cadastro das Cartas\n\n"); //Cadastrando as cartas

    printf("Cadastro da primeira carta\n\n"); //Cadastrando a primeira carta


    printf("Digite o estado: ");
    scanf("%s",estado1);

    printf("Digite a cidade: ");
    scanf("%s",cidade1);

    printf("Digite a população total da cidade: ");
    scanf("%f",populacao1);

    printf("Digite a área total da cidade: ");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f",pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d",&pontos_turisticos1);

    printf("Digite o código da cidade (Ex:A01): ");
    scanf("%s",codigo1);

    printf("Primeira carta cadastrada!\n\n"); //informe de primeira carta cadastrada

    printf("Cadastro da Segunda Carta\n\n");  //cadastrando a segunda carta


    printf("Digite o estado: ");
    scanf("%s",estado2);

    printf("Digite a cidade: ");
    scanf("%s",cidade2);

    printf("Digite a população total da cidade: ");
    scanf("%f",populacao2);

    printf("Digite a área total da cidade: ");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f",pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d",&pontos_turisticos2);

    printf("Digite o código da cidade (Ex:A01): ");
    scanf("%s",codigo2);

    printf("Segunda carta cadastrada!\n\n"); //informe de segunda carta cadastrada

    //Operações para calcular a densidade populacional e o PIB per capita
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    //imprime na tela as duas cartas cadastradas, contendo a saída de dados e resultados das operações
    printf("Carta 1\n");
    printf("Estado: %s\n",estado1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %.2f\n",populacao1);
    printf("Área Total: %.2fKm²\n",area1);
    printf("PIB: %.2f\n",pib1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("Código: %s\n",codigo1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade_populacional1);
    printf("PIB per Capita: %.2f Reais\n\n",pibpercapita1);

    printf("Carta 2\n");
    printf("Estado: %s\n",estado2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %.2f\n",populacao2);
    printf("Área Total: %.2fKm²\n",area2);
    printf("PIB: %.2f\n",pib2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos2);
    printf("Código: %s\n\n",codigo2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade_populacional2);
    printf("PIB per Capita: %.2f Reais\n\n",pibpercapita2);


    return 0;
}
