#include<stdio.h>
int main()
{
    double a, b, c, media;
    int acimaDaMedia=0;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    media=(a+b+c)/3;
    if(a>media)
    {
        acimaDaMedia=acimaDaMedia+1;
    } 
        if(b>media)
    {
        acimaDaMedia=acimaDaMedia+1;
    }
        if(c>media)
    {
        acimaDaMedia=acimaDaMedia+1;
    }
    printf("%d\n", acimaDaMedia);
    return 0;
}