using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FT
{
    internal class LNode
    {
        private int data;
        private LNode next = null;

        public int Data
        {
            get => data;
            set => data = value;
        }

        public LNode Next
        {
            get => next;
            set => next = value;
        }

        public LNode()
        {
            data = 0;
            next = null;
        }

        public LNode(int x)
        {
            data = x;
            next = null;
        }
    }
}
