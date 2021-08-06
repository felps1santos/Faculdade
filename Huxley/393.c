#include<stdio.h>
#define true 1
#define false 0

int main()
{
    int totalDePregos=0, pregos;
    double caixas, sobras, valorTotal;
    while (true)
    {
        scanf("%d\n",&pregos);
        if(pregos%2==0)
        {
            totalDePregos+=pregos;
        }
        else
        {
            break;
        }
        caixas=totalDePregos/(12+1);
        valorTotal=caixas*7.89;
        sobras=12*caixas-totalDePregos;
    }
    printf("Total: %.2lf\n", valorTotal);
    printf("Sobra: %lf", sobras);
}