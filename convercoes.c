#include <stdio.h>
/* Conversão inplicita de tipos em C
int main(){

    int a = 10; // variável do tipo int
    float b = 3.5; // variável do tipo float
    float resultado = a + b; // conversão implícita de int para float

    printf("Resultado da soma: %.2f\n", resultado); // imprime 13.50
    return 0;
}
*/
// Conversão explícita de tipos em C
int main(){
    int a = 10; // variável do tipo int
    int b = 3; // variável do tipo int
    float quociente = (float) a / b;
    printf("Quociente: %.2f\n", quociente); 
    return 0;
}