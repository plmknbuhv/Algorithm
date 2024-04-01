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

            Array.Sort(a);

            if ((a[0] == a[1]) && (a[1] == a[2]))
            {
                Console.WriteLine(10000 + (a[0] * 1000));
            }
            else if ((a[0] == a[1]))
            {
                Console.WriteLine(1000 + (a[0] * 100));
            }
            else if (a[1] == a[2])
            {
                Console.WriteLine(1000 + (a[1] * 100));
            }
            else if ((a[0] == a[2]))
            {
                Console.WriteLine(1000 + (a[0] * 100));
            }
            else
            {
                Console.WriteLine(a[2] * 100);
            }
        }
    }
}