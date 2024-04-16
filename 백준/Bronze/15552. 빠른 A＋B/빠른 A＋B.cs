using System;
// StringBuilder를 사용하기 위해서.
using System.Text;

namespace for문4
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder answer = new StringBuilder();

            int a = int.Parse(Console.ReadLine());

            int[] b = new int[a];
            int[] c = new int[a];

            for (int i = 0; i < a; i++)
            {
                string[] s = Console.ReadLine().Split();
                b[i] = int.Parse(s[0]);
                c[i] = int.Parse(s[1]);

                answer.AppendLine((b[i] + c[i]).ToString());
            }
            Console.WriteLine(answer);
        }
    }
}