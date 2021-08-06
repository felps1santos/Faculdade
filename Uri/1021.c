#include<stdio.h>
#include<math.h>

int main()
{   
    //notas
    int dinheiro1, cem, cinquenta, cinquenta1, vinte, vinte1, dez, dez1, cinco, cinco1, dois, dois1;
    //moedas
    int moedas , um, um1, cinqCent, vintCent, dezCent, cincoCent, umCent;
    double dinheiro;
    scanf("%lf", &dinheiro);
    dinheiro1=(int)dinheiro;//Pegando o valor inserido, e retirando apenas o inteiro, sobrando apenas moedas.
    dinheiro-=dinheiro1;//dinheiro=moedas.
    //printf("Inteiro: %d\n", dinheiro1);
    //printf("Moedas: %lf\n", dinheiro);
    moedas=(dinheiro*100);
    //printf("%d\n", moedas);
    cem=dinheiro1/100; 
    cinquenta=dinheiro1%100;
    cinquenta1=cinquenta/50;
    vinte=cinquenta%50;
    vinte1=vinte/20;
    dez=vinte%20;
    dez1=dez/10;
    cinco=dez%10;
    cinco1=cinco/5;
    dois=cinco%5;
    dois1=dois/2;
    //moedas
    um=dois%2;
    um1=um/1;
    //notas
    printf("NOTAS:\n");
    printf("%d notas(s) de R$ 100.00\n", cem);
    printf("%d notas(s) de R$ 50.00\n", cinquenta1);
    printf("%d notas(s) de R$ 20.00\n", vinte1);
    printf("%d notas(s) de R$ 10.00\n", dez1);
    printf("%d notas(s) de R$ 5.00\n", cinco1);
    printf("%d notas(s) de R$ 2.00\n", dois1);

    //moedas
    cinqCent=moedas/50;
    vintCent=(moedas%50)/25;
    dezCent=((moedas%50)%25)/10;
    cincoCent=(((moedas%50)%25)%10)/5;
    umCent=((((moedas%50)%25)%10)%5)/1;

    printf("MOEDAS:\n");
    printf("%d moedas(s) de R$ 1.00\n", um1);
    printf("%d moedas(s) de R$ 0.50\n", cinqCent);
    printf("%d moedas(s) de R$ 0.25\n", vintCent);
    printf("%d moedas(s) de R$ 0.10\n", dezCent);
    printf("%d moedas(s) de R$ 0.05\n", cincoCent);
    printf("%d moedas(s) de R$ 0.01\n", umCent);

    return 0;
}