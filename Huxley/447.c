#include<stdio.h>
int main()
{
    int veiculosEstacionados, restoVagas;
    double totalOcupado;
    scanf("%d", &veiculosEstacionados);
    restoVagas = 42 - veiculosEstacionados;
    totalOcupado=(restoVagas*1.75);
    printf("%.2lf\n",totalOcupado);
}