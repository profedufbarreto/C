#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "");

    int numeros[5] = {1,2,3,4,5};

    printf("%d\n", numeros[3]);
    
    return 0;
}