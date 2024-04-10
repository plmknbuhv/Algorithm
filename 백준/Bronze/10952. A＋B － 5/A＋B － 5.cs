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
            int[] b = new int[2];
            int[] c = new int[2];
            while (true)
            {
                c = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                if (c[0] == 0)
                {
                    break;
                }
                Console.WriteLine(c[0] + c[1]);
            }
        }
    }
}