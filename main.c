#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int fatorial(int n){
    if(n == 0) return 1;
    return n * fatorial(n - 1);
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   int numero = 5;

   printf("Fatorial de  %d é %d\n", numero, fatorial(numero));

    return 0;
}