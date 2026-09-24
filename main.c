#include<stdio.h>
#include<locale.h>
//#include<windows.h>
#include<string.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   int opcao;

   while(opcao != 0){
    printf("\nMenu: \n");
    printf("1 - Depositar\n");
    printf("2 - Sacar\n");
    printf("3 - Consultar\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            printf("Você escolheu Depositar\n");
            break;
        case 2: 
            printf("Você escolheu Sacar\n");
            break;
        case 3:
            printf("Você escolheu Consultar\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
   }

    return 0;
}