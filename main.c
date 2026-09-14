#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int opcao;
    float soma, subt, mult, div;
    int num1, num2;

    printf("Digite o número 1: ");
    scanf("%d", &num1);

    printf("Digite o número 2: ");
    scanf("%d", &num2);

    printf("\nDigite: ");
    printf("\n1 - Soma");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão\n");
    scanf("%d", &opcao);

    float resultado;

    if(opcao == 1){
        resultado = num1 + num2;
        printf("O resultado de %d + %d: %f", num1, num2, resultado);
    }else if(opcao == 2){
        resultado = num1 - num2;
        printf("O resultado de %d - %d: %f", num1, num2, resultado);
    }else if(opcao == 3){
        resultado = num1 * num2;
        printf("O resultado de %d * %d: %f", num1, num2, resultado);
    }else if(opcao == 4){
        if(num1 <= 0){
            printf("Essa divisão não pode ser feita!");
        }else{
            resultado = num1 / num2;
            printf("O resultado de %d / %d: %f", num1, num2, resultado);
        }
    }else{
        printf("Digite um valor válido!");
    }

    return 0;
}