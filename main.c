#include<stdio.h>
#include<locale.h>
//#include<windows.h>

void verificarParOuImpar(int num){
    if(num % 2 == 0){
        printf("O número %d é par!\n", num);
    }else{
        printf("O número %d é ímpar!\n", num);
    }
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int numero; 

    printf("Digite um número: ");
    scanf("%d", &numero);

    verificarParOuImpar(numero);

    return 0;
}