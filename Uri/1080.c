#include<stdio.h>

int main()
{
    int i, num, maior=0, posicao;
    for(i=0;i<100;i++)
    {
        scanf("%d",&num);
        if(num>maior)
        {
            maior=num;
            posicao=i+1;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",posicao);
    return 0;
}