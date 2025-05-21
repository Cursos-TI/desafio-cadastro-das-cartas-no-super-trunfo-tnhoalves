#include <stdio.h>

int main() {
    // Separando as variáveis
    char estado, estado2;
    char codigoCarta[10], codigoCarta2[10];
    char nomeCidade[15], nomeCidade2[15];
    int pontoTuristico, pontoTuristico2, populacao, populacao2;
    float area, area2, pib, pib2;

    // Entrada de dados - Carta 1
    printf("Carta nº 1\n");
    printf("Estado (sigla com uma letra A a H): ");
    scanf(" %c", &estado); 

    printf("Codigo da carta: ");
    scanf("%s", codigoCarta);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em KM²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    // Entrada de dados - Carta 2
    printf("\nCarta nº 2\n");
    printf("Estado (sigla com uma letra A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoTuristico2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em KM²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    // Saída dos dados
    printf("\n==========================\n");
    printf("Dados da Carta nº 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", nomeCidade);
    printf("Pontos turísticos: %d\n", pontoTuristico);
    printf("População: %d\n", populacao);
    printf("Área: %.f KM²\n", area);
    printf("PIB: %.f bilhões de reais\n", pib);

    printf("\nDados da Carta nº 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f KM²\n", area2);
    printf("PIB: %.f bilhões de reais\n", pib2);

    return 0;
    
}
