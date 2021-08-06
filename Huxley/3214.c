#include<stdio.h>

int main()
{
    int tempo, calculoDia, calculoHoras, calculoMinutos, calculoSegundos, resto;
    printf("Tempo em segundos: ");
    scanf("%d",&tempo);
    //86400 - 1 dia 
    //3600  - 1 hora
    //60    - 1 min
    calculoDia=tempo/86400;
    resto=tempo%86400;
    calculoHoras=resto/3600;
    resto=resto%3600;
    calculoMinutos=resto/60;
    calculoSegundos=resto%60;
    printf("\n%d\n%d\n%d\n%d", calculoDia, calculoHoras, calculoMinutos, calculoSegundos);
}