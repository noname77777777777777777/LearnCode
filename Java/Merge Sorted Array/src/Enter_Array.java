import java.util.Scanner;

public class Enter_Array {
    protected int nums[];
    private int amount;
    public void Enter_Amount(){
        Scanner sc = new Scanner(System.in);
        amount = sc.nextInt();
    }
    public void Enter_Element(){
        Scanner sc = new Scanner(System.in);
        nums = new int[amount];
        for (int i = 0 ; i < nums.length ;i++) {
            try{
                nums[i] = sc.nextInt();
            }catch(java.util.InputMismatchException e){
                System.out.println("Error format");
                sc.nextLine();
                nums[i] = sc.nextInt();
            }
        }
    }
    public void Output_Element() {
        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }
    }
}
