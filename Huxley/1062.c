#include<stdio.h>

int main()
{
    double pH;
    printf("Ph: ");
    scanf("%lf",&pH);
    if(pH<7)
    {
        printf("Acida\n");
    }
    else if(pH>7)
    {
        printf("Basica\n");
    }
    else
    {
        printf("Neutra\n");
    }
    return 0;
}