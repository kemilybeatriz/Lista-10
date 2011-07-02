/*
5. Escreva um programa que leia uma seqüência numérica inteira positiva “n”
de comprimento indefinido e imprima os números em ordem invertida.
Por exemplo, ao receber “1987789654222”, o programa deverá imprimir “2224569877891”. Dica: use “realloc()”.
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
