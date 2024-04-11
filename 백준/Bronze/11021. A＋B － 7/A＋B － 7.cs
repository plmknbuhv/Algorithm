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
            int[] b = new int[a * 2];
            int[] c = new int[a];
            for (int i = 0; i < a * 2; i += 2)
            {
                c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                b[i] = c[0];
                b[i + 1] = c[1];
            }
            for (int i = 0; i < a * 2; i += 2)
            {
                Console.WriteLine($"Case #{(i / 2) + 1}: {b[i] + b[i + 1]}");
            }
        }
    }
}