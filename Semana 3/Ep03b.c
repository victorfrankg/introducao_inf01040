#include <stdio.h>

int main()
{
    float a1, a2, a3, med;/*Vari�veis*/

    printf("Informe altura 1:");/*Solicita e l� valores 1,2 e 3*/
    scanf("%f", &a1);
    printf("Informe altura 2:");
    scanf("%f", &a2);
    printf("Informe altura 3:");
    scanf("%f", &a3);

    med = (a1+a2+a3) / 3;   /*Opera��o*/
    printf("Media: %.2f\n", med);/*Imprime res. opera��o*/

   if (med > 1.5)   /*Condicionantes opera��o M�dia*/
    printf("Media superior a 1.5m\n");
   else
    printf("Media inferior a 1.5m\n");

    if (a1 >= 1.5 && a2 >= 1.5 && a3 >= 1.5)/*Condicionantes valor a1,a2,a3*/
    printf("0 Abaixo de 1,50m\n");
    else{
    if ((a1 < 1.5 && a2 >= 1.5 && a3 >= 1.5)||(a1 >= 1.5 && a2 < 1.5 && a3 >= 1.5)||(a1 >= 1.5 && a2 >= 1.5 && a3 < 1.5))
    printf("1 Abaixo de 1,50m\n");
    else{
    if((a1 < 1.5 && a2 < 1.5 && a3 >= 1.5) ||(a1 < 1.5 && a2 >= 1.5 && a3 < 1.5)||(a1 >= 1.5 && a2 < 1.5 && a3 < 1.5))
     printf("2 Abaixo de 1,50m \n");
    else{
    printf("3 Abaixo de 1,50m\n");
                }
            }
        }
}
