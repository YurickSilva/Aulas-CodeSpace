#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int escolhaJogador, EscolhaComputador;
    srand(time(0));
 
    printf("*** Jogo de jovenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Digite sua escolha (1-3): ");
    scanf("%d", &escolhaJogador);

    EscolhaComputador = rand() % 3 + 1;

    switch(escolhaJogador){
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Escolha inválida! Por favor, escolha uma opção entre 1 e 3.\n");
            return 1;
    }
    switch(EscolhaComputador){
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

    if (EscolhaComputador == escolhaJogador){
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && EscolhaComputador == 3) ||
               (escolhaJogador == 2 && EscolhaComputador == 1) ||
               (escolhaJogador == 3 && EscolhaComputador == 2)) {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }
}
