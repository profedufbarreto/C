#include<stdio.h>
#include<locale.h>
//#include<windows.h>
#include<string.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   int i = 1;
   while(i <= 50){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
   }


    return 0;
}