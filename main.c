#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num1, num2, soma;

    printf("Digite um valor para num1: ");
    scanf("%d", &num1);

    printf("Digite um valor para num2: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado da soma é: %d\n", soma);

    return 0;
}