/*
5. Escreva um programa que leia uma seq��ncia num�rica inteira positiva �n�
de comprimento indefinido e imprima os n�meros em ordem invertida.
Por exemplo, ao receber �1987789654222�, o programa dever� imprimir �2224569877891�. Dica: use �realloc()�.
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, *n, tam=0;
    //n = malloc(3* sizeof(int) );
    n = realloc(n, 6);

    printf("Digite uma sequencia numerica: ");
    scanf("%d", &n);



}
