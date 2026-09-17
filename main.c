#include<stdio.h>
#include<locale.h>
#include<windows.h>


int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
    // setlocale(LC_ALL, "Portuguese_Brazil.1252");
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int contador;
    

    printf("Digite um valor para ser o contador: ");
    scanf("%d", &contador);

    while(contador >= 0){
        contador--;
        printf("\n%d", contador);
    }
    
    printf("\nBOoomMmMmMm");

    return 0;
}