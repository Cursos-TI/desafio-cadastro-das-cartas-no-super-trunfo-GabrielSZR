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

    int opcao, opcao2;
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

    printf("\n");
    
    printf("Digite ok para proseguir:");
    scanf("%s", ok);
    printf("\n");

    //disputa das cartas para ver a carta vencedora

    printf("selecione o primeiro atributo que Você quer comparar?\n");
    printf("1-Numero populacional\n");
    printf("2-Area em km²\n");
    printf("3-Densidade populacional\n");
    printf("4-Super poder\n");
    printf("5-Pib\n");
    printf("6-Pontos turisticos\n");
    printf("7-Pib per capita\n");
    printf("8-Selecione a opcao:\n");
    scanf("%d", &opcao);
//Como queria que escolhesse 2 opções para comparar eu tiver que fazer esse codigo gigante que começa por aq com o primeiro switch
    switch (opcao)
    {
    case 1:
    printf("selecione o segundo atributo que Você quer comparar?\n");
    printf("1-Area em km²\n");
    printf("2-Densidade populacional\n");
    printf("3-Super poder\n");
    printf("4-Pib\n");
    printf("5-Pontos turisticos\n");
    printf("6-Pib per capita\n");
    printf("Selecione a opcao:\n");
    scanf("%d", &opcao2);
    switch (opcao2)
    //Cada case do 1 switch vai criar outro switch com outros cases dependendo da opção selecionada.
    {
    case 1:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Numero populacional e area em km2 \n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", Populacao1, Populacao2);
    printf("valor da primeira carta: %f, valor da segunda carta: %f\n", AreaEmKm1, AreaEmKm2);

    if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    } if(AreaEmKm1 > AreaEmKm2){
        printf("carta 1 ganhou\n");
    }
    else if(AreaEmKm2 > AreaEmKm1){
        printf("carta 2 ganhou\n");
    } else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
    break;
    case 2:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Numero populacional e densidade populacional \n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", Populacao1, Populacao2);
    printf("valor da primeira carta: %f, valor da segunda carta: %f\n", DensidadePopulacional1, DensidadePopulacional2);

    if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    } if(DensidadePopulacional1 < DensidadePopulacional2){
        printf("carta 1 ganhou\n");
    }
    else if(DensidadePopulacional2 < DensidadePopulacional1){
        printf("carta 2 ganhou\n");
    } else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
    break;
    case 3:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Numero populacional e super poder \n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", Populacao1, Populacao2);
    printf("valor da primeira carta: %f, valor da segunda carta: %f\n", SuperPoder1, SuperPoder2);

    if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    } if(SuperPoder1 > SuperPoder2){
        printf("carta 1 ganhou\n");
    }
    else if(SuperPoder2 > SuperPoder1){
        printf("carta 2 ganhou\n");
    } else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
    break;
    case 4:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Numero populacional e pib \n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", Populacao1, Populacao2);
    printf("valor da primeira carta: %f, valor da segunda carta: %f\n", Pib1, Pib2);

    if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    } if(Pib1 > Pib2){
        printf("carta 1 ganhou\n");
    }
    else if(Pib1 > Pib2){
        printf("carta 2 ganhou\n");
    } else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
    break;
    case 5:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Numero populacional e pontos turisticos \n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", Populacao1, Populacao2);
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);

    if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
        printf("carta 1 ganhou\n");
    }
    else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
        printf("carta 2 ganhou\n");
    } else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
    break;
    case 6:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Numero populacional e pib per capita \n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d\n", Populacao1, Populacao2);
    printf("valor da primeira carta: %f, valor da segunda carta: %f\n", PibPerCapita1, PibPerCapita2);

    if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    } if(PibPerCapita1 > PibPerCapita2){
        printf("carta 1 ganhou\n");
    }
    else if(PibPerCapita2 > PibPerCapita1){
        printf("carta 2 ganhou\n");
    } else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
    break;
    default:
    printf("Opcao invalida!\n");
    }
    case 2:
    printf("selecione o segundo atributo que Você quer comparar?\n");
    printf("1-Numero populacional\n");
    printf("2-Densidade populacional\n");
    printf("3-Super poder\n");
    printf("4-Pib\n");
    printf("5-Pontos turisticos\n");
    printf("6-Pib per capita\n");
    printf("7-Selecione a opcao:\n");
    scanf("%d", &opcao2);
    switch (opcao2)
    {
    case 1:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Area em km² e Numero populacional\n");
    printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
    printf("valor da primeira carta: %d, valor da segunda carta: %d", Populacao1, Populacao2);
    
    if(AreaEmKm1 > AreaEmKm2){
        printf("carta 1 ganhou\n");
    } if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    }
    else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    } else if(AreaEmKm2 > AreaEmKm1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
        break;
        case 2:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Area em km² e densidade populacional\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        
        if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        } if(DensidadePopulacional1 < DensidadePopulacional2){
            printf("carta 1 ganhou\n");
        }
        else if(DensidadePopulacional2 < DensidadePopulacional1){
            printf("carta 2 ganhou\n");
        } else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 3:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Area em km² e super poder\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        
        if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        } if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        }
        else if(SuperPoder2 > SuperPoder1){
            printf("carta 2 ganhou\n");
        } else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 4:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Area em km² e pib\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        
        if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        } if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        }
        else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        } else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 5:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Area em km² e pontos turisticos\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        
        if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        }
        else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        } else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 6:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Area em km² e pib per capita\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        
        if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        } if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        }
        else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        } else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;

        default:
        printf("Opcao invalida!");
    }
        case 3:
        printf("selecione o segundo atributo que Você quer comparar?\n");
        printf("1-Numero populacional\n");
        printf("2-Area em km²\n");
        printf("3-Super poder\n");
        printf("4-Pib\n");
        printf("5-Pontos turisticos\n");
        printf("6-Pib per capita\n");
        printf("7-Selecione a opcao:\n");
        scanf("%d", &opcao2);
        switch (opcao2)
        {
        case 1:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Densidade populacional e Numero populacional\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        printf("valor da primeira carta: %d, valor da segunda carta: %d", Populacao1, Populacao2);
        
        if(DensidadePopulacional1 < DensidadePopulacional2){
            printf("carta 1 ganhou\n");
        } if(Populacao1 > Populacao2){
            printf("carta 1 ganhou\n");
        }
        else if(Populacao2 > Populacao1){
            printf("carta 2 ganhou\n");
        } else if(DensidadePopulacional2 < DensidadePopulacional1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
            break;
            case 2:
            printf("Nome da primeira carta: %s\n", NomeDoEstado1);
            printf("Nome da segunda carta: %s\n", NomeDoEstado2);
            printf("Valor a ser comparado: Area em km² e densidade populacional\n");
            printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
            printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
            
            if(AreaEmKm1 > AreaEmKm2){
                printf("carta 1 ganhou\n");
            } if(DensidadePopulacional1 < DensidadePopulacional2){
                printf("carta 1 ganhou\n");
            }
            else if(DensidadePopulacional2 < DensidadePopulacional1){
                printf("carta 2 ganhou\n");
            } else if(AreaEmKm2 > AreaEmKm1){
                printf("carta 2 ganhou\n");
            }else{
                printf("empate");
            }
            break;
            case 3:
            printf("Nome da primeira carta: %s\n", NomeDoEstado1);
            printf("Nome da segunda carta: %s\n", NomeDoEstado2);
            printf("Valor a ser comparado: Densidade populacional e super poder\n");
            printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
            printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
            
            if(DensidadePopulacional1 < DensidadePopulacional2){
                printf("carta 1 ganhou\n");
            } if(SuperPoder1 > SuperPoder2){
                printf("carta 1 ganhou\n");
            }
            else if(SuperPoder2 > SuperPoder1){
                printf("carta 2 ganhou\n");
            } else if(DensidadePopulacional2 > DensidadePopulacional1){
                printf("carta 2 ganhou\n");
            }else{
                printf("empate");
            }
            break;
            case 4:
            printf("Nome da primeira carta: %s\n", NomeDoEstado1);
            printf("Nome da segunda carta: %s\n", NomeDoEstado2);
            printf("Valor a ser comparado: Densidade populacional e pib\n");
            printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
            printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
            
            if(DensidadePopulacional1 < DensidadePopulacional2){
                printf("carta 1 ganhou\n");
            } if(Pib1 > Pib2){
                printf("carta 1 ganhou\n");
            }
            else if(Pib2 > Pib1){
                printf("carta 2 ganhou\n");
            } else if(DensidadePopulacional2 < DensidadePopulacional1){
                printf("carta 2 ganhou\n");
            }else{
                printf("empate");
            }
            break;
            case 5:
            printf("Nome da primeira carta: %s\n", NomeDoEstado1);
            printf("Nome da segunda carta: %s\n", NomeDoEstado2);
            printf("Valor a ser comparado: Densidade e pontos turisticos\n");
            printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
            printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
            
            if(DensidadePopulacional1 < DensidadePopulacional2){
                printf("carta 1 ganhou\n");
            } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
                printf("carta 1 ganhou\n");
            }
            else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
                printf("carta 2 ganhou\n");
            } else if(DensidadePopulacional2 < DensidadePopulacional1){
                printf("carta 2 ganhou\n");
            }else{
                printf("empate");
            }
            break;
            case 6:
            printf("Nome da primeira carta: %s\n", NomeDoEstado1);
            printf("Nome da segunda carta: %s\n", NomeDoEstado2);
            printf("Valor a ser comparado: Densidade populacional e pib per capita\n");
            printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
            printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
            
            if(DensidadePopulacional1 < DensidadePopulacional2){
                printf("carta 1 ganhou\n");
            } if(PibPerCapita1 > PibPerCapita2){
                printf("carta 1 ganhou\n");
            }
            else if(PibPerCapita2 > PibPerCapita1){
                printf("carta 2 ganhou\n");
            } else if(DensidadePopulacional2 < DensidadePopulacional1){
                printf("carta 2 ganhou\n");
            }else{
                printf("empate");
            }
            break;
    
            default:
            printf("Opcao invalida!");
        }
    case 4:
    printf("selecione o segundo atributo que Você quer comparar?\n");
    printf("1-Numero populacional\n");
    printf("2-Area em km²\n");
    printf("3-Densidade populacional\n");
    printf("4-Pib\n");
    printf("5-Pontos turisticos\n");
    printf("6-Pib per capita\n");
    printf("7-Selecione a opcao:\n");
    scanf("%d", &opcao2);
    switch (opcao2)
    {
    case 1:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Super poder e Numero populacional\n");
    printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
    printf("valor da primeira carta: %d, valor da segunda carta: %d", Populacao1, Populacao2);
    
    if(SuperPoder1 > SuperPoder2){
        printf("carta 1 ganhou\n");
    } if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    }
    else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    } else if(SuperPoder2 > SuperPoder1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
        break;
        case 2:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Super poder e area em km²\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        
        if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        }
        else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder2 > SuperPoder1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 3:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Densidade populacional e super poder\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        
        if(DensidadePopulacional1 < DensidadePopulacional2){
            printf("carta 1 ganhou\n");
        } if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        }
        else if(SuperPoder2 > SuperPoder1){
            printf("carta 2 ganhou\n");
        } else if(DensidadePopulacional2 < DensidadePopulacional1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 4:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Super poder e pib\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        
        if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        }
        else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder1 > SuperPoder2){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 5:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Super poder e pontos turisticos\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        
        if(SuperPoder1> SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        }
        else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder2 > SuperPoder1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 6:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Super poder e pib per capita\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        
        if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        }
        else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder2< SuperPoder1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;

        default:
        printf("Opcao invalida!");
    }
    case 5:
    printf("selecione o segundo atributo que Você quer comparar?\n");
    printf("1-Numero populacional\n");
    printf("2-Area em km²\n");
    printf("3-Densidade populacional\n");
    printf("4-super poder\n");
    printf("5-Pontos turisticos\n");
    printf("6-Pib per capita\n");
    printf("7-Selecione a opcao:\n");
    scanf("%d", &opcao2);
    switch (opcao2)
    {
    case 1:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: pib e Numero populacional\n");
    printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
    printf("valor da primeira carta: %d, valor da segunda carta: %d", Populacao1, Populacao2);
    
    if(Pib1 > Pib2){
        printf("carta 1 ganhou\n");
    } if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    }
    else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    } else if(Pib2 > Pib1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
        break;
        case 2:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: pib e area em km²\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        
        if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        } if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        }
        else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        } else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 3:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Densidade populacional e pib\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        
        if(DensidadePopulacional1 < DensidadePopulacional2){
            printf("carta 1 ganhou\n");
        } if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        }
        else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        } else if(DensidadePopulacional2 < DensidadePopulacional1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 4:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Super poder e pib\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        
        if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        }
        else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder1 > SuperPoder2){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 5:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: pib e pontos turisticos\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        
        if(Pib1> Pib2){
            printf("carta 1 ganhou\n");
        } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        }
        else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        } else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 6:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: pib e pib per capita\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        
        if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        }
        else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder2< SuperPoder1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;

        default:
        printf("Opcao invalida!");
    }
    case 6:
    printf("selecione o segundo atributo que Você quer comparar?\n");
    printf("1-Numero populacional\n");
    printf("2-Area em km²\n");
    printf("3-Densidade populacional\n");
    printf("4-super poder\n");
    printf("5-pib\n");
    printf("6-Pib per capita\n");
    printf("7-Selecione a opcao:\n");
    scanf("%d", &opcao2);
    switch (opcao2)
    {
    case 1:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Pontos turisticos e Numero populacional\n");
    printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
    printf("valor da primeira carta: %d, valor da segunda carta: %d", Populacao1, Populacao2);
    
    if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
        printf("carta 1 ganhou\n");
    } if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    }
    else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    } else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
        break;
        case 2:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pontos turisticos e area em km²\n");
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        
        if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        } if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        }
        else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        } else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 3:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Densidade populacional e Pontos turisticos\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        
        if(DensidadePopulacional1 < DensidadePopulacional2){
            printf("carta 1 ganhou\n");
        } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        }
        else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        } else if(DensidadePopulacional2 < DensidadePopulacional1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 4:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pontos turisticos e pib\n");
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        
        if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        } if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        }
        else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        } else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 5:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Super poder e pontos turisticos\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        
        if(SuperPoder1> SuperPoder2){
            printf("carta 1 ganhou\n");
        } if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        }
        else if(NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        } else if(SuperPoder2 > SuperPoder1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 6:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pontos turisticos e pib per capita\n");
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        
        if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        } if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        }
        else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        } else if(NumeroDePontosTuristicos2< NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;

        default:
        printf("Opcao invalida!");
    }
    case 7:
    printf("selecione o segundo atributo que Você quer comparar?\n");
    printf("1-Numero populacional\n");
    printf("2-Area em km²\n");
    printf("3-Densidade populacional\n");
    printf("4-super poder\n");
    printf("5-pib\n");
    printf("6-Pontos turisticos\n");
    printf("7-Selecione a opcao:\n");
    scanf("%d", &opcao2);
    switch (opcao2)
    {
    case 1:
    printf("Nome da primeira carta: %s\n", NomeDoEstado1);
    printf("Nome da segunda carta: %s\n", NomeDoEstado2);
    printf("Valor a ser comparado: Pib per capita e Numero populacional\n");
    printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
    printf("valor da primeira carta: %d, valor da segunda carta: %d", Populacao1, Populacao2);
    
    if(PibPerCapita1 > PibPerCapita2){
        printf("carta 1 ganhou\n");
    } if(Populacao1 > Populacao2){
        printf("carta 1 ganhou\n");
    }
    else if(Populacao2 > Populacao1){
        printf("carta 2 ganhou\n");
    } else if(PibPerCapita2 > PibPerCapita1){
        printf("carta 2 ganhou\n");
    }else{
        printf("empate");
    }
        break;
        case 2:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pib per capita e area em km²\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", AreaEmKm1, AreaEmKm2);
        
        if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        } if(AreaEmKm1 > AreaEmKm2){
            printf("carta 1 ganhou\n");
        }
        else if(AreaEmKm2 > AreaEmKm1){
            printf("carta 2 ganhou\n");
        } else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 3:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pib per capita e densidade populacional\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", DensidadePopulacional1, DensidadePopulacional2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        
        if(DensidadePopulacional1 < DensidadePopulacional2){
            printf("carta 1 ganhou\n");
        } if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        }
        else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        } else if(DensidadePopulacional2 < DensidadePopulacional1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 4:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pib per capita e super poder\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", SuperPoder1, SuperPoder2);
        
        if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        } if(SuperPoder1 > SuperPoder2){
            printf("carta 1 ganhou\n");
        }
        else if(SuperPoder2 > SuperPoder1){
            printf("carta 2 ganhou\n");
        } else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 5:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pib per capita e pib\n");
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", Pib1, Pib2);
        
        if(PibPerCapita1> PibPerCapita2){
            printf("carta 1 ganhou\n");
        } if(Pib1 > Pib2){
            printf("carta 1 ganhou\n");
        }
        else if(Pib2 > Pib1){
            printf("carta 2 ganhou\n");
        } else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;
        case 6:
        printf("Nome da primeira carta: %s\n", NomeDoEstado1);
        printf("Nome da segunda carta: %s\n", NomeDoEstado2);
        printf("Valor a ser comparado: Pontos turisticos e pib per capita\n");
        printf("valor da primeira carta: %d, valor da segunda carta: %d", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
        printf("valor da primeira carta: %f, valor da segunda carta: %f", PibPerCapita1, PibPerCapita2);
        
        if(NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2){
            printf("carta 1 ganhou\n");
        } if(PibPerCapita1 > PibPerCapita2){
            printf("carta 1 ganhou\n");
        }
        else if(PibPerCapita2 > PibPerCapita1){
            printf("carta 2 ganhou\n");
        } else if(NumeroDePontosTuristicos2< NumeroDePontosTuristicos1){
            printf("carta 2 ganhou\n");
        }else{
            printf("empate");
        }
        break;

        default:
        printf("Opcao invalida!");
    }
}
    

}