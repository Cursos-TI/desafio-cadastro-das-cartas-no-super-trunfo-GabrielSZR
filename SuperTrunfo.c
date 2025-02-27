#include <stdio.h>
int main(){

    /*a carta 0 tem o valor 1 no final de cada variavel*/
    char NomeDoEstado1[30];
    char CodigoDaCarta1[24];
    char NomedaCapital1[31];
    int Populacao1;
    int NumeroDePontosTuristicos1;
    float AreaEmKm1;
    float DensidadePopulacional1, PibPerCapita1, Pib1;
    float SuperPoder1;
    float InversoDaDensidade1;
    char ok [2];

    /*a carta 1 tem o valor 2 no final de cada variavel*/
    char NomeDoEstado2[20];
    char CodigoDaCarta2[21];
    char NomedaCapital2[22];
    int Populacao2;
    int NumeroDePontosTuristicos2;
    float AreaEmKm2;
    float DensidadePopulacional2, PibPerCapita2, Pib2;
    float SuperPoder2;
    float InversoDaDensidade2;

    float inverso = 1.0;
    //criação da carta 0

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

    //Criação da carta 1//

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

    //Operadores aritiméticos para calcular a densidade populacional e o pib per capita da carta 0.
    DensidadePopulacional1 = (float) Populacao1 / AreaEmKm1;
    PibPerCapita1 = Pib1 / (float) Populacao1;
    InversoDaDensidade1 = inverso / DensidadePopulacional1;
    SuperPoder1 = (Pib1 + PibPerCapita1 + AreaEmKm1 + (float) NumeroDePontosTuristicos1 +
    (float) Populacao1 + InversoDaDensidade1);

    //Dados da primeira carta//

    printf("Dados da carta 0: \n");

    printf("Nome do estado: %s \n", NomeDoEstado1);

    printf("Codigo da carta 0: %s \n", CodigoDaCarta1);

    printf("Nome da capital: %s \n", NomedaCapital1);

    printf("Numero populacional: %d \n", Populacao1);

    printf("Area em km quadrados: %.2f \n", AreaEmKm1);

    printf("Pib do estado: %.2f \n", Pib1);

    printf("Pontos turisticos do estado:%d \n", NumeroDePontosTuristicos1);

    printf("Densidade populacional da carta 0: %.2f\n", DensidadePopulacional1);

    printf("Pib per capita da carta 0: %.2f\n", PibPerCapita1);

    printf("\n");
    //Operadores aritiméticos para calcular a densidade populacional e o pib per capita da segunda carta.
    DensidadePopulacional2 = (float) Populacao2 / AreaEmKm2;
    PibPerCapita2 = Pib2 / (float) Populacao2;
    InversoDaDensidade2 = inverso / DensidadePopulacional2;
    SuperPoder2 = (Pib2 + PibPerCapita2 + AreaEmKm2 + (float)NumeroDePontosTuristicos2 +
    (float)Populacao2 + InversoDaDensidade2);

    //Dados da segunda carta//

    printf("Dados da carta 1: \n");

    printf("Nome do estado: %s \n", NomeDoEstado2);

    printf("Codigo da carta 1: %s \n", CodigoDaCarta2);

    printf("Nome da capital: %s \n", NomedaCapital2);

    printf("Numero populacional: %d \n", Populacao2);

    printf("Area em km quadrados: %f \n", AreaEmKm2);

    printf("Pib do estado: %.2f \n", Pib2);

    printf("Pontos turisticos totais do estado:%d \n", NumeroDePontosTuristicos2);

    printf("Densidade populacional da carta 1: %.2f\n", DensidadePopulacional2);

    printf("Pib per capita da carta 1: %.2f\n", PibPerCapita2);

    print("\n");
    
    printf("Digite ok para proseguir:");
    scanf("%s", ok);
    printf("\n");

    //disputa das cartas para ver a carta vencedora

    printf("população: carta %d venceu \n", Populacao1 > Populacao2);
    printf("area: carta %d venceu \n", AreaEmKm1 > AreaEmKm2);
    printf("pib: carta %d venceu\n", Pib1 > Pib2);
    printf("pontos turisticos: carta %d venceu\n", NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2);
    printf("densidade populacional: carta %d venceu\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("pib per capita: carta %d venceu\n", PibPerCapita1 > PibPerCapita2);
    printf("super poder: carta %d venceu\n", SuperPoder1 > SuperPoder2);

    return 0;

}
