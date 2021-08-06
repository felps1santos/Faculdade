#include<stdio.h>
int main()
{
    int n, x, primo=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        for(int j=1;j<=x;j++)
        {
            if(x%j==0)
            
            {
                primo++;
            }
        }
        if(primo==2)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}