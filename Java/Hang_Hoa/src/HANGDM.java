import java.util.Scanner;

public class HANGDM extends HANGHOA {
    private int thoigianbh;
    private int dienap;
    private int congxuat;

    public HANGDM() {
        super();
        this.thoigianbh = 0;
        this.dienap = 0;
        this.congxuat = 0;
    }

    public HANGDM(String mh, String tenhang, long dongia, int thoigianbh, int dienap, int congxuat) {
        super(mh, tenhang, dongia);
        this.thoigianbh = thoigianbh;
        this.dienap = dienap;
        this.congxuat = congxuat;
    }

    public void nhap() {
        Scanner sc = new Scanner(System.in);
        super.nhap();
        System.out.println("Nhap thoi gian bao hanh ");
        thoigianbh = sc.nextInt();
        System.out.println("Nhap dien ap");
        dienap = sc.nextInt();
        System.out.println("Nhap cong xuat ");
        congxuat = sc.nextInt();
    }

    public void xuat() {
        super.xuat();
        System.out.println("xuat thoi gian bao hanh : " + thoigianbh);
        System.out.println("xuat dien ap : " + dienap);
        System.out.println("xuat cong xuat " + congxuat);
    }
}
