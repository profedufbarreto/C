#include<stdio.h>
#include<stdbool.h>


int main(){

    // SetConsoleOutputCP(65001);
    // SetConsoleCP(65001);

    bool estaLogado = true;
    bool temPermissao = false;

    if(estaLogado && !temPermissao){
        printf("Usuário logado, mas sem permissão.\n");
    }

    printf("Valor de estaLodgado: %d\n", estaLogado);
    printf("Tamanho na memória: %zu byte\n", sizeof(bool));

    return 0;
}