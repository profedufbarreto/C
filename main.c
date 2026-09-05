#include<stdio.h>


int main(){

    // SetConsoleOutputCP(65001);
    // SetConsoleCP(65001);

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i <= 9; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}