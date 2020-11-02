/* 15. Faça um programa que receba o preço unitário, a refrigeração (S para os 
produtos que necessitem de refrigeração e N para os que não necessitem) e a 
categoria (A — alimentação; L — limpeza; e V — vestuário) de doze produtos, 
e que calcule e mostre:

■ O custo de estocagem, calculado de acordo com a tabela a seguir.

Preço Unitário            Refrigeração       Categoria             Custo de Estocagem
                          ------------            A                   R$2,00
Até 20                    ------------            L                   R$3,00
                          ------------            v                   R$4,00
Entre 20 e 50(inclusive)    S               ----------------          R$6,00
Entre 20 e 50(inclusive)    N               ----------------          R$0,00

Menor que 50                S                      A                  R$5,00
Menor que 50                S                      L                  R$2,00
Menor que 50                S                      V                  R$4,00
Menor que 50                N                    A ou V               R$0,00            
Menor que 50                N                      L                  R$1,00

■ O imposto calculado de acordo com as regras a seguir:
Se o produto não preencher nenhum dos requisitos a seguir, seu imposto será de 2%
sobre o preço unitário; caso contrário, será de 4%.
Os requisitos são: categoria — A e refrigeração — S.
■ O preço final, ou seja, preço unitário mais custo de estocagem mais imposto.
■ A classificação calculada usando a tabela a seguir.

Preço final                             Classificação
Até R$20,00                               Barato
Entre R$20,00 e R$100,00(inclusive)       Normal
Acima de R$100,00                         Caro

■ A média dos valores adicionais, ou seja, a média dos custos de estocagem e dos
impostos dos doze produtos.
■ O maior preço final.
■ O menor preço final.
■ O total dos impostos.
■ A quantidade de produtos com classificação barato.
■ A quantidade de produtos com classificação caro.
■ A quantidade de produtos com classificação normal.*/


#include <stdio.h>
int main(){
    float preco_unitario, custo_estocagem, imposto, preco_maior = 0,  preco_menor = 10000, preco_final, media_custo_estocagem, total_imposto = 0, valores_adicionais;
    char refrigeracao, categoria;
    
    for(int i = 0; i<12; i++){
        printf("Digite o preco unitario do produto: \n");
        scanf("%f", &preco_unitario);
        printf("Se refrigeração digite S, se não N \n");
        scanf("%s", &refrigeracao);
        printf("Digite a categoria: \nA — alimentação; \nL — limpeza; e \nV — vestuário \n");
        scanf("%s", &categoria);

        if(preco_unitario<20 && categoria == 'A'){
            custo_estocagem = 2;
        }
        else if(preco_unitario<20 && categoria == 'L'){
            custo_estocagem = 3;
        }
        else if(preco_unitario<20 && categoria == 'V'){
            custo_estocagem = 4;
        }
        else if(preco_unitario>20 && preco_unitario<=50 && refrigeracao == 'S'){
            custo_estocagem = 6;
        }
        else if(preco_unitario>20 && preco_unitario<=50 && refrigeracao == 'N'){
            custo_estocagem = 0;
        }
        else if(preco_unitario<50 && refrigeracao == 'S' && categoria == 'A'){
            custo_estocagem = 5;
        }
        else if(preco_unitario<50 && refrigeracao == 'S' && categoria == 'L'){
            custo_estocagem = 2;
        }
        else if(preco_unitario<50 && refrigeracao == 'S' && categoria == 'V'){
            custo_estocagem = 4;
        }
        else if(preco_unitario<50 && refrigeracao == 'N' && categoria == 'A' || categoria == 'V'){
            custo_estocagem = 0;
        }
        else if(preco_unitario<50 && refrigeracao == 'N' && categoria == 'L'){
            custo_estocagem = 1;
        }

        printf("O custo de estocagem sera: %.2f \n", custo_estocagem);

        if(categoria == 'A' && refrigeracao == 'S'){
            imposto = preco_unitario / 100 * 4;
        }    
        else{
            imposto = preco_unitario / 100 * 2;
        }

        if(preco_final<=20){
            printf("Classificacao: Barato. \n");
        }
        else if(preco_final>20 && preco_final<=100){
            printf("Classificacao: Normal. \n");
        }
        else{
            printf("Classificacao: Caro. \n");
        }
        if(preco_unitario > preco_maior){
            preco_maior = preco_unitario;
            
        }
        if(preco_unitario < preco_menor){
            preco_menor = preco_unitario;
        }
        

        preco_final = preco_unitario + custo_estocagem + imposto;
        printf("O preco final do produto sera: %.2f \n", preco_final);
        
        total_imposto = total_imposto + imposto;

        media_custo_estocagem = media_custo_estocagem + custo_estocagem;
        }
        
        printf("O preço maior sera: %f\n", preco_maior);

        printf("O preço menor sera: %f\n", preco_menor);


        printf("A media total dos impostos sera: %.2f \n", total_imposto/12);

        printf("A media do custo de estocagem sera: %.2f \n", media_custo_estocagem/12);

    getchar();
    return 0;
}