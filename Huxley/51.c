#include<stdio.h>

int main()
{
    int iD, qtdProduto;
    double valorDaCompra, desconto;
    scanf("%d\n%d",&iD, &qtdProduto);
    if(iD==1 || iD==2 || iD==3 || iD==4)
    {
        if(iD==1)
        {
            valorDaCompra=(qtdProduto*5.3);
            if(qtdProduto>=15 || valorDaCompra>=40)
            {
                desconto=valorDaCompra-(0.15*valorDaCompra);
                printf("R$ %.2lf\n",desconto);
            }
            else
            {
                printf("R$ %.2lf\n", valorDaCompra);
            }
        }
        else if (iD==2)
        {
            valorDaCompra=(qtdProduto*6);
            if(qtdProduto>=15 || valorDaCompra>=40)
            {
                desconto=valorDaCompra-(0.15*valorDaCompra);
                printf("R$ %.2lf\n",desconto);
            }
            else
            {
                printf("R$ %.2lf\n", valorDaCompra);
            }
        }
        else if(iD==3)
        {
            valorDaCompra=(qtdProduto*3.2);
            if(qtdProduto>=15 || valorDaCompra>=40)
            {
                desconto=valorDaCompra-(0.15*valorDaCompra);
                printf("R$ %.2lf\n",desconto);
            }
            else
            {
                printf("R$ %.2lf\n", valorDaCompra);
            }
        }
        else if(iD==4)
        {
            valorDaCompra=(qtdProduto*2.5);
            if(qtdProduto>=15 || valorDaCompra>=40)
            {
                desconto=valorDaCompra-(0.15*valorDaCompra);
                printf("R$ %.2lf\n",desconto);
            }
            else
            {
                printf("R$ %.2lf\n", valorDaCompra);
            }
        }
    }
    else
    {
        printf("Codigo Invalido, digite novamente!\n");
    }
    return 0;
}