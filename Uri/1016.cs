using System;

public class ShootOut
{
   public static void Main()
    {
        double dist, tempo;
        Console.Write("Distancia: ");
        dist=double.Parse(Console.ReadLine());
        tempo=(dist*60)/30;
        Console.WriteLine(tempo + " minutos");
    }
}
