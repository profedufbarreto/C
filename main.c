#include<stdio.h>
#include<locale.h>
#include<string.h>
//#include<windows.h>

void contarVogais(char palavra[]) {
    int contador = 0;
    for (int i = 0; i < strlen(palavra); i++) {
        char c = palavra[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            contador++;
        }
    }
    printf("A palavra '%s' tem %d vogais.\n", palavra, contador);
}

int main(){

    // setlocale(LC_ALL, "pt_BR.UTF8");
     setlocale(LC_ALL, "Portuguese_Brazil.1252");
    //SetConsoleOutputCP(65001);
    //SetConsoleCP(65001);

    char p[20];

    printf("Digite um palavra: ");
    scanf("%s", p);

    contarVogais(p);

    return 0;
}