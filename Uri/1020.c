#include<stdio.h>
int main()
{
    int d, ano, meses, dias;
    scanf("%d", &d);
    ano=(d)/365;
    meses=(d%365)/30;
    dias=(d%365)%30;
    printf("%d ano (s)\n%d mes (es)\n%d dia (s)\n", ano, meses, dias);
    return 0;
}