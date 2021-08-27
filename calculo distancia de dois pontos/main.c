/*
1. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   //Declaração de variaveis
   int x1, x2, y1, y2;
   float d;
   //Entrada de dados
   printf(" Digite um valor para x1: ");
   scanf("%d", & x1);
   printf(" Digite um valor para x2: ");
   scanf("%d", & x2);
   printf(" Digite um valor para y1: ");
   scanf("%d", & y1);
   printf(" Digite um valor para y2: ");
   scanf("%d", & y2);

   //processamento da equação
   d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

   //Retorno da variavel
   printf("A distância entre os pontos: %f",d);
    return 0;
}
