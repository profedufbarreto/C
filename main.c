#include<stdio.h>
#include<locale.h>
//#include<windows.h>
#include<string.h>

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

   char senha[20];

   printf("Digite a senha: ");
   scanf("%s", senha);

   while(strcmp(senha, "1234") != 0){
    printf("Senha incorreta! Tente novamente!");
    scanf("%s", senha);
   }

   printf("Acesso liberado!\n");

    return 0;
}