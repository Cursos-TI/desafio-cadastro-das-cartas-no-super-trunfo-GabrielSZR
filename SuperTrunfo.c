#include <stdio.h>
int main(){

    char NomeDoEstado1[30];
    char CodigoDaCarta1[24];
    char NomedaCapital1[31];
    int Populacao1;
    int NumeroDePontosTuristicos1;
    float AreaEmKm1;
    float DensidadePopulacional1, PibPerCapita1, Pib1;

    char NomeDoEstado2[20];
    char CodigoDaCarta2[21];
    char NomedaCapital2[22];
    int Populacao2;
    int NumeroDePontosTuristicos2;
    float AreaEmKm2;
    float DensidadePopulacional2, PibPerCapita2, Pib2;

    //criação da primeira carta//

    printf("Nome da primeira carta: \n");
    scanf("%s", NomeDoEstado1);

    printf("Insira um codigo para a primeira carta: \n");
    scanf("%s", CodigoDaCarta1);

    printf("Nome da capital: \n");
    scanf("%s", NomedaCapital1);

    printf("Digite o numero populacional: \n");
    scanf("%d", &Populacao1);

    printf("Digite a area do estado em km quadrados: \n");
    scanf("%f", &AreaEmKm1);

    printf("Digite o pib do estado: \n");
    scanf("%f", &Pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    //Criação da segunda carta//

    printf("Nome da Segunda carta: \n");
    scanf("%s", NomeDoEstado2);

    printf("Insira um codigo para a Segunda carta: \n");
    scanf("%s", CodigoDaCarta2);

    printf("Nome da capital: \n");
    scanf("%s", NomedaCapital2);

    printf("Digite o numero populacional: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area do estado em km quadrados: \n");
    scanf("%f", &AreaEmKm2);

    printf("Digite o pib do Estado: \n");
    scanf("%f", &Pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("\n");

    //Operadores aritiméticos para calcular a densidade populacional e o pib per capita da primeira carta.
    DensidadePopulacional1 = (float) Populacao1 / AreaEmKm1;
    PibPerCapita1 = Pib1 / (float) Populacao1;

    //Dados da primeira carta//

    printf("Dados da primeira carta: \n");

    printf("Nome do estado: %s \n", NomeDoEstado1);

    printf("Codigo da carta: %s \n", CodigoDaCarta1);

    printf("Nome da capital: %s \n", NomedaCapital1);

    printf("Numero populacional: %d \n", Populacao1);

    printf("Area em km quadrados: %f \n", AreaEmKm1);

    printf("Pib do estado: %.2f \n", Pib1);

    printf("Pontos turisticos do estado:%d \n", NumeroDePontosTuristicos1);

    printf("Densidade populacional da primeira carta: %.2f\n", DensidadePopulacional1);

    printf("Pib per capita da primeira carta: %.2f\n", PibPerCapita1);

    printf("\n");
    //Operadores aritiméticos para calcular a densidade populacional e o pib per capita da segunda carta.
    DensidadePopulacional2 = (float) Populacao2 / AreaEmKm2;
    PibPerCapita2 = Pib2 / (float) Populacao2;

    //Dados da segunda carta//

    printf("Dados da segunda carta: \n");

    printf("Nome do estado: %s \n", NomeDoEstado2);

    printf("Codigo da carta: %s \n", CodigoDaCarta2);

    printf("Nome da capital: %s \n", NomedaCapital2);

    printf("Numero populacional: %d \n", Populacao2);

    printf("Area em km quadrados: %f \n", AreaEmKm2);

    printf("Pib do estado: %.2f \n", Pib2);

    printf("Pontos turisticos totais do estado:%d \n", NumeroDePontosTuristicos2);

    printf("Densidade populacional da segunda carta: %.2f\n", DensidadePopulacional2);

    printf("Pib per capita da segunda carta: %.2f\n", PibPerCapita2);

    return 0;
}
