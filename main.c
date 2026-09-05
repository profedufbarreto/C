#include<stdio.h>


int main(){

    // SetConsoleOutputCP(65001);
    // SetConsoleCP(65001);

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Elemento na linha 1, coluna 2: %d\n\n", matriz[1][2]);

    printf("--- Exibindo a Matriz Completa ---\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}