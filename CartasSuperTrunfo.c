#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    char estado[20];
    char codigo[10];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    char estado2[20];
    char codigo2[10];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    printf("Vamos criar um Super Trunfo do Brasil!\n");
    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", estado);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade principal: \n");
    scanf("%s", nomedacidade);

    printf("Digite a população do estado: \n");
    scanf("%d", &populacao);

    printf("Digite a área do estado (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &pontosturisticos);

    printf("Agora vamos para a segunda carta!\n");
    printf("Digite o nome do segundo estado: \n");
    scanf("%s", estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade principal: \n");
    scanf("%s", nomedacidade2);

        printf("Digite a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área do estado (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &pontosturisticos2);

    printf("Pronto! As cartas foram criadas com sucesso!\n");
    printf("Primeira carta: \n   Estado: %s \n   Código: %s \n   Cidade Principal: %s \n   População: %d \n   Área: %.2f km² \n   PIB: %.2f \n   ForPontos Turísticos: %d \n", estado, codigo, nomedacidade, populacao, area, pib, pontosturisticos);

    printf("Segunda carta: \n   Estado: %s \n   Código: %s \n   Cidade Principal: %s \n   População: %d \n   Área: %.2f km² \n   PIB: %.2f \n   Pontos Turísticos: %d \n", estado2, codigo2, nomedacidade2, populacao2, area2, pib2, pontosturisticos2);






    return 0;
}