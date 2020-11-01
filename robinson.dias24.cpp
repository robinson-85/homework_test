/* 24. Faça um programa que apresente o menu de opções a seguir, permita ao usuário
escolher a opção desejada, receba os dados necessários para executar a operação e
mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com
restrições do tipo salário inválido.
Menu de opções:
1. Imposto
2. Novo salário
3. Classificação
4. Finalizar o programa
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto
usando as regras a seguir.

    Salários                          % do Imposto
menor que R$500,00,                        5
De R$500,00, a R$850,00                    10
Acima de R$850,00                          15

Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo
salário usando as regras a seguir.

    Salários                                        Aumento
Maiores que R$1500,00                               R$25,00
De R$750,00(inclusive) a R$1500,00(inclusive)       R$50,00
De R$450,00(inclusive) a R$750,00                   R$75,00
Menores que R$450,00                                R$100,00

Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando
esta tabela:

    Salários                                Classificação
Até R$700,00 R$                             Mal remunerado
Maiores que R$700,00 R$                     Bem remunerado             */

#include <stdio.h>
int main(){
    float salario, valor_imposto, resposta, novo_salario;
    printf("Digite as opções: \n 1. Imposto \n 2. Novo salário \n 3. Classificação \n 4. Finalizar o programa \n");
    scanf("%f", &resposta);
    
    if(resposta == 1){
        printf("Digite o seu salario: \n");
        scanf("%f", &salario);

        if(salario <500){
            valor_imposto = salario /100 * 5;
        }
        else if(salario>=500 && salario <=850){
            valor_imposto = salario /100 * 10;
        }
        else{
            valor_imposto = salario /100 * 15;
        }
        printf("O valor do imposto sera: %f\n", valor_imposto);
    }

    if(resposta == 2){
        printf("Digite o seu salario: \n");
        scanf("%f", &salario);

        if(salario>1500){
            novo_salario = salario + 25;
        }
        else if(salario>=750 && salario<=1500){
            novo_salario = salario + 50;
        }
        else if(salario>=450 && salario<=750){
            novo_salario = salario + 75;
        }
        else{
            novo_salario = salario + 100;
        }

        printf("O valor do seu novo salario sera: %.2f \n", novo_salario);
    }


    if(resposta == 3){
        printf("Digite o seu salario: \n");
        scanf("%f", &salario);

        if(salario>=700){
            printf("A sua classificacao e: Mal remunerado. \n");
        }
        else{
            printf("A sua classificacao e: Bem remunerado. \n");
        } 
    }


    if(resposta == 4){
        printf("Programa encerrado! \n");
    }

    getchar();
    return 0;
}