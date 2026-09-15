#include<stdio.h>
#include<locale.h>
#include<string.h>

int somar(int a, int b){
    return a + b;
}

int main(){

    setlocale(LC_ALL, "");

    int a, b, resultado;

    resultado = somar(5, 2);

    printf("\nO resultado da soma é: %d\n", resultado);

    return 0;
}