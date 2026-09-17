#include<stdio.h>
#include<locale.h>
#include<windows.h>


int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
    // setlocale(LC_ALL, "Portuguese_Brazil.1252");
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int tab;
    int resultado;

    do{
        printf("Digite um número para a tabuada: ");
        scanf("%d", &tab);
    }while(tab > 10 || tab < 0);
        for(int i = 0; i <= 10; i++){
            resultado = tab * i;
            printf("\nO resultado é: %d * %d = %d", tab, i, resultado);
        }
    
    return 0;
}