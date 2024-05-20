// O coeficiente angular de um segmento de reta AB dado pelos pontos A(x1,y1) e B(x2,y2) representa a inclinação do segmento de reta, e pode ser calculado por (y2-y1)/(x2-x1). Faça um algoritmo que leia, para 3 pontos A, B e C, suas coordenadas x e y, e calcule e escreva os coeficientes angulares das retas AB, BC e AC.
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float ax, ay, bx, by, cx, cy, ca1, ca2, ca3;

    printf("Digite o valor do componente ax: ");
    scanf("%f", &ax);
    printf("Digite o valor do componente ay: ");
    scanf("%f", &ay);
    printf("Digite o valor do componente bx: ");
    scanf("%f", &bx);
    printf("Digite o valor do componente by: ");
    scanf("%f", &by);
    printf("Digite o valor do componente cx: ");
    scanf("%f", &cx);
    printf("Digite o valor do componente cy: ");
    scanf("%f", &cy);

    ca1 = (by - ay) / (bx - ax);
    ca2 = (cy - by) / (cx - bx);
    ca3 = (cy - ay) / (cx - ax);

    printf("O valor do Coeficiente Angular de AB vale %f. \n O valor do Coeficiente Angular de BC vale %f. \n O valor do Coeficiente Angular de AC vale %f. \n", ca1, ca2, ca3);
}
