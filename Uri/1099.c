#include<stdio.h>

int main()//Função retorna um valor inteiro.
{
    int i, j, primeiroValor, segundoValor, soma=0, casoDeTestes, aux;

    scanf("%d", &casoDeTestes);
    for(i=0;i<casoDeTestes;i++)
    {
        soma=0;
        scanf("\n%d\n%d",&primeiroValor, &segundoValor);
        if(primeiroValor>segundoValor)
        {
            aux=primeiroValor;
            primeiroValor=segundoValor;
            segundoValor=aux;
        }
        for(j=primeiroValor+1;j<segundoValor;j++)
        {
            if((j%2==1))
            {
                soma=soma+j;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}