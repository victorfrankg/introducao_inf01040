#include <stdio.h>
int main()
{
    float a,b,med; //Variáveis//

    printf("Insira nota 1:"); //Solicita e Lê valor 1//
    scanf("%f",&a);
    printf("Insira nota 2:");//Solicita e Lê valor 2//
    scanf("%f",&b);
    med = (a+b)/2;          //Operação Lógica//
    printf("Media: %.2f\n",med);//Imprime resultado com duas casas dec.//
    scanf("&f",med);        //Lê operação med//
    if(med>=6)              //Condicionantes//
    printf("Aprovado\n");
    if(med<6)
    printf("Reprovado\n");

}
