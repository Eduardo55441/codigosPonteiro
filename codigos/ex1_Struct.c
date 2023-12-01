/*Dada a estrutura a seguir representando as coordenadas de um ponto no sistema cartesiano.
Implemente uma fun ̧c ̃ao que, dado dois pontos fornecidos pelo usu ́ario, calcule a distˆancia
entre eles.*/

#include <stdio.h>
#include <math.h>

struct Ponto{
    float x;
    float y;
};

int main(){

    struct Ponto ponto1;
    struct Ponto ponto2;

    printf("Digite as coordenadas: \n");
    printf("Coordenadas 1: \n");
    printf("x: ");
    scanf("%d", ponto1.x);
    printf("y: ");
    scanf("%d", ponto1.y);
    printf("Coordenadas 2: \n");
    printf("x: ");
    scanf("%d", ponto2.x);
    printf("y: ");
    scanf("%d", ponto2.y);



}