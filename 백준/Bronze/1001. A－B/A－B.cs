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
            // 2. int로 형변환해서 두 문자열 합하기
            Console.WriteLine(int.Parse(input[0]) - int.Parse(input[1]));
        }
    }
}