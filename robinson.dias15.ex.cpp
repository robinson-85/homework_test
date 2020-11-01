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