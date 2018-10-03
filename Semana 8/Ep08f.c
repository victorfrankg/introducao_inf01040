#include <stdio.h>
#include <string.h>
int main()
{
    char vet[100],wet[100]; /*Variaveis -> strings de 100 caracteres*/

    printf("Insira uma palavra\/frase:\n"); /*Leitura da variável c/gets*/
    gets(vet);

    strcpy(wet,vet);            /*Cópia de string*/
    strrev(wet);                /*Reversão da string copiada*/

    if(strcmp(vet,wet) == 0){   /*Condição de comparação*/
        printf("A palavra\/frase eh um palindromo!");
    }else
        printf("A palavra\/frase nao eh um palindromo!");

}

//P3QOQXQ8tH
