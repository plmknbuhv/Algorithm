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
            Console.WriteLine(int.Parse(input[0]) * int.Parse(input[1]));
        }
    }
}