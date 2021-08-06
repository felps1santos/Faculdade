#include<stdio.h>
int main()
{   
    int n1, n2, n3, n4, n5;
    scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
    if((n1==1 || n2==1) && (n3==1 && n4==1 && n5==1))
    {
        printf("AVALIADO\n");
    }
    else
    {
        printf("0\n");
    }
}