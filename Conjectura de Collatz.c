#include <stdio.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(CP_UTF8);

    int x;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &x);

    if (x <= 0){
        printf("Por favor, digite um numero positivo.\n");
        return;
    }

    printf("Sequencia de Collatz:\n");

    while (x != 1){
        printf("%d -> ", x);

        if (x % 2 == 0){
            x = x / 2;
        } else {
            x = x * 3 + 1;
        }
    }

    printf("1\n");
    printf("Processo finalizado!\n");
    getch();
}