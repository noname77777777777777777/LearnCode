using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FirstProgram.Array;
namespace FirstProgram.Array.Stack
{
    class Stack_initial_Array
    {
        private intial_array Stack = new intial_array();
        
        public void init_new_array()
        {
            Stack.Enter_Element();
            Stack.Init_Array(Stack.Amount_Element);
        }

        public void show_stack()
        {
            for(int i = Stack.Lenght_Array - 1; i >= 0; i--)
            {
                Console.Write($"\nA[{i}] = ");
                Console.Write(Stack.A[i]);
            }
        }
    }
}
