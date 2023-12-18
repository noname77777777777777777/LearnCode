/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class NhanVienQuanLi extends NhanVienCLC{
    private long luongPC;

    public NhanVienQuanLi() {
    }

    public NhanVienQuanLi(long luongPC, String chuyenMon, String maNV, String tenNV, int namSinh, String trinhDo) {
        super(chuyenMon, maNV, tenNV, namSinh, trinhDo);
        this.luongPC = luongPC;
    }

    public long tinhLuong(){
        return nhanvien.lcb+this.luongPC;
    }
    public void xuat(){
        super.output();
        System.out.println(" "+luongPC);
    }
    public void nhap(){
        Scanner x = new Scanner(System.in);
        super.input();
        System.out.println("Nhap phu cap chuc vu ");
        this.luongPC = x.nextLong();
    }
}
