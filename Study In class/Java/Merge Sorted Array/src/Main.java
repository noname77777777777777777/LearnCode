public class Main {
    public static void main(String[] args) {
        Enter_Array h1 = new Enter_Array();
        h1.Enter_Amount();
        h1.Enter_Element();
        Enter_Array h2 = new Enter_Array();
        h2.Enter_Amount();
        h2.Enter_Element();

        Solution h3 = new Solution();
        //123000,256
        h3.merge(h1.nums, 3, h2.nums, 3);
    }
}