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
            int a = int.Parse(Console.ReadLine());
            string b = "int";
            string c = "";

            while (a >= 4)
            {
                a -= 4;
                c += "long ";
            }
            c += b;
            Console.WriteLine(c);
        }
    }
}