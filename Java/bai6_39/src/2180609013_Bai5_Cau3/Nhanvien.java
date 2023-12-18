import java.util.Scanner;

class PhongBanKhoa {
    private String mapbk;
    private String tenpbk;
    public PhongBanKhoa(){
        mapbk = null;
        tenpbk = null;
    }
    public PhongBanKhoa(String mapbk,String tenpbk){
        this.mapbk = mapbk;
        this.tenpbk = tenpbk;
    }
    public PhongBanKhoa(PhongBanKhoa phongBanKhoa){
        this.mapbk = phongBanKhoa.mapbk;
        this.tenpbk = phongBanKhoa.tenpbk;
    }
    public void input(){
        Scanner sc  = new Scanner(System.in);
        System.out.println("Nhap phong ban khoa");
        System.out.println("Nhap ma phong ban khoa : ");
        mapbk = sc.nextLine();
        System.out.println("Nhap ten phong ban khoa : ");
        tenpbk = sc.nextLine();
    }

    @Override
    public String toString() {
        return "\n xuat ma phong ban khoa : "+mapbk+"\nXuat ten phong khoa : "+tenpbk;
    }
}
public class Nhanvien extends Nguoi {
    private  String Lyong;
    private int ngaynhanviec;   
    private PhongBanKhoa PBK;

    public Nhanvien(){
        super();
        Lyong = null;
        ngaynhanviec = 0;
        PBK = new PhongBanKhoa();
    }
    public Nhanvien(String ten, int ngaysinh,String lyong,int ngaynhanviec,PhongBanKhoa pkl){
        super(ten,ngaysinh);
        this.Lyong  = lyong;
        this.ngaynhanviec = ngaynhanviec;
        PBK = new PhongBanKhoa(pkl);
    }
    public Nhanvien(Nhanvien nhanvien,Nguoi nguoi,PhongBanKhoa pbk){
        super(nguoi);
        this.Lyong = nhanvien.Lyong;
        this.ngaynhanviec = nhanvien.ngaynhanviec;
        this.PBK = new PhongBanKhoa(pbk);
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap ly ong ");
        Lyong = sc.nextLine();
        System.out.println("Nhap ngay nhan viec ");
        ngaynhanviec = sc.nextInt();
        PBK.input();
    }

    @Override
    public String toString() {
        return super.toString() + "\nxuat ly ong  : " +Lyong+"\n xuat ngay nhan viec : "+ngaynhanviec+PBK.toString();
    }
}

