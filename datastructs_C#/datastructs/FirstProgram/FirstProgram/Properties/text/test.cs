using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace linkedlist.node
{
	 class CreateNode
	{
		public int data;
		public CreateNode next;
		public CreateNode InitNode(int value)
        {
			CreateNode node = new CreateNode();
			node.data = value;
			node.next = null;
			return InitNode;
        }
	}
}