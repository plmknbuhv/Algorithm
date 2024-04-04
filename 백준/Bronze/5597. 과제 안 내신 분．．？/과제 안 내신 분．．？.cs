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
            int[] stu = new int[31];

            for (int i = 0; i < 28; i++)
            {
                int n = int.Parse(Console.ReadLine());
                stu[n] = 1;
            }

            for (int i = 1; i <= 30; i++)
            {
                if (stu[i] != 1)
                    Console.WriteLine(i);
            }
        }
    }
}