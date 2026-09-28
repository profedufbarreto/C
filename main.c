#include<stdio.h>
#include<locale.h>
#include<string.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    int n, a = 0, b = 1, c;
    printf("Digite quantos termos da Fibonacci: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}