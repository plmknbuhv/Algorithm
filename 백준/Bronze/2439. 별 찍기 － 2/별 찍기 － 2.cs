using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace study
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());

            for (int i = 0; i < a; i++)
            {
                for (int j = a - 1; j > i; j--)
                {
                    Console.Write(" ");
                }
                for (int k = -1; k < i; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine("");
            }
        }
    }
}