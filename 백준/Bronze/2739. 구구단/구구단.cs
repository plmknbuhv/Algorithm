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
            int b = int.Parse(Console.ReadLine());

            for (int i = 1; i < 10; i++) 
            { 
                Console.WriteLine($"{b} * {i} = {b * i}");
            }
        }
    }
}
