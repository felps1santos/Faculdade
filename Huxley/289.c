#include<stdio.h>
int main()
{
    int F, I, brinq=0;
    scanf("%d\n%d", &F, &I);
    if(F>=170 || I>=16)
    {
        brinq++;
    }
    if(F>=140 && I>=14)
    {
        brinq++;
    }
    if (F>=150 && I>=12)
    {
        brinq++;
    }
    printf("%d\n", brinq);
}