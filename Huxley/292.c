#include <stdio.h>

int main()
{
    double a, b, c, areaTriangulo, pi=3.14159, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    printf("Digite o valor de A: ");
    scanf("%lf",&a);
    printf("\nDigite o valor de B: ");
    scanf("%lf",&b);
    printf("\nDigite o valor de C: ");
    scanf("%lf",&c);
    areaTriangulo=(a*c)/2;
    areaCirculo=(c*c)*pi;
    areaTrapezio=((a+b)*c)/2;
    areaQuadrado=(b*b);
    areaRetangulo=(a*b);
    printf("\nTRIANGULO: %.3lf", areaTriangulo);
    printf("\nCIRCULO: %.3lf", areaCirculo);
    printf("\nTRAPEZIO: %.3lf", areaTrapezio);
    printf("\nQUADRADO: %.3lf", areaQuadrado);
    printf("\nRETANGULO: %.3lf", areaRetangulo);
}