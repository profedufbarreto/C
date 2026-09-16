#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL, "");

    int numeros[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        printf("%d\n", numeros[i]);
    }
    
    return 0;
}