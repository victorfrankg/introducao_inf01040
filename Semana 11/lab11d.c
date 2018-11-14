#include <stdio.h>
#include <stdlib.h>

void linha(int l, int c, char t){ /*Função void com integers e char*/
    int i,j;
    printf("Enter number of lines:");
    scanf("%d",&l);
    printf("Enter number of rows:");
    scanf("%d",&c);
    printf("Enter type of character:");
    scanf("%s",&t);
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%c",t);
        } printf("\n");
    }
}
int main()                          /*Main chamando a função previamente construída*/
{   int l,c,t;
    linha(l,c,t);
}
//UOLAt01y6E
