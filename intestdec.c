#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de opções:\n");
    printf("1. Calcular média de duas notas\n");
    printf("2. Determinar status de aprovação\n");
    printf("3. Sair\n");
    printf("Escolha uma opção (1-3): ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
            // Testar a condição sea nota é >= 0 e <= 10
            if((nota1 >= 0 && nota1 <= 10)&&(nota2 >= 0 && nota2 <= 10)){
                media = (nota1 + nota2) / 2;
                printf("A média é: %.2f\n", media);
            } else {
                printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
                return 1; // sair do programa com código de erro

            }
            break;
        case 2:
            printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
            // Testar a condição sea nota é >= 0 e <= 10
            if((nota1 >= 0 && nota1 <= 10)&&(nota2 >= 0 && nota2 <= 10)){
                media = (nota1 + nota2) / 2;
                printf("A média é: %.2f\n", media);
                    if (media >= 7.0){
                        printf("Aprovado\n");
                    } else {
                        printf("Reprovado\n");
                    }
            } else {
                printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
            return 1; // sair do programa com código de erro
            }
            break;
        case 3:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

}
