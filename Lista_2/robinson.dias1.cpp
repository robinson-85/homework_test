/* 1. Escreva um programa que exiba na tela a tabuada de um número que deverá ser
informado pelo usuário (deverá ser usada qualquer estrutura de repetição). Exemplo:
Digite um número: 4.
4x0 = 0               4x6 = 24
4x1 = 4               4x7 = 28
4x2 = 8               4x8 = 32
4x3 = 12              4x9 = 36
4x4 = 16              4x10 = 40
4x5 = 20                                 */

#include <stdio.h>
#include <math.h>

int main(){
    int n = 0, i = 0;
    printf("\nPor favor, informe a tabuada que você deseja: \n");
    scanf("%d",&n);
 
    for(int i = 0; i<=10; i++){
        printf("%d x %d = %d \n", n, i, n*i);
    }

    getchar();
    return 0;

}