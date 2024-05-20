// Faça um algoritmo que leia um valor N, representando o lado de um quadrado, e calcule e escreva a área do quadrado. Dica: A área de um quadrado de lado N é dada por N x N.
#include <stdio.h>

int main()
{
    float valor, valorq;
    printf("Digite um valor: ");
    scanf("%f", &valor);

    valorq = valor * valor;

    printf("O quadrado do valor %f vale %f", valor, valorq);
}