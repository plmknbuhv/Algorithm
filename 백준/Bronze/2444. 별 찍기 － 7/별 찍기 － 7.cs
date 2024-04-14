using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

internal class Program
{
    static void Main(string[] args)
    {
        int a;

        a = int.Parse(Console.ReadLine());

        for (int i = 0; i < a; i++)
        {
            for (int j = 1; j < a - i; j++)
            {
                Console.Write(" ");
            }
            for (int j = 0; j < i * 2 + 1; j++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }

        for (int i = a; i > 1; i--)
        {
            for (int j = a; j > i - 1; j--)
            {
                Console.Write(" ");
            }
            for (int j = 1; j < (i - 1) * 2; j++)
            {
                Console.Write("*");
            }
            Console.WriteLine();
        }
    }
}