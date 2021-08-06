#include<stdio.h>
int main()
{
    int x; double y, consumoMedio;
    scanf("%d\n%lf",&x, &y);
    consumoMedio=(x/y);
    printf("%.3lf km/l\n", consumoMedio);
    return 0;
}