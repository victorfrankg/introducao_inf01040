#include <stdio.h>
int main()
{
    int a; /*Vari�veis*/
    printf("Insira valor:"); /*Solicita e l� valor*/
    scanf("%d",&a);

    while(1)
    {
        printf("Resultado:%d \n", a);
        a--;
    }

}
