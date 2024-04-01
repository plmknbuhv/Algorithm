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
            int a ;
            int[] b = new int[9];
            int[] c = new int[2];

            for (int i = 0; i < 9; i++)
            {
                a = int.Parse(Console.ReadLine());
                b[i] = a;
            }

            for (int i = 0; i < 9; i++)
            {
                if (b[i] > c[0])
                {
                    c[0] = b[i];
                    c[1] = i;
                }
            }
            Console.WriteLine(c[0]);
            Console.WriteLine(c[1] + 1);
        }
    }
}