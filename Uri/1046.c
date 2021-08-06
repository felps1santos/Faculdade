#include<stdio.h>
int main()
{
    int h1, m1, h2, m2, t1, t2, t, h, m;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    t1 = h1 * 60 + m1; 
    t2 = h2 * 60 + m2;
    if(t2>t1)
    {
        t=t2-t1;
    }
    else
    {
        t=t2-t1+(24*60);
    }
    h = t/60;
    m = t%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}