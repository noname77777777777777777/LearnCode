import java.util.Scanner;

public class HANGTP extends HANGHOA {
    private int ngaysx;
    private int ngayhh;

    public HANGTP() {
        super();
        this.ngaysx = 0;
        this.ngayhh = 0;
    }

    public HANGTP(String mh, String tenhang, long dongia, int ngaysx, int ngayhh) {
        super(mh, tenhang, dongia);
        this.ngaysx = ngaysx;
        this.ngayhh = ngayhh;
    }

    public void nhap() {
        Scanner sc = new Scanner(System.in);
        super.nhap();
        System.out.println("Nhap ngay san xuat ");
        ngaysx = sc.nextInt();
        System.out.println("Nhap ngay het han ");
        ngayhh = sc.nextInt();
    }

    public void xuat() {
        super.xuat();
        System.out.println("xuat  ngay san xuat : " + ngaysx);
        System.out.println("xuat ngay het han : " + ngayhh);
    }
}
