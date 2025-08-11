#include <stdio.h>

int main(){

    //criando as variaveis para carta 1 e 2
    int populacao1, NumeroPontoTuristico1, populacao2, NumeroPontoTuristico2;
    char estado1, estado2;
    char nomeCidade1[50], codigoDaCarta1[50], nomeCidade2[50], codigoDaCarta2[50];
    float area1, pib1, area2, pib2;

    
    //imprimindo informações na tela para o usuário preencher, carta 1
    printf("Insira os dados da carta 1:\n");
    
    //Dados para carta 1
    printf("Insira o Estado para carta 1: "); //pedindo ao usuário para digitar o dado requerido
    scanf("%c", &estado1); //Leitura do dado digitado

    printf("Insira o codigo do Estado para carta 1: "); 
    scanf("%s", &codigoDaCarta1);

    printf("Insira o nome da cidade da carta 1: ");
    scanf("%s", &nomeCidade1);

    printf("Insira a População da Cidade da carta 1: ");
    scanf("%d", &populacao1);

    printf("Insira a Área da Cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da Cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da Cidade da carta 1: ");
    scanf("%d", &NumeroPontoTuristico1);
    //fim da leitura de dados da carta 1
    


    //imprimindo informações na tela para o usuário preencher, carta 2
    printf("\nInsira os dados da carta 2:\n");
    
    //Dados para carta 2
    printf("Insira o Estado para carta 2: "); //pedindo ao usuário para digitar o dado requerido
    scanf(" %c", &estado2); //Leitura do dado digitado

    printf("Insira o codigo do Estado para carta 2: "); 
    scanf("%s", &codigoDaCarta2);

    printf("Insira o nome da cidade da carta 2: ");
    scanf("%s", &nomeCidade2);

    printf("Insira a População da Cidade da carta 2: ");
    scanf("%d", &populacao2);

    printf("Insira a Área da Cidade da carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da Cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da Cidade da carta 2: ");
    scanf("%d", &NumeroPontoTuristico2);
    //fim da leitura de dados da carta 2
    

    //início das impressoes dos dados digitados referente a carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d", NumeroPontoTuristico1);
    //fim das impressoes na tela carta 1


    //início das impressoes dos dados digitados referente a carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d", NumeroPontoTuristico2);
    //fim das impressoes na tela carta 2

    //fim do programa
    return 0;
    
}
