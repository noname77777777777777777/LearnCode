namespace FT
{
    internal class Program
    {
        public static void Hello()
        {
            // IntArr
            IntArray arr = new IntArray(10);
            arr.Show();
            Console.WriteLine();

            // Linked List
            IntLinkedList list = new IntLinkedList();
            list.Input();
            list.Show();


            // Tree

            IntBinaryTree tree = new IntBinaryTree();
            tree.Insert(10);
            tree.Insert(7);
            tree.Insert(19);
            tree.Insert(16);
            tree.PreOrder();
        }
        
        public static void Ex1()
        {
            
        }

        public static void Ex2()
        {

        }

        public static void Ex3()
        {

        }
        
        /*
         * Thang điểm 5
         * Sai kiểu trả về: - 25%
         * Đặt tên biến, phương thức cẩu thả: -10%
         * 
         */
        static void Main(string[] args)
        {
            Console.WriteLine("Đinh Minh Hòa - 11DH110005");
            // Environment Testing
            Hello();

            // Exercises
            Ex1();
            Ex2();
            Ex3();
        }
    }
}