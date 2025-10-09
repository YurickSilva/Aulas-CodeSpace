#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // gerar número aleatório para o computador
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // número entre 1 e 100

    // Início do jogo 
    printf("Bem-Vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número entre 1 e 100 e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (1-100): ");
    scanf("%d", &numeroJogador);

    // Exibir o número do computador

    switch(tipoComparacao){
        case 'M':
        case 'm':
            printf("Você escolheu Maior.\n");
            resultado = (numeroJogador > numeroComputador)? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu Menor.\n");
            resultado = (numeroJogador < numeroComputador)? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolheu Igual.\n");
            resultado = (numeroJogador == numeroComputador)? 1 : 0;
            break;
        default:
            printf("Tipo de comparação inválido. Use M, N ou I.\n");
            return 1; // sair do programa com código de erro
    }
    
    printf("Número do Computador: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1) {
        printf("Parabéns! Você ganhou!\n");
    } else {
        printf("Você perdeu. Tente novamente!\n");
    }

}