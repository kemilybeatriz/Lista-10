/*
6. Para poupar espa�o, o c�digo de um sistema de compacta��o de
dados utiliza uma representa��o de caracteres repetitivos da seguinte
maneira: se a entrada for um vetor de caracteres e se o caracter repetir
por mais de tr�s vezes, ele � comprimido em uma representa��o que utiliza
um caracter de controle, �#� por exemplo, somado � quantidade de repeti��es.
Por exemplo: �kkkkk� se transforma em �k#5�.
Outro exemplo: �abbbbbbijhkkkkkkkkabcb� se transforma em �ab#6ijhk#8abcb�.
Fa�a um programa para a leitura de uma seq��ncia de caracteres de comprimento
indefinido, de forma din�mica, e construa uma fun��o que retorne a nova
representa��o da seq��ncia. Exclua a leitura do caracter de controle definido pelo usu�rio.
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
