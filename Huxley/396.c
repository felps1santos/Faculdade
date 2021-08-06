#include<stdio.h>
int main()
{
    int nV, veiculosExtras=0;
    double valorDeMultas=0; 
    
    while (nV!=999)
    {
        scanf("%d\n", &nV);
        if(nV>2)
        {
            valorDeMultas+=12.89;
            veiculosExtras++;
        }
        nV++;
    }
    printf("%.2lf\n%d\n", valorDeMultas, veiculosExtras);
}