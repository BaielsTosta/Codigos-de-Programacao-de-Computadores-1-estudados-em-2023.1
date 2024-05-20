//Faça um algoritmo que leia 2 valores reais v1 e v2 e calcule e escreva a área do triângulo que tem base igual a v1 e altura igual a v2.Dica : A área de um triângulo é dada pela expressão : (base x altura) / 2
#include <stdio.h>
#include <locale.h>
    int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura, area;

    printf("Digite a medida de Altura do Triângulo: ");
    scanf("%f", &altura);
    printf("Digite a medida de Base do Triângulo: ");
    scanf("%f", &base);

    area = (base * altura) / 2;

    printf("A Área do Triângulo vale %f", area);
}