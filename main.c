#include<stdio.h>
#include<locale.h>
#include<string.h>

void saudar(char nome[]){
    printf("Olá %s\n", nome);
}

int main(){

    setlocale(LC_ALL, "");

    char n[50];

    printf("Digite seu nome: ");
    fgets(n, sizeof(n), stdin);

    saudar(n);
    
    return 0;
}