// O produto vetorial AxB de dois vetores A=[ax,ay] e B=[bx,by] é um vetor perpendicular ao plano formado pelos vetores A e B, de módulo igual a |ax*by-ay*bx|. Faça um algoritmo que leia as componentes ax,ay,bx e by dos vetores A e B, e calcule e escreva o módulo do vetor resultante do produto vetorial.
#include <stdio.h>
#include <locale.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float ax, ay, bx, by, prodVetorial, prodVetorialMod;

    printf("Digite o valor do componente ax: ");
    scanf("%f", &ax);
    printf("Digite o valor do componente ay: ");
    scanf("%f", &ay);
    printf("Digite o valor do componente bx: ");
    scanf("%f", &bx);
    printf("Digite o valor do componente by: ");
    scanf("%f", &by);

    prodVetorial = ax * by - ay * bx;
    prodVetorialMod = abs(prodVetorial);

    printf("O Produto Vetorial das componentes informadas vale %f", prodVetorialMod);
}