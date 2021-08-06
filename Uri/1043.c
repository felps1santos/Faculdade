#include<stdio.h>
int main()
{
    double a, b, c, perimetro, areaTrapezio;
    scanf("%lf %lf %lf\n", &a, &b, &c);
    if((b+c>a) && (a+b>c) && (c+a>b)) 
    {
        perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else
    {
        areaTrapezio=((a+b)*c)/2;
        printf("Area = %.1lf\n", areaTrapezio);
    }
    return 0;
}