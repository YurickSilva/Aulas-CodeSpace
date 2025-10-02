#include <stdio.h>

int main() {
    /*
        Atibuição simples (=)
        Atribuição com soma (+=)
        Atribuição com subtração (-=)
        Atribuição com multiplicação (*=)
        Atribuição com divisão (/=)
    */
    int numero1, numero2, resultado;

    resultado = 10;  // atribuição simples
    printf("Resultado: %d\n", resultado);
    
    resultado += 10;  // resultado = resultado + 10
    printf("Resultado: %d\n", resultado);
    
    resultado -= 5; // resultado = resultado - 5
    printf("Resultado: %d\n", resultado);
    
    resultado *= 2; // resultado = resultado * 2
    printf("Resultado: %d\n", resultado);
    
    resultado /= 3; // resultado = resultado / 3
    printf("Resultado: %d\n", resultado);

    return 0;
}