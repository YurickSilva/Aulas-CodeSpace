#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Função principal do programa
int main() {
    // Declaração de variáveis com nomes significativos
    double primeiroNumero;    // Armazena o primeiro número inserido pelo usuário
    double segundoNumero;     // Armazena o segundo número inserido pelo usuário
    char operador;            // Armazena o operador matemático (+, -, *, /)
    double resultado;         // Armazena o resultado da operação

    // Solicita ao usuário que insira o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%lf", &primeiroNumero);  // Lê o primeiro número como double

    // Solicita ao usuário que insira o operador
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);  // Lê o operador (espaço antes de %c para ignorar whitespace)

    // Solicita ao usuário que insira o segundo número
    printf("Digite o segundo número: ");
    scanf("%lf", &segundoNumero);  // Lê o segundo número como double

    // Realiza a operação com base no operador usando uma estrutura de switch
    switch (operador) {
        case '+':  // Caso de adição
            resultado = primeiroNumero + segundoNumero;
            printf("%.2lf %c %.2lf = %.2lf\n", primeiroNumero, operador, segundoNumero, resultado);  // Exibe os valores, operador e resultado
            break;

        case '-':  // Caso de subtração
            resultado = primeiroNumero - segundoNumero;
            printf("%.2lf %c %.2lf = %.2lf\n", primeiroNumero, operador, segundoNumero, resultado);
            break;

        case '*':  // Caso de multiplicação
            resultado = primeiroNumero * segundoNumero;
            printf("%.2lf %c %.2lf = %.2lf\n", primeiroNumero, operador, segundoNumero, resultado);
            break;

        case '/':  // Caso de divisão
            if (segundoNumero != 0) {  // Verifica se o divisor não é zero
                resultado = primeiroNumero / segundoNumero;
                printf("%.2lf %c %.2lf = %.2lf\n", primeiroNumero, operador, segundoNumero, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");  // Mensagem de erro
            }
            break;

        default:  // Caso o operador seja inválido
            printf("Erro: Operador inválido.\n");
    }

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}