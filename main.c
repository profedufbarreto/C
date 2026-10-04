#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    int soma = 0;

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", (float)soma / n );

    return 0;
}