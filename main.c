#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    int v[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Vetor invertido: \n");
    for(int i = 4; i >= 0; i--){
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}