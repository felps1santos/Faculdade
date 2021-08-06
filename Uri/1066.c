#include<stdio.h>
int main()
{
    int par=0, impar=0, negativo=0, positivo=0, n;
    for(int i=0; i<5; i++)
    {
        scanf("%d\n", &n);
        if(n>0)
        {
            positivo++;
        }
        else 
            if(n<0)
        {
            negativo++;
        }
        if(n%2==0)
        {
            par++;
        }
        else 
            if(n%2!=0)
        {
            impar++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}