using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Baekjoon
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int []a = Array.ConvertAll(Console.ReadLine().Split(" "), int.Parse);

            if (a[0] < a[1])
            {
                Console.WriteLine("<");
            }
            else if (a[0] > a[1])
            {
                Console.WriteLine(">");
            }
            else
            {
                Console.WriteLine("==");
            }
        }
    }
}