#include <stdio.h>
int main()
{
    float a,b,med; //Vari�veis//

    printf("Insira nota 1:"); //Solicita e L� valor 1//
    scanf("%f",&a);
    printf("Insira nota 2:");//Solicita e L� valor 2//
    scanf("%f",&b);
    med = (a+b)/2;          //Opera��o L�gica//
    printf("Media: %.2f\n",med);//Imprime resultado com duas casas dec.//
    scanf("&f",med);        //L� opera��o med//
    if(med>=6)              //Condicionantes//
    printf("Aprovado\n");
    if(med<6)
    printf("Reprovado\n");

}
