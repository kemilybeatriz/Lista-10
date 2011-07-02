/*
3. Escreva uma função “int vogais(char *frase)” para o exercício anterior
que retorna a quantidade de vogais existentes no vetor de caracteres “frase”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    printf("%d vogais.", vogais(s));

    free(s);
}

int vogais(char *frase)
{
    int i, vogal=0, tamanho = strlen(frase);

    for(i=0; i<tamanho; i++)
    {
        if(
            *(frase+i) == 'a' ||
            *(frase+i) == 'A' ||
            *(frase+i) == 'e' ||
            *(frase+i) == 'E' ||
            *(frase+i) == 'i' ||
            *(frase+i) == 'I' ||
            *(frase+i) == 'o' ||
            *(frase+i) == 'O' ||
            *(frase+i) == 'u' ||
            *(frase+i) == 'U'
        )
        {
            vogal++;
        }
    }
    return vogal;
}
