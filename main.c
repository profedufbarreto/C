#include<stdio.h>


int main(){

    // SetConsoleOutputCP(65001);
    // SetConsoleCP(65001);

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tab, resultado;

    printf("Qual tabuada você quer? ");
    scanf("%d", &tab);
    
    for(int i = 0; i < 10; i++){
        resultado = tab * numeros[i];
        printf("O resultado é: %d\n", resultado);
    }

    return 0;
}