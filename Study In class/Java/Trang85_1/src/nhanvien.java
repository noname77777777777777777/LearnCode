

import java.util.Scanner;

abstract public class nhanvien {
    private String manv, tennv,trinhDo;
    static long lcb;
    private int namsinh;
    public nhanvien() {
    }

    public nhanvien(String maNV, String tenNV, int namSinh, String trinhDo) {
        this.manv = maNV;
        this.tennv = tenNV;
        this.namsinh = namSinh;
        this.trinhDo = trinhDo;
    }

    public String getManv() {
        return manv;
    }

    public void setManv(String manv) {
        this.manv = manv;
    }

    public String getTennv() {
        return tennv;
    }

    public void setTennv(String tennv) {
        this.tennv = tennv;
    }

    public int getNamsinh() {
        return namsinh;
    }

    public void setNamsinh(int namsinh) {
        this.namsinh = namsinh;
    }

    public String getTrinhDo() {
        return trinhDo;
    }

    public void setTrinhDo(String trinhDo) {
        this.trinhDo = trinhDo;
    }

    public static long getLcb() {
        return lcb;
    }

    public static void setLcb(long lcb) {
        nhanvien.lcb = lcb;
    }
    public void output(){
        System.out.println(this.manv +" "+this.tennv +" "+this.namsinh +" "+ nhanvien.lcb);
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap ma nhan vien ");
        this.manv = sc.nextLine();
        System.out.println("Nhap ten nhan vien");
        this.tennv = sc.nextLine();
        System.out.println("Nhap nam sinh ");
        this.namsinh = sc.nextInt();
        String l = sc.nextLine();
        System.out.println("Nhap trinh do ");
        this.trinhDo = sc.nextLine();
    }
    abstract public void nhap();
    abstract public void xuat();
    abstract public long tinhLuong();
}
