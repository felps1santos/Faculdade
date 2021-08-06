using System;
//The Huxley
class AngulosTrinangulo
{
    static void Main()
    {
        double angulo1, angulo2, angulo3;
        Console.Write("Digite o primeiro angulo: ");
        angulo1=double.Parse(Console.ReadLine());
        Console.Write("Digite o segundo angulo: ");
        angulo2=double.Parse(Console.ReadLine());
        angulo3=180-(angulo1+angulo2);
        Console.Write("\nAngulo 3: " + angulo3);
    }
}