/* 3. Escreva um programa que leia 15 números inteiros e exiba na tela ao final, o maior
número que foi digitado pelo usuário. */

#include <stdio.h>
int main(){
    int numero_inteiro, numero, guarda_maior, i;
    printf("Entre com o primeiro numero inteiro: ");
    scanf("%i", &numero);
    
    guarda_maior = numero;
 

    for(i=1; i<15; i++){
    printf("\nEntre com o %d o numero inteiro: \n",i+1);
    scanf("%i", &numero);

    if(numero > guarda_maior)
        guarda_maior = numero;
    }

    printf("\nO maior numero e: %d \n", guarda_maior); 


    getchar();
    return 0;
}