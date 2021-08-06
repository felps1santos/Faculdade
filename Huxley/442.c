#include<stdio.h>
int main()
{
    int numeroDeLaranjas, numeroDeDuzias;
    double valorTotal, unitario;
    scanf("%d", &numeroDeLaranjas);
    numeroDeDuzias=numeroDeLaranjas / 12;
    unitario = 8.35 / 12;
    valorTotal = numeroDeLaranjas * unitario;
    printf("%d\n%.2lf\n", numeroDeDuzias, valorTotal);
    return 0;
}