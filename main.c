#include<stdio.h>
#include<windows.h>
#include<string.h>

void saudarPessoa(char nome[]){
    printf("Olá, %s! Seja bem-vindo(a).\n", nome);
}

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char nomeDigitado[50];

    printf("Digite o seu nome: ");
    fgets(nomeDigitado, sizeof(nomeDigitado), stdin);

    nomeDigitado[strcspn(nomeDigitado, "\n")] = '\0';

    saudarPessoa(nomeDigitado);

    return 0;
}