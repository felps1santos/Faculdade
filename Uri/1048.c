#include<stdio.h>
int main()
{
    float salarioInicial, percentualDeAjuste, novoSalario;
    scanf("%f", &salarioInicial);
    if((salarioInicial>=0) && (salarioInicial<=400))
    {
        percentualDeAjuste = (0.15*salarioInicial);
        novoSalario = percentualDeAjuste + salarioInicial;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novoSalario, percentualDeAjuste);
    } 
    else
        if((salarioInicial>400.01)&&(salarioInicial<=800))
    {
        percentualDeAjuste = (0.12*salarioInicial);
        novoSalario = percentualDeAjuste + salarioInicial;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novoSalario, percentualDeAjuste);
    } 
    else 
        if((salarioInicial>800.01)&&(salarioInicial<=1200))
    {
        percentualDeAjuste = (0.10*salarioInicial);
        novoSalario = percentualDeAjuste + salarioInicial;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novoSalario, percentualDeAjuste);
    }
    else
        if((salarioInicial>1200.01)&&(salarioInicial<=2000))
    {
        percentualDeAjuste = (0.07*salarioInicial);
        novoSalario = percentualDeAjuste + salarioInicial;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novoSalario, percentualDeAjuste);
    } 
    else 
        if(salarioInicial>2000)
    {
        percentualDeAjuste = (0.04*salarioInicial);
        novoSalario = percentualDeAjuste + salarioInicial;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novoSalario, percentualDeAjuste);
    }
    return 0;
}