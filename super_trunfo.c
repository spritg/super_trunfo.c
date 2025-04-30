#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char Estado1[50];
    char Codigo1[20];
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int Numero_de_Pontos_Turisticos1;

    // Variáveis para Carta 2
    char Estado2[50];
    char Codigo2[20];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Numero_de_Pontos_Turisticos2;

    // Entrada da Carta 1
    printf("Carta 1\n");

    printf("Digite o Nome do Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a quantidade da populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Area: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos1);

    // Entrada da Carta 2
    printf("\nCarta 2\n");

    printf("Digite o Nome do Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a quantidade da populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos2);

    // Exibir Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s \n", Estado1);
    printf("Codigo: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("Populacao: %d \n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.3f milhoes de reais \n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos1);

    // Exibir Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.3f milhoes de reais \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos2);

    return 0;
}