#include <stdio.h>
main()
{
    int a,b; /*Vari�veis*/


    printf("Digite velocidade em Km\/h:");/*Solicitando valor*/
    scanf("%d",&a);                       /*Lendo valor*/

    b=a/1.6099344;                        /*Opera��o*/

    printf("Km\/h \t Mp\/h\n\n", a,b);
    printf("%d \t  %d\n", a,b); /*Sa�da*/
    system("pause");
}
