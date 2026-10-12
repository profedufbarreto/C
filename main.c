#include<stdio.h>
#include<locale.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    
    int a = 0;
    int b = 5;

    if(a){
        printf("A é falso, então !a é verdadeiro\n");
    }

    if(!b){
        printf("B é verdadeiro, então !b seria falso\n");
    }else{
        printf("Como b é diferente de 0, !b é falso\n");
    }

    return 0;
}