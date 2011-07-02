/*
1. Faça um programa que leia uma matriz 3x3, do tipo inteiro,
de forma dinâmica e construa uma função “int determinante(int *mat)” que
retorna o determinante da matriz “mat”.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *mat, det;
    mat = malloc(3*3*sizeof(int));

    if(!mat)
    {
        printf("Falha na solicitacao de memoria.\n");
    }

    leMatriz(mat);
    determinante3x3(mat, det);
    printf("%d", det);
}

void leMatriz(int mat[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Informe um valor para a posicao %dx%d: \n", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
}

int determinante3x3(int mat[3][3], int det)
{
    int linha, coluna;
    det = (
           ( mat[0][0] * ( ((mat[1][1])*(mat[2][2])) - ((mat[1][2])*(mat[2][1])) ) ) -
           ( mat[0][1] * ( ((mat[1][0])*(mat[2][2])) - ((mat[1][2])*(mat[2][0])) ) ) +
           ( mat[0][2] * ( ((mat[1][0])*(mat[2][1])) - ((mat[1][1])*(mat[2][0])) ) )
           );
    return det;

}

