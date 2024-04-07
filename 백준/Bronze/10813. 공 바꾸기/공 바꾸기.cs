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
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] b = new int[a[0]];
            int d;

            for (int i = 0; i < a[0]; i++)
            {
                b[i] = i + 1;
            }

            for (int i = 0; i < a[1]; i++)
            {
                int[] c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                d = b[c[1] - 1];
                b[c[1] - 1] = b[c[0] - 1];
                b[c[0] - 1] = d;
            }

            for (int i = 0;i < a[0]; i++)
            {
                Console.Write(b[i] + " ");
            }
        }
    }
}