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
            int b = int.Parse(Console.ReadLine());
            int[] c = new int[4];
            int d = 0;

            for (int i = 0; i < b; i++)
            {
                c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                d += (c[0] * c[1]);
            }

            if (a == d)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }
        }
    }
}