#include<stdio.h>
#define x 1
#define y 0

void main()//Aconselhavel usar, int pois retorna um valor inteiro.
{
    int n1, n2=0;
    while (x)
    {
        scanf("%d", &n1);
        if(n1==0)
        {
            break;
        }
            n2=max(n2, n1);
    }
    printf("%d\n", n2);
}
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}