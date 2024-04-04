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
            a[1] -= 45;

            if (a[1] < 0)
            {
                a[0]--;
                a[1] = 60 + a[1];
                if (a[0] < 0) 
                {
                    a[0] = 23;
                }
            }
            Console.Write($"{a[0]} {a[1]}");
        }
    }
}
