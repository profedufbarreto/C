#include<stdio.h>
#include<locale.h>
//#include<windows.h>

void saudar(char nome[20]){
    printf("Olá %s\n", nome);
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    saudar("Edu");

    return 0;
}