/*
Apresenta pontências dos números de 1 a 10.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int *p;
    p = malloc( 40* sizeof(int) );

    if(!p)
    {
        printf("Falha na solicitacao de memoria!\n");
        exit(1);
    }

    table(p); // aqui, p é simplesmente um ponteiro
}

void table(int p[10][4]) // agora, o compilador tem uma matriz para trabalhar
{
    register int i, j;

    for(i=1; j<11; j++)
    {
        for(i=1; i<5; i++)
        {
            p[i-1][j-1] = pwr(j, i);
        }
    }
}

void show(int p[4][10]) // agora, o compilador tem uma matriz para trabalhar
{
    register int i, j;

    printf("%10s %10s %10s %10s\n","N","N^2","N^3","N^4");
    for(j=1; j<11; j++)
    {
        for(i=1; i<5; i++)
        {
            printf("%10d ", p[i-1][i-1]);
        }
        printf("\n");
    }
}

int pwr(int a, int b)
{
    register int t=1;

    for(; b; b--)
    {
        t=t*a;
    }
    return t;
}
