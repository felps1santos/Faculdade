#include<stdio.h>
int main()
{
    int n, i, cont=0;
    double resultado=0;
    do
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        resultado+=n;
        cont++;
    }
    while (n>0);
    {
        printf("%.2lf\n",resultado/cont);
    }
    return 0;
}