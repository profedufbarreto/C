#include<stdio.h>
#include<locale.h>
//#include<windows.h>

void tabuada(int num){
    printf("Digite um número: ");
    scanf("%d", &num);
    for(int i = 0; i < 11; i++){
        int resultado = num * i;
        printf("O resultado de %d x %d é: %d\n", num, i, resultado);
    }
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int num;

    tabuada(num);

    return 0;
}