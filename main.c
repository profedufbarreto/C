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
    const int TAM_CARTELA = 5;
    const int MAX_NUMERO = 20;

    int cartela[TAM_CARTELA];
    int marcado[TAM_CARTELA];
    int sorteado[MAX_NUMERO + 1];

    int numero;
    int rodadas = 0;
    int acertos = 0;

    srand(time(NULL));

    // Leitura da cartela
    printf("Monte sua cartela com %d numeros (1 a %d):\n", TAM_CARTELA, MAX_NUMERO);
    for (int i = 0; i < TAM_CARTELA; i++) {
        do {
            printf("Numero %d: ", i + 1);
            scanf("%d", &cartela[i]);
        } while (cartela[i] < 1 || cartela[i] > MAX_NUMERO);

        marcado[i] = 0;
    }

    // Nenhuma bola saiu ainda
    for (int i = 0; i <= MAX_NUMERO; i++) {
        sorteado[i] = 0;
    }

    getchar(); // consome o ENTER que sobrou do ultimo scanf

    // Sorteio das bolas
    do {
        printf("\nPressione ENTER para sortear a proxima bola...");
        getchar();

        // Sorteia uma bola que ainda nao saiu
        do {
            numero = rand() % MAX_NUMERO + 1;
        } while (sorteado[numero] == 1);

        sorteado[numero] = 1;
        rodadas++;

        printf("Bola %d: %d\n", rodadas, numero);

        // Confere a cartela
        for (int i = 0; i < TAM_CARTELA; i++) {
            if (cartela[i] == numero) {
                marcado[i] = 1;
                acertos++;
                printf("Voce tem esse numero!\n");
            }
        }

        // Mostra a cartela
        printf("Cartela: ");
        for (int i = 0; i < TAM_CARTELA; i++) {
            if (marcado[i]) {
                printf("[%d] ", cartela[i]);
            } else {
                printf(" %d  ", cartela[i]);
            }
        }
        printf("\n");

    } while (acertos < TAM_CARTELA);

    printf("\nBINGO! Voce completou a cartela com %d bolas sorteadas.\n", rodadas);

    return 0;
}