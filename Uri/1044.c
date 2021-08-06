#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Digite dois valores:");
    scanf("%d\n%d",&n1, &n2);
    if(n2%n1==0||n1%n2==0)
    {
        printf("\nSao Multiplos");
    }
    else
    {
        printf("\nNao sao Multiplos");
    }
    return 0;
}