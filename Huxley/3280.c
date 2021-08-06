#include<stdio.h>

int main()
{
    double salario, novoSalario;
    printf("Digite o salario do funcionario: ");
    scanf("%lf",&salario);
    novoSalario = salario + (0.075*salario);
    printf("%.2lf", novoSalario);
}