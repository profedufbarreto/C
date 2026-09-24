#include<stdio.h>
#include<locale.h>
//#include<windows.h>
#include<string.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    while(numero <= 0) {
        printf("Número inválido! Digite novamente: ");
        scanf("%d", &numero);
    }

    printf("Número válido: %d\n", numero);

    return 0;
}