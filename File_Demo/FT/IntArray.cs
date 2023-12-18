using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FT
{
    internal class IntArray
    {
        private int[] arr;

        public int Length
        {
            get
            {
                return arr.Length;
            }
        }

        public int this[int idx]
        {
            get => arr[idx];
            set => arr[idx] = value;
        }

        public IntArray() { }

        public IntArray(int k)
        {
            arr = new int[k];
            Random rand = new Random();
            for (int i = 0; i < k; i++)
            {
                arr[i] = rand.Next(1, 200);
            }
        }

        public void Input()
        {
            Console.Write("So luong phan tu: ");
            int n = int.Parse(Console.ReadLine());
            arr = new int[n];
            for (int i = 0; i < n; i++)
            {
                Console.Write($"arr[{i}] = ");
                arr[i] = int.Parse(Console.ReadLine());
            }
        }

        public void Show()
        {
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write($"{arr[i]} ");
            }
            Console.WriteLine();
        }
    }
}
