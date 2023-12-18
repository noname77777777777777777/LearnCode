import java.util.Scanner;

public class NhanVienCLCAO extends Nhanvien {
    private String Trinhdo;
    private String Nghan;
    private String NoiDaoToa;

    public NhanVienCLCAO(){
        super();
        Trinhdo = null;
        Nghan = null;
        NoiDaoToa = null;
    }
    public NhanVienCLCAO(String ten, int ngaysinh,String lyong,int ngaynhanviec,PhongBanKhoa pkl,String trinhdo,String nghan,String noiDaoToa){
        super(ten,ngaysinh,lyong,ngaynhanviec,pkl);
        this.Trinhdo = trinhdo;
        this.Nghan = nghan;
        this.NoiDaoToa = noiDaoToa;
    }
    public NhanVienCLCAO(NhanVienCLCAO nhanVienCLCAO,Nhanvien nhanvien,Nguoi nguoi,PhongBanKhoa pbk){
        super(nhanvien,nguoi,pbk);
        this.Trinhdo = nhanVienCLCAO.Trinhdo;
        this.Nghan = nhanVienCLCAO.Nghan;
        this.NoiDaoToa = nhanVienCLCAO.NoiDaoToa;
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap trinh do nhan vien : ");
        Trinhdo = sc.nextLine();
        System.out.println("Nhap nganh nhan vien : ");
        Nghan = sc.nextLine();
        System.out.println("Nhap noi dao tao nhan vien : ");
        NoiDaoToa = sc.nextLine();
    }

    @Override
    public String toString() {
        return super.toString() + "\n Xuat trinh do nhan vien : "+Trinhdo+"\nXuat nganh nhna vien : "+Nghan+"\n Xuat Noi dao tao nhan vien : "+NoiDaoToa;
    }
}
