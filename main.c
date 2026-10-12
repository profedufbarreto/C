#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    
    int n, valor, encontrado = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite o valor a buscar: ");
    scanf("%d", &valor);

    for(int i = 0; i < n; i++){
        if(v[i] == valor){
            encontrado = 1;
            printf("Valor encontrado na posição %d\n", i);
            break;
        }
    }

    if(!encontrado){
        printf("Valor NÃO encontrado\n");
    }

    return 0;
}