#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>

int soma(int n) {
    int total = 0;

    for (int i = 1; i <= n; i++) {
        total += i;
    }

    return total;
}


int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
   printf("Soma de 1 a 5: %d\n", soma(5));
    return 0;

    return 0;
}

