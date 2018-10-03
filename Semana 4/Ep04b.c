  #include <stdio.h>
int main()
{
    int cod,qtd;/*Variaveis*/
    float price,val;
        printf("Insira codigo:");/*Solicita e Le Valores*/
        scanf("%d",&cod);
        printf("Insira quantidade:");
        scanf("%d",&qtd);
         switch(cod)    /*Condicionante Switch:codigo produto*/
{
    case 1:            /*Caso (n)/Valor setado /Imprime nome produto /Break*/
            val=1.50;
            printf("Produto A\n",cod);
            break;
    case 2:
            val=12.75;
            printf("Produto B\n");
            break;
    case 3:
            val=1.90;
            printf("Produto C\n");
            break;
    case 4:
            val=2.25;
            printf("Produto D\n");
            break;
    case 5:
            val=1.99;
            printf("Produto E\n");
            break;
    case 6:
            val=2.45;
            printf("Produto F\n");
            break;
    case 7:
            val=3.99;
            printf("Produto G\n");
            break;
    case 8:
            val=7.90;
            printf("Produto H\n");
            break;
    case 9:
            val=4.30;
            printf("Produto I\n");
            break;
    case 10:
            val=1.30;
            printf("Produto J\n");
            break;
    default:
            printf("Produto Invalido\n");
            break;
}
    price=val*qtd;      /*Operação preço*/
        printf("Preco Final: R$ %.2f\nPreco Unitario: R$ %.2f",price,val); /*Printa preco final e unitario*/

}



