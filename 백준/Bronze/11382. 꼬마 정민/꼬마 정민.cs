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
            long []A = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);

            Console.Write(A[0] + A[1] + A[2]);
        }
    }
}