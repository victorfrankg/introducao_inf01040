#include <stdio.h>
#include <stdlib.h>

int lim_idade(int j){
    if(j<4 || j >14){
        int idade;
        printf("Por favor digite uma idade no intervalo pedido!:");
        scanf("%d",&idade);
        return lim_idade(idade);
    }
        printf("Idade valida\n");
        return j;
}

int main(){
    int i,j,max=0,min=5,sum=0;
    float med=0;
    for(i=0;i<10;i++){
        printf("Insira idade(entre 4 e 14 anos):");
        scanf("%d",&j);
        j= lim_idade(j);
        if(j>max) max = j;
        if(j<min) min = j;
        sum = sum+j;
    }   med = sum / 10;
        printf("Maior idade:%d",max);
        printf("\nMenor idade:%d",min);
        printf("\nMedia das idades:%.2f",med);
        return 0;

}

//PO4UP7r6qk
