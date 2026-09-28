#include<stdio.h>
#include<locale.h>
#include<string.h>
//#include<windows.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   for(int i = 1; i <= 10; i++){
    for(int j = 1; j <= 10; j++){
        printf("%d x %d = %d\n", i, j, i * j);
    }
    printf("\n");
   }

    return 0;
}