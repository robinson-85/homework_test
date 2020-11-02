/* 2. Escreva um programa que exiba na tela a quantidade de números ímpares
existentes entre dois números que o usuário digitar (testar inclusive os números
digitados). */

#include <stdio.h>
int main(){
    int n1, n2, impar = 0;
    printf("Digite dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    for (int n1 = 1; n1 <= n2; n1++){
        impar = n1%2;
        if(impar)
            printf("\n%d\n",n1);
    }

    getchar();
    return 0;
}
