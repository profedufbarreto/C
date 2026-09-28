#include<stdio.h>
#include<locale.h>
#include<string.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int n, contador = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    while(n > 0){
        contador++;
        n /= 10;
    }

    printf("Quantidade de dígitos: %d\n", contador);

    return 0;
}