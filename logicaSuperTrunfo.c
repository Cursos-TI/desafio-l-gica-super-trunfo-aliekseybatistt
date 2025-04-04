#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int ponto_turistico1, ponto_turistico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, dens_pop1, dens_pop2, pib_per1, pib_per2, super_poder1, super_poder2, invert_dens1, invert_dens2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    
    printf("Digite o nome do estado: ");
    scanf("%c", &estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &ponto_turistico1);

    printf("Digite o nome do estado: ");
    scanf(" %c", &estado2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &ponto_turistico2);

    dens_pop1 = (float) populacao1 / area1;
    pib_per1 = (float) (pib1 / populacao1) * 1000000000;

    dens_pop2 = (float) populacao2 / area2;
    pib_per2 = (float) (pib2 / populacao2) * 1000000000;

    invert_dens1 = (float) 1 / dens_pop1;
    invert_dens2 = (float) 1 / dens_pop2;

    super_poder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pib_per1 + invert_dens1;
    super_poder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pib_per2 + invert_dens2;

    printf("\nCarta 1 \nEstado: %c\n" , estado1);
    printf("Código: %s\n" , codigo1);
    printf("Cidade: %s\n" , cidade1);
    printf("População: %d habitantes\n" , populacao1);
    printf("PIB: %.2f bilhões de reais\n" , pib1);
    printf("Área: %.2f km²\n" , area1);
    printf("Número de pontos turísticos: %d \n" , ponto_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n" , dens_pop1);
    printf("PIB per capita: %.2f reais/hab\n \n" , pib_per1);

    printf("Carta 2 \nEstado: %c\n" , estado2);
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %d habitantes\n" , populacao2);
    printf("PIB: %.2f bilhões de reais\n" , pib2);
    printf("Área: %.2f km²\n" , area2);
    printf("Número de pontos turísticos: %d \n" , ponto_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n" , dens_pop2);
    printf("PIB per capita: %.2f reais/hab\n\n" , pib_per2);

    printf("Super poder 1: %.2f \nSuper poder 2: %.2f \n\n" , super_poder1, super_poder2);

    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
