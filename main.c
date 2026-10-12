#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    
    int x = 0;
    int y = 5; //em C, valores diferentes de 0 são considerados verdadeiro(1).

    printf("!x = %d\n", !x);
    printf("!y = %d\n", !y);

    return 0;
}