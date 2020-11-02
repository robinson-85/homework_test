/* 9. Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
■ a média aritmética das duas notas de cada aluno; e
■ a mensagem que está na tabela a seguir

Média aritmética                         Mensagem
Até 3                                    Reprovado
Entre 3 e 7                                Exame
De 7 para cima                           Aprovado

■ o total de alunos aprovados;
■ o total de alunos de exame;
■ o total de alunos reprovados;
■ a média da classe. */

#include <stdio.h>
int main(){
    float n1, n2, media_aritmetica, media_aritmetica_geral, mensagem, aprovado = 0, reprovado = 0,  exame = 0, media_classe = 0;
    
    for(int i = 0; i<=6; i++){
    printf("\nDigite uma nota: \n");
    scanf("%f",&n1);
    printf("\nDigite a segunda nota: \n");
    scanf("%f",&n2);

    media_aritmetica = (n1+n2)/2;

    printf("\nA media aritmetica do aluno e: %.2f \n", media_aritmetica);

    if(media_aritmetica < 3){
        printf("Voce esta Reprovado! \n");
        reprovado = reprovado + 1;
    }
    else if(media_aritmetica >= 3 && media_aritmetica >= 7){
        printf("Voce esta de Exame! \n");
        exame = exame + 1;
    }
    else{
        printf("Voce esta Aprovado! \n");
        aprovado = aprovado + 1;
    }

    media_classe = media_classe + media_aritmetica;

    }

    media_classe = media_classe/6;
    printf("\nA media da classe e: %.2f \n", media_classe);

    getchar();
    return 0;

}

