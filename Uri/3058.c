#include <stdio.h>
//Duvida
int main()
{
    int n, i;
    double a, b, min=9999999, val;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%lf\n%lf",&a, &b);
        val=(a/b)*1000;
        if(min>val)
        {
            min=val;
        }
    }
    printf("%.2lf\n", min);
    return 0;
}