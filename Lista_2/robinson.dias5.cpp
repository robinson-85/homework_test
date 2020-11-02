/* 5. Escreva um programa que calcule o fatorial de um número informado pelo usuário.
Dica: O fatorial de um número N é dado pela fórmula:
N! = 1 * 2 * 3 * 4 * 5 * ... * N.       */

#include <stdio.h>
int main(){
    int fatorial, n;
    printf("Insira um valor pelo qual deseja calcular o seu fatorial: \n");
    scanf("%d", &n);

    for (int fatorial = 1; n > 1; n = n - 1){
        fatorial = fatorial * n;
        printf("\nValor do fatorial calculado: %d\n", fatorial);
    }
    

    getchar();
    return 0;
}