import java.util.Scanner;

 class GiaoVien extends NhanVienCLCAO {
    private long ThulaoGD;
    public GiaoVien(){
        super();
        ThulaoGD = 0;
    }
    public GiaoVien(String ten, int ngaysinh,String lyong,int ngaynhanviec,PhongBanKhoa pkl,String trinhdo,String nghan,String noiDaoToa,long thulaoGD){
        super(ten, ngaysinh, lyong, ngaynhanviec, pkl, trinhdo, nghan, noiDaoToa);
        this.ThulaoGD = thulaoGD;
    }
    public GiaoVien(GiaoVien giaoVien,NhanVienCLCAO nhanVienCLCAO,Nhanvien nhanvien,Nguoi nguoi,PhongBanKhoa pbk){
        super(nhanVienCLCAO, nhanvien, nguoi, pbk);
        this.ThulaoGD = giaoVien.ThulaoGD;
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap thu lao giao vien ");
        ThulaoGD = sc.nextLong();
    }

    @Override
    public String toString() {
        return super.toString() + "\n xuat thu lao giao vien "+ThulaoGD;
    }
}
