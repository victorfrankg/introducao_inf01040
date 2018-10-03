#include <stdio.h>
main()
{
    int a,b,c,d,e; /*Variáveis declaradas*/

    printf("Inserir valor 1:");/*Solicitando valor 1*/
    scanf("%d",&a);            /*Lendo valor 1*/
    printf("Inserir valor 2:");/*Solicitando valor 2*/
    scanf("%d",&b);            /*Lendo valor 2*/
    printf("Inserir valor 3:");/*Solicitando valor 2*/
    scanf("%d",&c);            /*Lendo valor 3*/

    d=a*b*c;                   /*Operações*/
    e=a+b+c;
    printf("%d * %d * %d = %d \n", a,b,c,d); /*Saída -> Resultados*/
    printf("%d + %d + %d = %d \n", a,b,c,e);


}
