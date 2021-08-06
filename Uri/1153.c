#include<stdio.h>

int main()
{
   int n, i, fatorial=1;
   scanf("%d",&n);
   if(n>0 && n<13)
   {
       for(i=n;i>=1;i--)
       {
           fatorial*=i;
       }
       printf("%d\n", fatorial);
   }
}