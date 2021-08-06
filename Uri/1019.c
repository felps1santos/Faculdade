#include<stdio.h>

int main()
{
    int N, h, m, s;
    scanf("%d",&N);
    h=N/3600;
    m=(N%3600)/60;
    s=(N%3600)%60;//duvida sobre o que faz essa linha.
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}