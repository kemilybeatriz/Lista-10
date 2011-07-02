/*
Aloca espaço dinamicamente para uma string, solicita a entrada do usuário e,
em seguida, imprime uma string de trás para frente.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char *s;
    int t;
    s = malloc(80);
    if(!s)
    {
        printf("Falha na silicitacao de memoria.\n");
        exit(1);
    }
    gets(s);
    for(t=strlen(s)-1; t>=0; t--)
    {
        putchar( *(s+t) );
    }
    free(s);
}
