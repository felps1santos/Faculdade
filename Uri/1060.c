#include<stdio.h>
int main()
{
   float numero;
   int valorPositivo=0, contador;
   for (contador=0;contador<=5;contador++)
   {
       scanf("%f",&numero);
       if(numero>=0)
       {
           valorPositivo++;
       }
   } 
   printf("%d valores positivos\n",valorPositivo);
   return 0;
}