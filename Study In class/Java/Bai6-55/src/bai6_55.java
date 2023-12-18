// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
import java.util.*;
class NHANVIEN{
    private  String maso;
    private  String hoten;
    public static int luong_basic;
    private float heso_luong;
    public   static  int sl;


    public  NHANVIEN(){
        maso = null;
        hoten = null;
        luong_basic = 0;
        heso_luong = 0f;
        sl++;
    }
    //  constructor parameter
    public  NHANVIEN(String maso , String hoten , int luong_basic , float heso_luong){
        this.maso = maso;
        this.hoten = hoten;
        this.luong_basic = luong_basic;
        this.heso_luong = heso_luong;
        sl++;
    }
    //constructor copy
    public  NHANVIEN(NHANVIEN nhanvien){
        this.maso = nhanvien.maso;
        this.hoten = nhanvien.hoten;
        this.luong_basic = nhanvien.luong_basic;
        this.heso_luong = nhanvien.heso_luong;
        sl++;
    }

    // set/get (maso,hoten,soluong)
    public void setmaso(String maso){
        this.maso = maso;
    }
    public String getMaso() {
        return maso;
    }
    public void sethoten(String hoten){
        this.hoten = hoten;
    }
    public  String getHoten(){
        return hoten;
    }
    public void set_hesoluong(float heso_luong){
        this.heso_luong = heso_luong;
    }
    public  float get_hesoluong(){
        return  heso_luong;
    }

    // input nhan vien
    Scanner sc = new Scanner(System.in);
    public  void  input_nhanvien(){
        System.out.println("nhap ma so nhan vien  ");
        maso = sc.nextLine();
        System.out.println("nhap hoten nhan vien  ");
        hoten = sc.nextLine();
        System.out.println("nhap he so luong  nhan vien  ");
        heso_luong = sc.nextFloat();
    }
    //output nhan vien
    public  void  output_nhanvien(){
        System.out.println("ma so nhan vien : "+maso);
        System.out.println("ho ten nhan vien : "+hoten);
        System.out.println(" luong co ban nhan vien : "+luong_basic);
        System.out.println("he so nhan vien : "+heso_luong);
        System.out.println("so luong nhan vien : "+sl);
    }
    public float Calculator_Luong_NV(){
        return  get_hesoluong()*luong_basic;
    }
    public void SLNV(){
        System.out.println("so luong nhan vien"+sl);
    }
}
public class bai6_55 {
    public static void main(String[] args) {


        NHANVIEN N1 =new NHANVIEN();
        NHANVIEN N2 = new NHANVIEN("11","lu thanh y",3000,(float) 1.7);
        NHANVIEN N3 = new NHANVIEN(N1);


        NHANVIEN N4 = new NHANVIEN();
        N4.luong_basic = 300;
        N4.input_nhanvien();
        N4.output_nhanvien();

        System.out.println();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ten moi can doi ");
        String newname = sc.nextLine();
        N4.sethoten(newname);
        N4.output_nhanvien();

        // Nhan vien co he so lon nhan giua n1 n4 n3
        float max = N1.get_hesoluong();
        if(N2.get_hesoluong()>max && N4.get_hesoluong()>max){
            if(N2.get_hesoluong()> N4.get_hesoluong()){
                System.out.println("Nhan vien co HSL lon nhat la: ");
                System.out.print(N2.getHoten());
            }else{
                System.out.println("Nhan vien co HSL lon nhat la: ");
                System.out.println(N4.getHoten());
            }
        }else{
            System.out.println("Nhan vien co HSL lon nhat la: ");
            System.out.println(N1.getHoten());
        }

        // xuat so luong nhan vien
        System.out.println("so luong nhan vien"+N4.sl);
       }
}