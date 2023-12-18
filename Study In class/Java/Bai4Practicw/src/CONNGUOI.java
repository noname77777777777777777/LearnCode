import java.util.Scanner;

public class CONNGUOI {
    protected String hoten;
    public CONNGUOI(){
        hoten = null;
    }
    public CONNGUOI(String tenconnguoi){
        this.hoten = tenconnguoi;
    }
    public  void  input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ten con nguoi ");
        hoten = sc.nextLine();
    }
    @Override
    public String toString() {
        return "Ten human : "+hoten;
    }
}
