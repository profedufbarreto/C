#include<stdio.h>
#include<locale.h>
#include<string.h>
//#include<windows.h>

void fibonacci(int termos){
    int a = 0, b = 1, c;
    printf("Sequência de Fibonacci (%d termos): \n", termos);
    for(int i = 1; i <= termos; i++){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    fibonacci(10);

    return 0;
}