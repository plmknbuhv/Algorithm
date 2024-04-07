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
            int[] b = new int[a];

            b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int c = int.Parse(Console.ReadLine());
            int d = 0;

            foreach (int i in b)
            {
                if (i == c)
                    d++;
            }
            Console.WriteLine(d);
        }
    }
}