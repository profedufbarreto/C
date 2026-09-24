#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF8");
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while(numero <= 5){
        printf("Número: %d\n", numero);
        numero++;
    }
    
    return 0;
}