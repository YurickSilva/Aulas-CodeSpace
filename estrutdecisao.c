#include <stdio.h>

/*int main(){
    int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {
        if(renda < 2000){printf("Você tem direito ao desconto.\n");}
            else{
                printf("Você não tem direito ao desconto devido à renda.\n");
            }
    }
        else {
            printf("Rejeitado com relação a idade.\n");
        }



}*/
/*int main(){


    int idade, ndependentes;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%d", &ndependentes);

    if (idade >= 18 && idade <= 60) {
        if(renda < 3000){
            if (ndependentes > 2){
                printf("Você atende aos critérios para o benefício. \n");
                } else {
                    printf("Você não atende ao numero minimo de dependentes. \n");}
        } else { 
            printf("Você não atende ao critério de renda. \n");}
    } else {
        printf("Você não atende ao critério de idade. \n");} 
}
*/
int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("O número é positivo.\n");
    } else if (numero == 0){
        printf("O número é zero.\n");
        } else {
            printf("O número é negativo.\n");
        }
}