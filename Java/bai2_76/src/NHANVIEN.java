public class NHANVIEN {
    private String manv;
    private String tennv;
    private long namsinh;
    private String trinhdo;
    private long luongcb;

    public NHANVIEN() {
        manv = "";
        tennv = "";
        namsinh = 0;
        trinhdo = "";
        luongcb = 0;
    }

    public NHANVIEN(String ma, String ten, long ns, String td, long luong) {
        manv = ma;
        tennv = ten;
        namsinh = ns;
        trinhdo = td;
        luongcb = luong;
    }

    public void xuat() {
        System.out.println("Ma nhan vien: " + manv);
        System.out.println("Ten nhan vien: " + tennv);
        System.out.println("Nam sinh: " + namsinh);
        System.out.println("Trinh do nhan vien: " + trinhdo);
        System.out.println("Luong co ban: " + luongcb);
    }

}
