// Faça um algoritmo que leia 3 valores reais, notas de um aluno, e escreva sua média aritmética. Dica: A média aritmética de um conjunto de valores é dada pela soma dos valores dividido pela quantidade de valores considerados. m=(v1+v2+v3)/3
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;

    printf("Qual foi a pontuação do aluno na Primeira Avaliação? ");
    scanf("%f", &nota1);
    printf("Qual foi a pontuação do aluno na Segunda Avaliação? ");
    scanf("%f", &nota2);
    printf("Qual foi a pontuação do aluno na Terceira Avaliação? ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno foi de %f", media);
}