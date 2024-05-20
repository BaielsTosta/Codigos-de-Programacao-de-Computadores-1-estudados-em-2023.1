// Faça um algoritmo que leia dois valores inteiros e escreva a sua soma
#include <stdio.h>

int main()
{ float n1, n2, soma;
printf("Digite o Primeiro Valor: ");
scanf("%f",&n1);
printf("Digite o Segundo Valor: ");
scanf("%f",&n2);

soma = n1+n2;

printf("A soma entre os números %f e %f vale %f", n1, n2, soma);
}