#include <stdio.h>

int main()
{   
    int numeroRegistro, horasDeTrabalho;
    float valorHora, salario;
    scanf("%d %d",&numeroRegistro,&horasDeTrabalho);
    scanf("%f",&valorHora);
    salario = horasDeTrabalho * valorHora;
    printf("NUMBER = %d\n",numeroRegistro);
    printf("SALARY = R$ %.2f", salario);
}