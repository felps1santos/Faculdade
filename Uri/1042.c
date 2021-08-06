#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    /*
        O “&” e “&&” ambos são os operadores, usados ​​para avaliar as declarações condicionais. 
        O operador & é lógico e também um operador bit a bit. O operador && é puramente um operador lógico.
        A diferença básica entre o operador & e && é que o operador & avalia ambos os lados da expressão, 
        enquanto o operador && avalia apenas o lado esquerdo da expressão para obter o resultado final.
        x=8, y=4
        Ex: x&y >> vai ler bit a bit entre 8 e o 4, não importa o valor bool entre eles
        x&&y >> já aqui, caso x seja 0, y nem sera lido, sendo assim verificando apenas o lado esquerdo da sentença
        totalmente bool.
    */
    if((a<b)&(b<c))
    {
        printf("%d\n%d\n%d\n",a, b, c);
    }
    else 
        if((a<c)&(c<b))
    {
        printf("%d\n%d\n%d\n",a, c, b);
    }
    else 
        if((b<a)&(a<c))
    {
        printf("%d\n%d\n%d\n",b, a, c);
    }
    else 
        if((b<c)&(c<a))
    {
        printf("%d\n%d\n%d\n",b, c, a);
    }
    else if((c<a)&(a<b))
    {
        printf("%d\n%d\n%d\n",c, a, b);
    }
    else
    {
        printf("%d\n%d\n%d\n",c, b, a);
    }
    printf("\n%d\n%d\n%d", a, b, c);
    return 0;
}