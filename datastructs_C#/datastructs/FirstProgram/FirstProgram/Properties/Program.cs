using System;
using FirstProgram.Array;
using FirstProgram.Array.Stack;
namespace FirstProgram
{
        internal class Program
        {
            public static void Array()
            {
                Console.WriteLine("\n ---------------------- Array ------------------------");
                intial_array Arr = new intial_array();
                Arr.Enter_Element();
                Arr.Init_Array(Arr.Amount_Element);
                Arr.Show(); 
            }
            public static void PreStack()
            {
                Console.WriteLine("\n ---------------------- Stack ------------------------");
                Stack_initial_Array Stack = new Stack_initial_Array();
                Stack.init_new_array();
                Stack.show_stack();
            }
            public static void Main(string[] args)
            {
                Array();
                PreStack();
                Console.ReadLine();   
            }
    }
}
