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
            int[] c = new int[2];
            int[] b = new int[a];
            b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            c[0] = b[0];
            c[1] = b[0];
            foreach (int i in b)
            {
                if (i <= c[0])
                {
                    c[0] = i;
                }
                else if (i >= c[1])
                {
                    c[1] = i;
                }
            }
            Console.WriteLine($"{c[0]} {c[1]}");
        }
    }
}