/*
7. Fa�a um programa para ler uma seq��ncia de valores inteiros positivos
e imprima a quantidade de vezes que aparecem os n�meros 1, 2 e 3, nesta
ordem. A seq��ncia de valores possui tamanho definido pelo usu�rio.
O programa encerra a leitura quando se digita um n�mero negativo ou nulo. Use �malloc()�.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *v, tam, i, cont=0;

    printf("\tSEQUENCIA NUMERICA\n");
    printf("Informe o tamanho da sequencia: ");
    scanf("%d", &tam);

    v = malloc(tam*sizeof(int));

    for(i=0; i<tam; i++)
    {
        printf("\nDigite o %do num da sequencia: ", i+1);
        scanf("%d", (v+i) );
    }

    for(i=0; i<tam; i++)
    {
        if(*(v+i)==1)
        {
            //if(*(v+i+1)==2){if(*(v+i+3)==3){cont++;}}

        }

    }
    printf("%d sequencias de 123.", cont);
}
