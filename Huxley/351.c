#include<stdio.h>
int main()
{
    int valor1, valor2, soma=0;
    scanf("%d\n%d", &valor1, &valor2);
    for (int i=0;i<valor1;i++)
    {
        soma+=valor2;
    }
    printf("%d\n", soma);
    return 0;
}