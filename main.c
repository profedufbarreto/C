#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>

void tabuada(int numero, int contador) {

    if (contador > 10) {
        return;
    }

    printf("%d x %d = %d\n",
           numero, contador, numero * contador);

    tabuada(numero, contador + 1);
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    tabuada(7, 1);

    return 0;
}

