#include <stdio.h>
#define MAX 10
int main()
{
    int v,s[MAX];
    s[0]=0;
    s[1]=0;
    s[2]=0;
    s[3]=0;
    s[4]=0;
    s[5]=0;
    s[6]=0;
    s[7]=0;
    s[8]=0;
    s[9]=0;
    while(v!=0){
    printf("Insira numero partido:");
    scanf("%d",&v);
    switch(v)
    {
        case 0:
        printf("Votacao Encerrada\n");
        break;
        case 1:
            s[0]=s[0]+1;
            break;
        case 2:
            s[1]=s[1]+1;
            break;
        case 3:
            s[2]=s[2]+1;
            break;
        case 4:
            s[3]=s[3]+1;
            break;
        case 5:
            s[4]=s[4]+1;
            break;
        case 6:
            s[5]=s[5]+1;
            break;
        case 7:
            s[6]=s[6]+1;
            break;
        case 8:
            s[7]=s[7]+1;
            break;
        case 9:
            s[8]=s[8]+1;
            break;
        case 10:
            s[9]=s[9]+1;
            break;
        default:
            printf("Opção Invalida");
            break;
    }
    }
    printf("Resultados\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],s[9]);
    printf("%d\n%d\n",s[0]/v,s[1]/v);

}
