import java.util.Scanner;

public class Nguoi {
    protected String ten;
    protected int namsinh;
    public Nguoi(){
        ten = null;
        namsinh = 0;
    }
    public Nguoi(String ten,int namsinh){
        this.ten = ten;
        this.namsinh = namsinh;
    }
    public Nguoi(Nguoi nguoi){
        this.ten = nguoi.ten;
        this.namsinh = nguoi.namsinh;
    }
    public void  input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap thong tin person ");
        System.out.println("Nhap ten person : ");
        ten = sc.nextLine();
        System.out.println("Nhap nam sinh person : ");
        namsinh = sc.nextInt();
    }

    @Override
    public String toString() {
        return "\n xuat ten person : "+ten+"\n xuat nam sinh person : "+namsinh;
    }
}
