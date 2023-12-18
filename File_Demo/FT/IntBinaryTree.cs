using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FT
{
    internal class IntBinaryTree
    {
        private TNode root;

        public IntBinaryTree()
        {
            root = null;
        }

        public IntBinaryTree(int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                Insert(arr[i]);
            }
        }

        public bool Insert(int x)
        {
            if (root == null)
            {
                root = new TNode(x);
                return true;
            }

            return root.InsertData(x);
        }

        public void PreOrder()
        {
            if (root == null)
            {
                return;
            }

            root.NLR();
        }
    }
}
