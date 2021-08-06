#include<stdio.h>
int main()
{
    long numero, impar, par, positvo, negativo, nulo;
    scanf("%ld", &numero);
    if(numero%2==0 && numero>0)
    {
        printf("POSITIVO PAR\n");
    }
    else 
        if(numero%2!=0 && numero>0)
    {
        printf("POSITIVO IMPAR\n");
    }
    else 
        if(numero%2==0 && numero<0)
    {
        printf("NEGATIVO PAR\n");
    }
    else 
        if(numero%2!=0 && numero<0)
    {
        printf("NEGATIVO IMPAR\n");
    }
    else 
        if(numero==0)
    {
        printf("NULO\n");
    }
    return 0;
}