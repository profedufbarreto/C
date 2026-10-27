#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>

void soma(){
    int a, b, resultado;
    printf("Digite um valor para a: ");
    scanf("%d", &a);
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    resultado = a + b;
    printf("A soma de %d + %d é: %d\n", a, b, resultado);
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    
    soma();

    return 0;
}