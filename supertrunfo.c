#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // ----- Declaração das variáveis das duas cartas -----
    char estado1[20], cidade1[20], codigo1[10];
    int populacao1, turismo1;
    float area1, pib1, densidade1;

    char estado2[20], cidade2[20], codigo2[10];
    int populacao2, turismo2;
    float area2, pib2, densidade2;

    // ----- Entrada de dados da primeira carta -----
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    densidade1 = populacao1 / area1;

    printf("\n--- Carta 1 cadastrada com sucesso! ---\n\n");

    // ----- Entrada de dados da segunda carta -----
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    densidade2 = populacao2 / area2;

    printf("\n--- Carta 2 cadastrada com sucesso! ---\n");

    // ----- Menu interativo para escolher os atributos -----
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    printf("\n=== Escolha os atributos para comparação ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    do {
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        scanf("%d", &opcao2);

        if (opcao2 == opcao1) {
            printf("⚠️ O segundo atributo deve ser diferente do primeiro!\n");
        }
    } while (opcao2 == opcao1);

    // ----- Atribuindo os valores das cartas aos atributos escolhidos -----
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = turismo1; valor1_carta2 = turismo2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Opção inválida!"); return 0;
    }

    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = turismo1; valor2_carta2 = turismo2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Opção inválida!"); return 0;
    }

    // ----- Exibição dos valores escolhidos -----
    printf("\n--- Valores das Cartas nos Atributos Selecionados ---\n");
    printf("%s -> Atributo 1: %.2f | Atributo 2: %.2f\n", cidade1, valor1_carta1, valor2_carta1);
    printf("%s -> Atributo 1: %.2f | Atributo 2: %.2f\n", cidade2, valor1_carta2, valor2_carta2);

    // ----- Comparação usando regras do Super Trunfo -----
    float pontos1 = 0, pontos2 = 0;

    // Atributo 1
    if (opcao1 == 5) { // Densidade -> menor vence
        if (valor1_carta1 < valor1_carta2) pontos1++;
        else if (valor1_carta2 < valor1_carta1) pontos2++;
    } else {
        if (valor1_carta1 > valor1_carta2) pontos1++;
        else if (valor1_carta2 > valor1_carta1) pontos2++;
    }

    // Atributo 2
    if (opcao2 == 5) { // Densidade -> menor vence
        if (valor2_carta1 < valor2_carta2) pontos1++;
        else if (valor2_carta2 < valor2_carta1) pontos2++;
    } else {
        if (valor2_carta1 > valor2_carta2) pontos1++;
        else if (valor2_carta2 > valor2_carta1) pontos2++;
    }

    // ----- Resultado final -----
    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s: %.1f pontos\n", cidade1, pontos1);
    printf("%s: %.1f pontos\n", cidade2, pontos2);

    if (pontos1 > pontos2)
        printf("\n🏆 Vencedor: %s!\n", cidade1);
    else if (pontos2 > pontos1)
        printf("\n🏆 Vencedor: %s!\n", cidade2);
    else
        printf("\n🤝 Empate!\n");

    return 0;
}
