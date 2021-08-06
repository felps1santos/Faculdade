#include<stdio.h>
//The Huxley
int main()
{
    double ang1, ang2, ang3;
    scanf("%lf\n%lf",&ang1,&ang2);
    ang3=180-(ang1+ang2);
    printf("\n3o angulo=%.2lf", ang3);
    return 0;
}