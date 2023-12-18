using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FT
{
    internal class TNode
    {
        private int data;
        private TNode left;
        private TNode right;

        public TNode(int x)
        {
            data = x;
            left = null;
            right = null;
        }

        public bool InsertData(int x)
        {
            if (x == data)
            {
                return false;
            }

            if (x < data)
            {
                if (left == null)
                {
                    left = new TNode(x);
                }
                else
                {
                    return left.InsertData(x);
                }
            }
            else
            {
                if (right == null)
                {
                    right = new TNode(x);
                }
                else
                {
                    return right.InsertData(x);
                }
            }

            return true;
        }

        public void NLR()
        {
            Console.Write(data + "; ");
            if (left != null)
            {
                left.NLR();
            }

            if (right != null)
            {
                right.NLR();
            }
        }
    }
}
