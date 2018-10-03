#include <stdio.h>
main()
{
    int a,b; /*Variáveis*/


    printf("Digite velocidade em Km\/h:");/*Solicitando valor*/
    scanf("%d",&a);                       /*Lendo valor*/

    b=a/1.6099344;                        /*Operação*/

    printf("Km\/h \t Mp\/h\n\n", a,b);
    printf("%d \t  %d\n", a,b); /*Saída*/
    system("pause");
}
