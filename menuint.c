#include <stdio.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal: \n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção (1-3): ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            srand (time(0)); // Inicializa o gerador de números aleatórios
            numeroSecreto = rand() %10;
            printf("Digite um numero de 0 a 9: \n");
            scanf("%d", &palpite);
            if (palpite == numeroSecreto){
                printf("Parabéns você acertou!\n");
            }
                else {
                    printf("Que pena, você errou. O número secreto era %d\n", numeroSecreto);
                }
            break;
        case 2:
            printf("Regras do jogo:\n");
            printf("1. Regra um...\n");
            printf("2. Regra dois...\n");
            printf("3. Regra três...\n");
            break;
        case 3:
            printf("Saindo do programa. Até logo!\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 3.\n");
            break;
    }

}