#include<stdio.h>

int main()
{
    int numero, i;
    scanf("%d",&numero);
    for(i=1;i<=numero;i++)
    {
        if(i%2==0)
        {
            printf("%d^2 = %d\n", i,(i*i));
        }
    }
}