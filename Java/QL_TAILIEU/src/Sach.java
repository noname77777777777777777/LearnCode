import java.util.Scanner;

public class Sach extends Tailieu{
    private int namxb,sotrang;
    public Sach(){
        namxb = 0;
        sotrang = 0;
    }
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap nam xuat ban : ");
        namxb = sc.nextInt();
        System.out.println("Nhap so trang : ");
        sotrang = sc.nextInt();
    }
    public void xuat(){
        super.output();
        System.out.println("Xuat nam xuat ban : "+namxb);
        System.out.println("Xuat so trang : "+sotrang);
        System.out.println("Xuat tinh tien : "+tinhtien());
    }
    public float tinhtien(){
        if(namxb<2019){
            return  giaban*0.3f;
        }else if(namxb<2021){
            return   giaban*0.1f;
        }
        return giaban;
    }
}
