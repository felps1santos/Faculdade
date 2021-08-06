#include<stdio.h>
#include<conio.h>
int main()
{
    char nomeFuncionario[100];
    double salFixo, salVendas, novoSal;
    scanf("%s\n%lf\n%lf", &nomeFuncionario, &salFixo, &salVendas);
    novoSal=salFixo+(0.15*salVendas);
    printf("Nome: %s\nTOTAL = R$ %.2lf\n",nomeFuncionario, novoSal);
    return 0;
}