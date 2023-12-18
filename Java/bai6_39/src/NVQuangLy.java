import java.util.Scanner;

public class NVQuangLy extends NhanVienCLCAO {
    private long PhucapCV;
    public NVQuangLy(){
        super();
        PhucapCV = 0;
    }
    public NVQuangLy(String ten, int ngaysinh,String lyong,int ngaynhanviec,PhongBanKhoa pkl,String trinhdo,String nghan,String noiDaoToa,long phucapCV){
        super(ten, ngaysinh, lyong, ngaynhanviec, pkl, trinhdo, nghan, noiDaoToa);
        this.PhucapCV = phucapCV;
    }
    public NVQuangLy(NVQuangLy nVQuangLy,NhanVienCLCAO nhanVienCLCAO,Nhanvien nhanvien,Nguoi nguoi,PhongBanKhoa pbk){
        super(nhanVienCLCAO, nhanvien, nguoi, pbk);
        this.PhucapCV = nVQuangLy.PhucapCV;
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap phu cap cong viec ");
        PhucapCV = sc.nextLong();
    }

    @Override
    public String toString() {
        return super.toString() + "\n xuat thu lao  "+PhucapCV;
    }
}
