#include<stdio.h>
int main()
{
    int cod1, num1, num2, cod2;
    double val1, val2, valorTotal;
    scanf("%d\n%d\n%lf\n%d\n%d\n%lf", &cod1, &num1, &val1, &cod2, &num2, &val2);
    valorTotal=(num1*val1) + (num2*val2);
    printf("\nVALOR A PAGAR: R$ %.2lf", valorTotal);
}