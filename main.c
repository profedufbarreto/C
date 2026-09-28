#include<stdio.h>
#include<locale.h>
//#include<windows.h>
#include<string.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int n, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while(n > 0){
        soma = soma + n % 10;
        n = n / 10;
    }

    printf("Soma dos dígitos: %d\n", soma);

    return 0;
}