#include<stdio.h>

int main()
{
    int anoAtual, anoNascimento, b;
    printf("Ano atual: ");
    scanf("%d",&anoAtual);
    printf("\nAno nascimento: ");
    scanf("%d",&anoNascimento);
    b = anoAtual - anoNascimento;
    printf("%d\n", b);
}