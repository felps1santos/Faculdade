#include<stdio.h>
int main()
{
    int horaInicial, minutoInicial, horaFinal, minutoFinal, dH, duracaoEmHoras, dM, duracaoEmMinutos;
    dH=horaFinal-horaInicial;
    dM=minutoFinal-minutoInicial;
    if(dH>0)
    {
        duracaoEmHoras=dH;
    }
    else
    {
        duracaoEmHoras=dH+24;
    }
    if(dM>1)
    {
        duracaoEmMinutos=dM;
    }
    else
    {

    }
}