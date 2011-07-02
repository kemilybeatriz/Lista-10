/*
4. Escreva um programa que, fazendo uso de ponteiros, retira os espaços em branco de
uma frase. Esta frase também deverá ser armazenada num espaço de memória alocado dinamicamente.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char *frase;

    frase = malloc(30* sizeof(char) );

    if(!frase)
    {
        printf("Falha na solicitacao de memoria.\n");
        exit(1);
    }

    gets(frase);

    printf("%s",tiraEspaco(frase));

    puts(frase);

    free(frase);
}

void tiraEspaco(char s[30])
{
    int i, j, t, k, esp=0, tamanho = strlen(s);

    for(i=0; i<tamanho; i++)
    {
        if(s[i] == ' ')
        {
            for(t=i; s[t]== ' '; t++)
            {
                esp++;
            }

            for(k=i, j=(i+esp-1); s[k]; j++)
            {
                s[k] = s[j+1];
                k++;
            }
        }
        esp=0;
    }
    //printf("%d\n",strlen(s));
    s[strlen(s)]=NULL;
}
