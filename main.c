#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    
    int n, pos, valor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n + 1];

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite a posição de inserção (0 a %d): ", n);
    scanf("%d", &pos);
    printf("Digite o valor a inserir: ");
    scanf("%d", &valor);

    for(int i = n; i > pos; i--){
        v[i] = v[i - 1];
    }
    
    v[pos] = valor;
    n++;

    printf("Vetor após inserção:\n");
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    }

    printf("\n");

    return 0;
}