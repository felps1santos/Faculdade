#include<stdio.h>
int main()
{
    int N, x, in=0, out=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("\n%d",&x);
        if((x>=10) && (x<=20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
}