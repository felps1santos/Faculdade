#include<stdio.h>

int main()
{
    double a=3.5, b=7.5, media, x, y;
    scanf("%lf\n%lf",&x, &y);
    media=((a*x)+(b*y))/11;
    printf("MEDIA = %.5lf\n", media);
}