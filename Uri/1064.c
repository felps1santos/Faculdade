#include<stdio.h>
int main()
{
    float v, somaPositivos=0, media=0;
    int contador, valorPostivo=0;

    for(contador=0;contador<=5;contador++)
    {
        scanf("%f", &v);
        if(v>0)
        {
            valorPostivo++;
            somaPositivos+=v;
        }
    }
    media=somaPositivos/valorPostivo;
    printf("%d valores positivos\n", valorPostivo);
    printf("%.1f\n", media);
}