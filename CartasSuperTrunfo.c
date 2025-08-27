#include <stdio.h>

int main(){
    char estado[20], cidade[20], codigo[10];
    int populacao, turismo;
    float area, pib;

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f",&pib);

    printf("Digite o número da populacao:  \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turismo);

    printf("Digite o estado:  \n");
    scanf("%s", estado);

    printf("Digite a cidade:  \n");
    scanf("%s", cidade);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);


// EXIBIR DADOS

    printf("\n------Dados das Cartas----- \n");
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("códido: %s\n", codigo);
    printf("turismo: %d\n", turismo);
    printf("populacao %d habitantes \n", populacao);
    printf("pib %.2f milhoes \n", pib);
    printf("area %f km² \n", area);
    



    return 0;
}
