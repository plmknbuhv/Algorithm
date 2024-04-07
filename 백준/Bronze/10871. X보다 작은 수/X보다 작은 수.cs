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
            int []b = new int[a[0]];
            b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int []c = new int[a[0]];
            for (int i = 0, j = 0; i < b.Length; i++)
            {
                if (b[i] < a[1])
                {
                    c[j] = b[i];
                    j++;
                }
            }
            foreach (int i in c)
            {
                if (i != 0)
                {
                    Console.Write(i + " ");
                }
            }
        }
    }
}