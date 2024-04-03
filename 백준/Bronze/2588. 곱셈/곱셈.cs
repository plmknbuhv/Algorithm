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
            int A = int.Parse(Console.ReadLine());
            string input = Console.ReadLine();

            int a = int.Parse(input.Substring(2, 1));
            int b = int.Parse(input.Substring(1, 1));
            int c = int.Parse(input.Substring(0, 1));

            Console.WriteLine(A * a);
            Console.WriteLine(A * b);
            Console.WriteLine(A * c);
            Console.WriteLine(A * int.Parse(input));

        }
    }
}