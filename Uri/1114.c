#include<stdio.h>

int main(){

int i, senha;

    scanf("%d", &senha);
    for(i=0; senha!=2002; i++)
    {
        if(senha!=2002)
        {
            printf("Senha Invalida\n");
            scanf("%d", &senha);
        }
    }
    printf("Acesso Permitido\n");
}