import java.util.Scanner;

public class HANGHOA {
    protected String mahang;
    protected String tenhang;
    protected long dongia;

    // khoi tao phuong thuc
    public HANGHOA() {
        mahang = null;
        tenhang = null;
        dongia = 0;
    }

    // khoi tao phuong thuc truyen tham so
    public HANGHOA(String mh, String th, long dg) {
        this.mahang = mh;
        this.tenhang = th;
        this.dongia = dg;
    }

    public void nhap() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ma hang ");
        mahang = sc.nextLine();
        System.out.println("Nhap ten hang ");
        tenhang = sc.nextLine();
        System.out.println("Nhap don gia  ");
        dongia = sc.nextLong();
    }

    public void xuat() {
        System.out.println("xuat ma hang :  " + mahang);
        System.out.println("xuat ten hang :  " + tenhang);
        System.out.println("xuat don gia : " + dongia);
    }
}
