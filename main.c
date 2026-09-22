#include<stdio.h>
#include<locale.h>
//#include<windows.h>

void somar(int a, int b){
    int resultado;
    printf("\nDigite um valor para a: ");
    scanf("%d", &a);
    printf("\nDigite um valor para b: ");
    scanf("%d", &b);
    resultado = a + b;
    printf("O resultado é: %d\n", resultado);
}

int soma(int a, int b){
    return a + b;
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int num1, num2;
    int resultado1;

    somar(num1, num2);

    resultado1 = soma(4, 2);
    
    printf("%d\n", resultado1);

    return 0;
}