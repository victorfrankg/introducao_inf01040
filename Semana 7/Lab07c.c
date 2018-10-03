#include <stdio.h>
#define MAX 20 /*Definição Var*/
int main()
{

     /*Vetor Inteiro valor definido*/
    int i,x;        /*Variáveis de interesse*/
    for(i=0;i<MAX;i++)/*Laço de Repetição Crescente*/
        {
        printf("Insira valor:");
        scanf("%d", &vetor[i]);/*Armazena valores*/
        }
    for(x=MAX-1; x>=0; x--)/*Laço de Repetição Decrescente*/
    {
        printf("Valor:%d\n", vetor[x]);/*Imprime variáveis inversas*/
    }
}
