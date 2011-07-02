/*
6. Para poupar espaço, o código de um sistema de compactação de
dados utiliza uma representação de caracteres repetitivos da seguinte
maneira: se a entrada for um vetor de caracteres e se o caracter repetir
por mais de três vezes, ele é comprimido em uma representação que utiliza
um caracter de controle, “#” por exemplo, somado à quantidade de repetições.
Por exemplo: “kkkkk” se transforma em “k#5”.
Outro exemplo: “abbbbbbijhkkkkkkkkabcb” se transforma em “ab#6ijhk#8abcb”.
Faça um programa para a leitura de uma seqüência de caracteres de comprimento
indefinido, de forma dinâmica, e construa uma função que retorne a nova
representação da seqüência. Exclua a leitura do caracter de controle definido pelo usuário.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char *vet = malloc(sizeof(char));
    int i;

    for(i=0; vet[i]; i++)
    {
        vet=realloc(vet, i+1);

    printf("Informe um vetor de caracteres: ");
    fflush(stdin);
    scanf("%c", &vet[i]);
    }
}
/*
void representa(char *vet);
{
    int rep=0;
    tam = strlen(vet);
    for(i=0; i<tam; i++)
    {
        if(vet[i]==vet[i+1])
        {
            rep++;
        }
        for()
    }
}
*/
