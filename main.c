#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);
    const int LANCAMENTOS = 10;

    int dados[LANCAMENTOS];
    int soma = 0;
    int seis = 0;

    srand(time(NULL));

    // Sorteio
    for (int i = 0; i < LANCAMENTOS; i++) {
        dados[i] = rand() % 6 + 1;
        soma += dados[i];

        if (dados[i] == 6) {
            seis++;
        }
    }

    // Resultados
    printf("Resultados dos lancamentos:\n");
    for (int i = 0; i < LANCAMENTOS; i++) {
        printf("Lancamento %d: %d\n", i + 1, dados[i]);
    }

    printf("\nSoma: %d\n", soma);
    printf("Quantidade de vezes que saiu 6: %d\n", seis);

    return 0;
}