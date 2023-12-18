import java.util.Scanner;

abstract public class Tailieu {
    protected String maso,ten;
    protected float giaban;
    public float getGiaban(){
        return giaban;
    }
    public Tailieu(){
        maso = null;
        ten = null;
        giaban = 0;
    }
    public Tailieu(String maso,String ten,float giaban){
        this.maso = maso;
        this.ten = ten;
        this.giaban = giaban;
    }
    public Tailieu(Tailieu tailieu){
        this.maso = tailieu.maso;
        this.ten = tailieu.ten;
        this.giaban = tailieu.giaban;
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap maso tai lieu : ");
        maso = sc.nextLine();
        System.out.println("Nhap ten tai lieu : ");
        ten = sc.nextLine();
        System.out.println("Nhap gia ban tai lieu : ");
        giaban = sc.nextFloat();
    }
    public void output(){
        System.out.println("Xuat maso tai lieu : " + maso);
        System.out.println("Xuat ten tai lieu : " + ten);
        System.out.println("Xuat gia ban tai lieu : " + giaban);
    }
    abstract void nhap();
    abstract void xuat();
    abstract float tinhtien();
}
