#include <stdio.h>
int main()
{
    int a; /*Variáveis*/
    printf("Insira valor:"); /*Solicita e lê valor*/
    scanf("%d",&a);

    while(1)
    {
        printf("Resultado:%d \n", a);
        a--;
    }

}
