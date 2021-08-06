#include<stdio.h>
//The Huxley
int main()
{
    double pesoQueijo, pesoPresunto, pesoHamburguer, lanches;
    printf("Qtd Lanches: ");
    scanf("%lf",&lanches);
    pesoQueijo=(100*lanches)/1000;
    pesoPresunto=(50*lanches)/1000;
    pesoHamburguer=(100*lanches)/1000;
    printf("\n%.2lf", pesoQueijo);
    printf("\n%.2lf", pesoPresunto);
    printf("\n%.2lf", pesoHamburguer);
}
