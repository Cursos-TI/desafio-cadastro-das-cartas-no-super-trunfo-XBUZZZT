#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1[100], estado2[100];
    char codigo1[100], codigo2[100];
    char cidade1[100], cidade2[100];
    int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int pontost1, pontost2;

    // CARTA 1
    printf("Carta 1: \n");
    printf("Digite seu estado: \n");
    scanf("%s", estado1);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo1);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade1);

    printf("Quantidade de habitantes: \n");
    scanf("%d", &habitantes1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontost1);

    // CARTA 2
    printf("\nCarta 2: \n");
    printf("Digite seu estado: \n");
    scanf("%s", estado2);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo2);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade2);

    printf("Quantidade de habitantes: \n");
    scanf("%d", &habitantes2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontost2);

    // EXIBINDO OS DADOS
    printf("\nCarta 1: \n");
    printf("Seu estado eh: %s \n", estado1);
    printf("Seu codigo eh: %s \n", codigo1);
    printf("Sua cidade eh: %s \n", cidade1);
    printf("Quantidade de habitantes: %d \n", habitantes1);
    printf("Area: %.2f km2 \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", pontost1);

    printf("\nCarta 2: \n");
    printf("Seu estado eh: %s \n", estado2);
    printf("Seu codigo eh: %s \n", codigo2);
    printf("Sua cidade eh: %s \n", cidade2);
    printf("Quantidade de habitantes: %d \n", habitantes2);
    printf("Area: %.2f km2 \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turisticos: %d \n", pontost2);

    return 0;
}
