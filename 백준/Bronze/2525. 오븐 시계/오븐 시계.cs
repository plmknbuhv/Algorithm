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
            int []a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int b = int.Parse(Console.ReadLine());

            a[1] += b;
            while (a[1] >= 60) 
            {
                a[1] -= 60;
                a[0]++;
                if (a[0] >= 24)
                {
                    a[0] = 0;
                }
            }
            Console.Write($"{a[0]} {a[1]}");
        }
    }
}