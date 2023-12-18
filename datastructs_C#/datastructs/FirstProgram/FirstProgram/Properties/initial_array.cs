using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace FirstProgram.Array
{
    internal class intial_array
    {
        public int[] A;
        public int Lenght_Array
        {
            get
            {
                return A.Length;
            }
        }
        public int Amount_Element;
        public void Enter_Element()
        {
            Console.Write("\n Enter Amount Elenent : ");
            Amount_Element = int.Parse(Console.ReadLine());
        }
        public void Init_Array(int k)
        {
            A = new int[k];
            Random rand = new Random();
            for(int i = 0; i < k; i++)
            {
                A[i] = rand.Next(1, 1000);
            }
        }
        public void Input()
        {
            Enter_Element();
            A = new int[Amount_Element];
            Console.WriteLine("\n==== Enter values to element =====\n");
            Random rand = new Random();
            for (int  i = 0; i < A.Length ;  i++)
            {
                Console.WriteLine($"A[{i}] = ");
                A[i] = int.Parse(Console.ReadLine()); 
            }
        }
        public void Show()
        {
            Console.WriteLine("\n ====== Output Element ========");
            for(int i = 0; i < A.Length ; i++)
            {
                Console.Write($"\nA[{i}] = ");
                Console.Write(A[i]);
                
            }
        }
        
    }
}
