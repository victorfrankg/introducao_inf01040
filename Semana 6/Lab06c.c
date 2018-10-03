#include <stdio.h>
int main()
{
     int n;
     float maior, menor, mean=0;


      for(int i=0;i<10;i++)
      {
           printf("Insira peso:");
           scanf("%d",&n);
           mean=mean+n;

           if(n<menor)
           {
                menor=n;
           }
           if(n>maior)
           {
                maior=n;
           }
      }

      printf("Media: %.2f\n",mean/10);
      printf("Maior peso: %.2f\n",maior);
      printf("Menor peso: %.2f\n",menor);

}
