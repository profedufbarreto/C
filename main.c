#include<stdio.h>
#include<locale.h>
//#include<windows.h>

void numeros(){
    int num[] = {1, 2, 3, 4, 5,};
    for(int i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    }
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   numeros();

    return 0;
}