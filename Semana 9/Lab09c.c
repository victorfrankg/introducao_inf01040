#include <stdio.h>
int main()
{
    int i,j,max[30];
    int mat[3][3];
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
    printf("Insira valor matriz elemento %d,%d :",i+1,j+1);
    scanf("%d",&mat[i][j]);
            }
    }
    for(i=0;i<3;i++){
    max[i]=mat[i][j];
    for(j=0;j<3;j++)
    if(mat[i][j]>max[i])
        max[i]=mat[i][j];
    }
    for(i=0;i<3;i++)
    printf("\nMaior valor da %d coluna:%d",i+1,max[i]);
}

//ywRpB13dHE
