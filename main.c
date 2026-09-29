#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int alvoI, alvoJ, alvoX, alvoY;
    int contador = 0;

    printf("Digite o valor do código: ");
    scanf("%d %d %d %d", &alvoI, &alvoJ, &alvoX, &alvoY);

        for(int i = 0; i <= 9; i++){
            for(int j = 0; j <= 9; j++){
                for(int x = 0; x <= 9; x++){
                    for(int y = 0; y <= 9; y++){
                        contador++;
                        printf("Tentativa %d: %d %d %d %d\n", contador, i, j, x, y);
                        if(i == alvoI && j == alvoJ && x == alvoX && y == alvoY){
                            printf("\nCódigo encontrado após %d tentativas.", contador);
                            return 0;
                        }
                    }
                }
            }
        }

    return 0;
}