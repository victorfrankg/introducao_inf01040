#include <stdio.h>
#include <string.h>
int main()
{
    char vet[100],wet[100]; /*Variaveis -> strings de 100 caracteres*/

    printf("Insira uma palavra\/frase:\n"); /*Leitura da vari�vel c/gets*/
    gets(vet);

    strcpy(wet,vet);            /*C�pia de string*/
    strrev(wet);                /*Revers�o da string copiada*/

    if(strcmp(vet,wet) == 0){   /*Condi��o de compara��o*/
        printf("A palavra\/frase eh um palindromo!");
    }else
        printf("A palavra\/frase nao eh um palindromo!");

}

//P3QOQXQ8tH
