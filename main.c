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

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int ordenado = 1;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            ordenado = 0;
            break;
        }
    }

    if (ordenado) {
        printf("O vetor esta ordenado de forma crescente\n");
    } else {
        printf("O vetor NAO esta ordenado\n");
    }

    return 0;
}