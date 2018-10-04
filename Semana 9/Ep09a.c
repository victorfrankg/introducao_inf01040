#include <stdio.h>
int main()
{
float not[6][5], med; /*Variáveis*/
int i,j, sum=0;

    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
        if(j==0){ not[i][4]=(not[i][0]+not[i][1]+not[i][2]+not[i][3])/4;}/*Função soma na linha*/
        printf("Insira valores elemento %d,%d:", i+1,j+1);
        else{
        scanf("%f", &not[i][j]); /*Lê Valores*/
            }
        }
}
    for(i=0;i<6;i++)
    {
    printf("\n");
        for(j=0;j<5;j++){
    printf("%.2f ", not[i][j]);
    }
}
    med=(not[0][4]+not[1][4]+not[2][4]+not[3][4]+not[4][4]+not[5][4])/6;
    for(i=0;i<6;i++){
    if(not[i][4]<med) sum = sum+1;
    }
    printf("\n%d Alunos ficou(aram) abaixo da media da turma de %.2f", sum, med);
    return(0);
}
//eC7PnEXDVB
