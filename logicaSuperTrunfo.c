#include <stdio.h>
#include <string.h>

int main(){
    char estado;
    char codigo[10];
    char nomedacidade[50];
    char nomedacidade2[50];
    int populacao, populacao2 ;
    int pontosturisticos, pontosturisticos2;
    float area, area2, pib, pib2;
    float densidadepopulacional, densidadepopulacional2;
    float pibpercapita, pibpercapita2;
    int opcao;

    printf("Novo commit\n");
    // Cadastro Carta 01
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado:\n");
    scanf("%c", &estado);

    //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo);

    printf("Digite Nome da Cidade:\n");
    scanf("%s", nomedacidade);
    
    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o Pib:\n");
    scanf("%f", &pib);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos);

   //Densidade Populacional
   densidadepopulacional = (area > 0) ? (populacao / area) : 0;
   //Pib per Capita
   pibpercapita = pib / (float)populacao;
   


    // Exibição dos Dados Carta 01
     printf("Carta 01\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %d\n", populacao);
     printf("Área: %.2f km²\n", area);
     printf("Pib: %.2f bilhões de reais\n", pib);
     printf("Pontos Turisticos: %d\n", pontosturisticos);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
     printf("Pib per Capita: %.2f reais\n", pibpercapita);


   // Cadastro Carta 02
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);
    
    //Código da Carta 02: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo);

    printf("Digite Nome da Cidade:\n");
    scanf("%s", nomedacidade2);
    
    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área:\n");
    scanf("%f", &area2);

    printf("Digite o Pib:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos2);

    //Densidade Populacional
    densidadepopulacional2 = (area2 > 0) ? (populacao2 / area2) : 0;
    //Pib per Capita
    pibpercapita2 = pib2 / (float)populacao2;
    
    // Exibição dos Dados Carta 02
     printf("Carta 02\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomedacidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("Pib: %.2f bilhões de reais\n", pib2);
     printf("Pontos Turisticos: %d\n", pontosturisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
     printf("Pib per Capita: %.2f reais\n", pibpercapita2);

    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Pib per Capita\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: // População
        printf("\n Comparando por População: \n");
        printf("Carta 1 (%s): %d habitantes\n", nomedacidade, populacao);
        printf("Carta 2 (%s): %d habitantes\n", nomedacidade2,populacao2);
        if (populacao > populacao2) {
            printf("Vencedor: Carta 1 (%s)!\n", nomedacidade);   
        } else if (populacao2 > populacao) {
            printf("Vencedor: Carta 2 (%s)!\n", nomedacidade2);
        } else {
            printf("Empate!\n");
        }
         break;  
         case 2: // Área
        printf("\n Comparando por Área: \n");
        printf("Carta 1 (%s): %.2f km²\n", nomedacidade, area);
        printf("Carta 2 (%s): %.2f km²\n", nomedacidade2,area2);
        if (area > area2) {
            printf("Vencedor: Carta 1 (%s)!\n", nomedacidade);   
        } else if (area2 > area) {
            printf("Vencedor: Carta 2 (%s)!\n", nomedacidade2);
        } else {
            printf("Empate!\n");
        }
         break;
         case 3: // Pib
        printf("\n Comparando por Pib: \n");
        printf("Carta 1 (%s): %.2f bilhões de reais\n", nomedacidade, pib);
        printf("Carta 2 (%s): %.2f bilhões de reais\n", nomedacidade2,pib2);
        if (pib > pib2) {
            printf("Vencedor: Carta 1 (%s)!\n", nomedacidade);   
        } else if (pib2 > pib) {
            printf("Vencedor: Carta 2 (%s)!\n", nomedacidade2);
        } else {
            printf("Empate!\n");
        }
         break;
         case 4: // Pontos Turísticos
        printf("\n Comparando por Pontos Turísticos: \n");
        printf("Carta 1 (%s): %d habitantes\n", nomedacidade, pontosturisticos);
        printf("Carta 2 (%s): %d habitantes\n", nomedacidade2,pontosturisticos2);
        if (pontosturisticos > pontosturisticos2) {
            printf("Vencedor: Carta 1 (%s)!\n", nomedacidade);   
        } else if (pontosturisticos2 > pontosturisticos) {
            printf("Vencedor: Carta 2 (%s)!\n", nomedacidade2);
        } else {
            printf("Empate!\n");
        }
         break;
         case 5: // Densidade Populacional  
        printf("\n Comparando por Densidade Populacional: \n");
        printf("Carta 1 (%s): %.2f hab/km²\n", nomedacidade, densidadepopulacional);
        printf("Carta 2 (%s): %.2f hab/km²\n", nomedacidade2,densidadepopulacional2);
        if (densidadepopulacional < densidadepopulacional2) {
            printf("Vencedor: Carta 1 (%s)!\n", nomedacidade);   
        } else if (densidadepopulacional2 < densidadepopulacional) {
            printf("Vencedor: Carta 2 (%s)!\n", nomedacidade2);
        } else {
            printf("Empate!\n");
        }
         break;
         case 6: // Pib per Capita
        printf("\n Comparando por Pib per Capita: \n");
        printf("Carta 1 (%s): %.2f reais\n", nomedacidade,  pibpercapita);
        printf("Carta 2 (%s): %.2f reais\n", nomedacidade2, pibpercapita2);
        if ( pibpercapita >  pibpercapita2) {
            printf("Vencedor: Carta 1 (%s)!\n", nomedacidade);   
        } else if ( pibpercapita2 >  pibpercapita) {
            printf("Vencedor: Carta 2 (%s)!\n", nomedacidade2);
        } else {
            printf("Empate!\n");
        }
         break;
    
    default:
            printf("Opção inválida!\n");
        break;
    }

     
    return 0;

     }