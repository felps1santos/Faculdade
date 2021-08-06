#include<stdio.h>
int main()
{
    double peso, altura, imc;
    printf("Peso: ");
    printf("\nAltura: ");
    scanf("%lf\n%lf", &peso, &altura);
    imc = peso/(altura*altura); 
    printf("\n%.2lf",imc);
}