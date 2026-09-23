#include<stdio.h>
#include<locale.h>
//#include<windows.h>



int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   int tab;

   printf("Digite um valor para a tabuada: ");
   scanf("%d", &tab);

   for(int i = 0; i < 11; i++){
        int resultado = i * tab;
        printf("O resultado de %d x %d é: %d\n", tab, i, resultado);
   }

    return 0;
}