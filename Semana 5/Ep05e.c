#include <stdio.h>
int main()
{
    int a,b,n;           /*Variáveis Score e Novo Jogo*/
    int jogos=0,j_inter=0,j_gremio=0,draw=0; /*Var. auxiliar*/
    while(1){            /*Loop repetição*/
            printf("Insira valor gols(Inter e Gremio respectivamente):");
            scanf("%d %d",&a ,&b);
            printf("Novo Grenal (1-Sim 2-Nao)\n");
            jogos++;        /*Somatório Variáveis aux*/
            if(a>b)j_inter++;
            else j_gremio++;
            if(a==b)draw++;
           scanf("%d",&n);
           if (n==1)continue;
           if (n==2)break;            /*Quebra do Loop*/
}
            printf("%d Grenais\n",jogos); /*Printar resultado estatisticas*/
            printf("Inter:%d\n",j_inter);
            printf("Gremio:%d\n",j_gremio);
            printf("Empates:%d\n",draw);
            if(j_inter>j_gremio)
            {
            printf("Inter venceu mais\n");
            }
            else if(j_gremio>j_inter)
            {
            printf("Gremio venceu mais\n");
            }
            else printf("Nao houve vencedor\n");
    return 0;
}
