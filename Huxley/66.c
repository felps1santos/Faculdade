#include<stdio.h>
#include<math.h>
int main()
{
    double taxa, valorAnterior=0, montante, rendimento, capital;
    int anos, trimestre, i;
    scanf("%lf %lf %d",&capital, &taxa, &anos);
    trimestre=anos*4;
    for(i=1;i<=trimestre;i++)
    {
        montante=capital*pow((1+taxa), i);
        rendimento=montante-capital-valorAnterior;
        valorAnterior+=rendimento;
        printf("Rendimento: %.2lf Montante: %.2lf\n",rendimento, montante);
    }
}