#include <stdio.h>

// Desafio Super Trunfo - Países
int main() {  

    //Declarando as variáveis
    char estado1[100];       char estado2[100];
    char cidade1[100];       char cidade2[100];
    char populacao1[100];    char populacao2[100];
    float area1;             float area2;
    char pib1[100];          char pib2[100];
    int pontos_turisticos1;  int pontos_turisticos2;
    char codigo1[10];        char codigo2[10];

    printf("Bem vindo ao Super Trunfo - Países!\n\n");

    printf("Cadastro das Cartas\n\n"); //Cadastrando as cartas

    printf("Cadastro da primeira carta\n\n"); //Cadastrando a primeira carta


    printf("Digite o estado: ");
    scanf("%s",estado1);

    printf("Digite a cidade: ");
    scanf("%s",cidade1);

    printf("Digite a população total da cidade: ");
    scanf("%s",populacao1);

    printf("Digite a área total da cidade: ");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade: ");
    scanf("%s",pib1);

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
    scanf("%s",populacao2);

    printf("Digite a área total da cidade: ");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade: ");
    scanf("%s",pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d",&pontos_turisticos2);

    printf("Digite o código da cidade (Ex:A01): ");
    scanf("%s",codigo2);

    printf("Segunda carta cadastrada!\n\n"); //informe de segunda carta cadastrada

    printf("Carta 1\n");
    printf("Estado: %s\n",estado1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %s\n",populacao1);
    printf("Área Total: %fKm²\n",area1);
    printf("PIB: %s\n",pib1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("Código: %s\n\n",codigo1);

    printf("Carta 2\n");
    printf("Estado: %s\n",estado2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %s\n",populacao2);
    printf("Área Total: %fKm²\n",area2);
    printf("PIB: %s\n",pib2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos2);
    printf("Código: %s\n\n",codigo2);


    return 0;
}
