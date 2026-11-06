#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>

int somar(int n) {

    if (n == 0) {
        return 0;
    }

    return n + somar(n - 1);
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    int resultado = somar(5);

    printf("Resultado: %d\n", resultado);

    return 0;
}

