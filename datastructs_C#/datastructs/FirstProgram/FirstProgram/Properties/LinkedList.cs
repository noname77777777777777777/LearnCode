using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using linkedlist.node;

namespace linkedlist
{
     class LinkedLt
    {
       public CreateNode head;
       public InitNode{
            head = null;       
        }
       public void AddNode(int data)
        {
            CreateNode Node = new CreateNode();
            Node.next = null;
            Node.Linkedlistnode(data);
        }
        
    }
}
