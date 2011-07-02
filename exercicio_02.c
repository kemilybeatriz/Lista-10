/*
2. Escreva um programa para a leitura de uma frase a partir de um
ponteiro para caracteres. O programa deve alocar dinamicamente uma
quantidade de memória suficiente para uma frase de 30 caracteres.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 30

void main()
{
    char *s;
    s = malloc(30* sizeof(char) );

    if(!s)
    {
        printf("Falanha na solicitacao de memoria.\n");
        exit(1);
    }

    gets(s);
    puts(s);

    free(s);
}
