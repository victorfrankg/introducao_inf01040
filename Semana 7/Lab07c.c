#include <stdio.h>
#define MAX 20 /*Defini��o Var*/
int main()
{

     /*Vetor Inteiro valor definido*/
    int i,x;        /*Vari�veis de interesse*/
    for(i=0;i<MAX;i++)/*La�o de Repeti��o Crescente*/
        {
        printf("Insira valor:");
        scanf("%d", &vetor[i]);/*Armazena valores*/
        }
    for(x=MAX-1; x>=0; x--)/*La�o de Repeti��o Decrescente*/
    {
        printf("Valor:%d\n", vetor[x]);/*Imprime vari�veis inversas*/
    }
}
