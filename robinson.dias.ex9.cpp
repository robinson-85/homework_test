/* 9. Faça um programa que receba duas notas de seis alunos. Calcule e mostre:

Média aritmética                         Mensagem
Até 3                                    Reprovado
Entre 3 e 7                                Exame
De 7 para cima                           Aprovado

■ a média aritmética das duas notas de cada aluno; e
■ a mensagem que está na tabela a seguir:
■ o total de alunos aprovados;
■ o total de alunos de exame;
■ o total de alunos reprovados;
■ a média da classe. */

#include <stdio.h>
int main(){
    float n1, n2, media_aritmetica, mensagem, aprovados, reprovados, exame, media_classe;
    printf("\nDigite uma nota: \n");
    scanf("%f",&n1);
    printf("\nDigite a segunda nota: \n");
    scanf("%f",&n2);

    media_aritmetica = (n1+n2)/2;

    printf("\nA media aritmetica do aluno e: %.2f \n", media_aritmetica);



    getchar();
    return 0;

}

