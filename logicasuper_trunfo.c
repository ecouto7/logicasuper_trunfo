#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main() {
    char letra1, letra2;
    char codigo1[6], codigo2[6], estado1[40], estado2[40];
    long int populacao1, populacao2;
    int  turisticos1, turisticos2, atributo1, atributo2, resultado1, resultado2;
    float area1, area2, pib1, pib2, pibCapita1, pibCapita2, denPopulacional1, denPopulacional2, superPoder1, superPoder2;

    // Inicialização do jogo

    // Primeiro estado!

    printf("Digite uma letra para o Estado: ");
    scanf("%c", &letra1);
    limpar_entrada();
    printf("Código: ");
    scanf("%s", &codigo1);
    limpar_entrada();
    printf("Nome do estado: ");
    ler_texto(estado1, 40);
    printf("População: ");
    scanf("%li", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos1);

    denPopulacional1 = populacao1 / area1; 
    pibCapita1 = pib1 / populacao1;
    
    printf("\n");
    
    

    printf("Digite uma letra para o Estado 2: ");
    scanf("%c", &letra2);
    limpar_entrada();
    printf("Código: ");
    scanf("%s", &codigo2);
    limpar_entrada();
    printf("Nome do estado: ");
    ler_texto(estado2, 40);
    printf("População: ");
    scanf("%li", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos2);

    denPopulacional2 = populacao2 / area2;
    pibCapita2 = pib2 / populacao2;

    printf("\n");

    printf("----------------- \n");

    printf("\n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", estado1);
    printf("População: %li\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", denPopulacional1);
    printf("PIB per Capita: %.10f\n", pibCapita1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", estado2);
    printf("População: %li\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f\n", denPopulacional2);
    printf("PIB per Capita: %.10f\n", pibCapita2);

    printf("\n");

    printf("----------------- \n");

    printf("\n");

    printf("Escolha o primeiro atributo: \n ");
    printf("1. Comparar População \n");
    printf("2. Comparar Área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar Pontos Turísticos \n");
    printf("5. Comparar Densidade demográfica \n");
    printf("Escolha uma opçao: ");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1:
            printf("\n");
            printf("Você escolheu População! \n");
            printf("%s tem %li \n", estado1, populacao1);
            printf("%s tem %li \n", estado2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 venceu neste atributo! \n");
            } else {
                printf("Carta 2 venceu neste atributo! \n");
            }
            printf("\n");
            break;
        case 2: 
            printf("\n");
            printf("Você escolheu Área \n");
            printf("%s tem %.2f \n", estado1, area1);
            printf("%s tem %.2f \n", estado2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 venceu neste atributo! \n");
            } else {
                printf("Carta 2 venceu neste atributo! \n");
            }
            printf("\n");
            break;
        case 3:
            printf("\n");
            printf("Você escolheu PIB \n ");
            printf("%s tem %.2f \n", estado1, pib1);
            printf("%s tem %.2f \n", estado2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 venceu neste atributo! \n");
            } else {
                printf("Carta 2 venceu neste atributo! \n");
            }
            printf("\n");
            break;
        case 4:
            printf("\n");
            printf("Você escolheu Pontos Turísticos \n");
            printf("%s tem %d \n", estado1, turisticos1);
            printf("%s tem %d \n", estado2, turisticos2);
            resultado1 = turisticos1 > turisticos2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 venceu neste atributo! \n");
            } else {
                printf("Carta 2 venceu neste atributo! \n");
            }
            printf("\n");
            break;
        case 5:
            printf("\n");
            printf("Você escolheu Densidade Demográfica \n");
            printf("%s tem %.2f \n", estado1, denPopulacional1);
            printf("%s tem %.2f \n", estado2, denPopulacional2);
            resultado1 = denPopulacional1 < denPopulacional2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 venceu neste atributo! \n");
            } else {
                printf("Carta 2 venceu neste atributo! \n");
            }
            printf("\n");
            break;
        default:
            printf("\n");
            printf("Opção inválida!");
            break;
    }

    printf("Escolha o segundo atributo: \n ");
    printf("Atenção: você deve escolher um atributo diferente do primeiro \n");
    printf("1. Comparar População \n");
    printf("2. Comparar Área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar Pontos Turísticos \n");
    printf("5. Comparar Densidade demográfica \n");
    printf("Escolha uma opçao: ");
    scanf("%d", &atributo2); 

    if (atributo1 == atributo2) {
        printf("Você escolheu o mesmo atributo \n!");
    } else {
        switch (atributo2) {
            case 1:
                printf("\n");
                printf("Você escolheu População! \n");
                printf("%s tem %li \n", estado1, populacao1);
                printf("%s tem %li \n", estado2, populacao2);
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 venceu neste atributo! \n");
                } else {
                    printf("Carta 2 venceu neste atributo! \n");
                }
                printf("\n");
                break;
            case 2: 
                printf("\n");
                printf("Você escolheu Área \n");
                printf("%s tem %.2f \n", estado1, area1);
                printf("%s tem %.2f \n", estado2, area2);
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 venceu neste atributo! \n");
                } else {
                    printf("Carta 2 venceu neste atributo! \n");
                }
                printf("\n");
                break;
            case 3:
                printf("\n");
                printf("Você escolheu PIB \n ");
                printf("%s tem %.2f \n", estado1, pib1);
                printf("%s tem %.2f \n", estado2, pib2);
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 venceu neste atributo! \n");
                } else {
                    printf("Carta 2 venceu neste atributo! \n");
                }
                printf("\n");
                break;
            case 4:
                printf("\n");
                printf("Você escolheu Pontos Turísticos \n");
                printf("%s tem %d \n", estado1, turisticos1);
                printf("%s tem %d \n", estado2, turisticos2);
                resultado2 = turisticos1 > turisticos2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 venceu neste atributo! \n");
                } else {
                    printf("Carta 2 venceu neste atributo! \n");
                }
                printf("\n");
                break;
            case 5:
                printf("\n");
                printf("Você escolheu Densidade Demográfica \n");
                printf("%s tem %.2f \n", estado1, denPopulacional1);
                printf("%s tem %.2f \n", estado2, denPopulacional2);
                resultado2 = denPopulacional1 < denPopulacional2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 venceu neste atributo! \n");
                } else {
                    printf("Carta 2 venceu neste atributo! \n");
                }
                printf("\n");
                break;
            default:
                printf("\n");
                printf("Opção inválida!");
                break;
        }
    }

    printf("Resultado - ");
    
    if (resultado1 && resultado2) {
        printf("Carta 1 venceu!");
    } else if (resultado1 != resultado2) {
        printf("Empatou!");
    } else {
        printf("Carta 2 venceu!");
    }

    return 0;
}