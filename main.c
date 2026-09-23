#include<stdio.h>
#include<locale.h>
//#include<windows.h>

void calculaTabuada(int num){
    for(int i = 0; i <= 10; i++){
        printf("O resultado de %d x %d é: %d\n", num, i, num * i);
    }
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int numEscolhido;

    printf("Digite o número escolhido: ");
    scanf("%d", &numEscolhido);

    calculaTabuada(numEscolhido);

    return 0;
}