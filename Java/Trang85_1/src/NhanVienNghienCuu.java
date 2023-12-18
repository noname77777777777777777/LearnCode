/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class NhanVienNghienCuu extends NhanVienCLC {
    private long PCDocHai;

    public NhanVienNghienCuu() {
    }

    public NhanVienNghienCuu(long PCDocHai, String chuyenMon, String maNV, String tenNV, int namSinh, String trinhDo) {
        super(chuyenMon, maNV, tenNV, namSinh, trinhDo);
        this.PCDocHai = PCDocHai;
    }
    public long tinhLuong(){
        return nhanvien.lcb+this.PCDocHai;
    }
    public void xuat(){
        super.output();
        System.out.println(" "+this.PCDocHai);
    }
    public void nhap(){
        Scanner x = new Scanner(System.in);
        super.input();
        System.out.println("Nhap luong phu cap doc hai ");
        this.PCDocHai = x.nextLong();
    }
}
