using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FT
{
    internal class IntLinkedList
    {
        private LNode first;
        private LNode last;

            public IntLinkedList()
            {
                first = null;
                last = null;
        }

        public bool IsEmpty()
        {
            return first == null;
        }

        public void InsertFirst(LNode newNode)
        {
            if (IsEmpty())
            {
                first = last = newNode;
            }
            else
            {
                newNode.Next = first;
                first = newNode;
            }
        }

        public void Input()
        {
            int x;
            do
            {
                Console.Write("Nhap vao so nguyen duong (nhap -1 ket thuc): ");
                int.TryParse(Console.ReadLine(), out x);
                if (x < 0)
                    break;
                else
                {
                    LNode newNode = new LNode(x);
                    InsertFirst(newNode);
                }
            } while (true);
        }

        public void Show()
        {
            LNode p = first;
            while (p != null)
            {
                Console.Write(p.Data + "->");
                p = p.Next;
            }
            Console.WriteLine("NULL");
        }

    }
}
