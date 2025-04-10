#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
int main() {
    char estado;
    char codigo [50], cidade[50];
    int populacao, turisticos;
    float area, pib;


    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a quantidade da População: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o números dos pontos turísticos: \n");
    scanf("%d", &turisticos);

    printf("Digite nome da cidade: %s\n", cidade);
    printf("Digite a área em km² %f - Digite o PIB: %.2f - Digite o números dos pontos turísticos: %d\n", area, pib, turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;}