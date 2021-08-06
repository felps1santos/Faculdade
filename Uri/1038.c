#include<stdio.h>
int main()
{
    int idProduto, qtdProduto;
    double valorTotal;
    scanf("%d\n%d",&idProduto, &qtdProduto);
    if(idProduto==1)
    {
        valorTotal=4*qtdProduto;
        printf("Total: R$ %.2lf\n", valorTotal);
    }
    else if(idProduto==2)
    {
        valorTotal= 4.5*qtdProduto;
        printf("Total: R$ %.2lf\n", valorTotal);
    }
    else if(idProduto==3)
    {
        valorTotal=5*qtdProduto;
        printf("Total: R$ %.2lf\n", valorTotal);
    }
    else if(idProduto==4)
    {
        valorTotal=2*qtdProduto;
        printf("Total: R$ %.2lf\n", valorTotal);
    }
    else if(idProduto==5)
    {
        valorTotal=1.5*qtdProduto;
        printf("Total: R$ %.2lf\n", valorTotal);
    }
    return 0;
}