#include<stdio.h>
int main()
{
    int id, nHorasTrabalhadas;
    double valorPorHora, salario;
    scanf("%d\n%d\n%lf",&id, &nHorasTrabalhadas, &valorPorHora);
    salario = nHorasTrabalhadas*valorPorHora;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", id, salario);
}