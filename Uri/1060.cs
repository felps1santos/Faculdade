using System;

class ValorPositivo
{
    static void Main()
    {
        int valorPositivo=0, contador;
        double v1;
        Console.WriteLine("Digite 6 valores abaixo: ");
        for(contador=1;contador<=6;contador++)
        {
            v1=double.Parse(Console.ReadLine());
            if(v1>=0)
            {
                valorPositivo++;
            }
        }
        Console.Write(valorPositivo + " valores positivos");
    }
}