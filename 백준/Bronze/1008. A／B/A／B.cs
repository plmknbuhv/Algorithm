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
            string [] input = Console.ReadLine().Split();
            Console.WriteLine(double.Parse(input[0]) / double.Parse(input[1]));
        }
    }
}