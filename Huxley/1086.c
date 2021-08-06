#include<stdio.h>
int main()
{
    int dias;
    double km, valorSemDesconto, valorComDesconto;
    scanf("%d\n%lf",&dias,&km);
    valorSemDesconto=(30*dias) + (km*0.01);
    valorComDesconto=valorSemDesconto-(0.1*valorSemDesconto);
    printf("%.2lf\n",valorComDesconto);
}