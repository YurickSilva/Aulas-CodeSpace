#include <stdio.h>  

int main() {
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
        scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
        scanf("%d", &numero2);

    // operação para somar
    soma = numero1 + numero2;

    // operação para subtrair
    subtracao = numero1 - numero2;

    // operação para multiplicar
    multiplicacao = numero1 * numero2;

    // operação para dividir
    divisao = numero1 / numero2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
    
    return 0;
}