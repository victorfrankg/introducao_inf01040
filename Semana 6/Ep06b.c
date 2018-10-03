#include <stdio.h>
int main()
{
    int a,n=1,soma=0;

    printf("Insira um numero inteiro:");
    scanf("%d",&a);
    while(n<a)
        {
        if(a%n==0)
            soma=soma+n;
        n++;
        }
    if(soma==a)
        printf("%d eh um numero perfeito",n);
    else
        printf("%d nao eh um numero perfeito",n);
}
