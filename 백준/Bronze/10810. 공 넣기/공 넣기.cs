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

            for (int i = 0; i < a[1]; i++)
            {
                int[] c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                for (int j = c[0] - 1; j < c[1]; j++)
                {
                    b[j] = c[2];
                }
            }

            for (int i = 0;i < a[0]; i++)
            {
                Console.Write(b[i] + " ");
            }
        }
    }
}