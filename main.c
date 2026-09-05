#include<stdio.h>
#include<windows.h>
#include<string.h>

int somar(int a, int b){
    return a + b;
}

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num1 = 4;
    int num2 = 2;

    int resultado = somar(num1, num2);

    printf("O resultado é %d\n", resultado);

    return 0;
}