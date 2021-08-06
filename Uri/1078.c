#include<stdio.h>
int main()
{   
    int N, i=1;
    printf("Digite um numero: ");
    scanf("%d",&N);
        while (i<=10)
        {
            printf("%d X %d = %d\n", i, N, i*N);
            i++;
        }
}