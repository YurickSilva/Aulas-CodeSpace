#include <stdio.h>


// Função que soma dois inteiros
int soma(int a, int b) {
    return a + b;
}

int main(){
    // Operadores de incremento e decremento
    int numero1 = 1;
    printf("Numero1 antes do incremento: %d\n", numero1);
    numero1++; // pós-incremento
    printf("Numero1 após o incremento: %d\n", numero1);
    ++numero1; // pré-incremento
    printf("Numero1 após o incremento: %d\n", numero1);
    numero1--; // pós-decremento
    printf("Numero1 após o decremento: %d\n", numero1);
    --numero1; // pré-decremento
    printf("Numero1 após o decremento: %d\n", numero1);

    // Estrutura condicional
    if (numero1 > 0) {
        printf("numero1 é positivo\n");
    } else if (numero1 == 0) {
        printf("numero1 é zero\n");
    } else {
        printf("numero1 é negativo\n");
    }

    // Loop for
    printf("Contando de 1 a 5 com for:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Loop while
    int contador = 3;
    printf("Contando com while:\n");
    while (contador > 0) {
        printf("%d ", contador);
        contador--;
    }
    printf("\n");

    // Laço do-while
    int num = 0;
    printf("Exemplo do-while:\n");
    do {
        printf("num = %d\n", num);
        num++;
    } while (num < 3);

    // Vetores (arrays)
    int vetor[3] = {10, 20, 30};
    printf("Elementos do vetor:\n");
    for (int i = 0; i < 3; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Usando função
    int resultado = soma(2, 3);
    printf("Soma de 2 e 3: %d\n", resultado);

    return 0;
}