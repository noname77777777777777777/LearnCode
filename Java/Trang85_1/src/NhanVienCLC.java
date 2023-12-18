/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.Scanner;

/**
 *
 * @author Admin
 */
abstract public class NhanVienCLC extends nhanvien {
    private String chuyenMon;

    public NhanVienCLC() {
    }

    public NhanVienCLC(String chuyenMon, String maNV, String tenNV, int namSinh, String trinhDo) {
        super(maNV, tenNV, namSinh, trinhDo);
        this.chuyenMon = chuyenMon;
    }
    public void output(){
        super.output();
        System.out.print(" "+this.chuyenMon);
    }
    public void input(){
        Scanner x = new Scanner(System.in);
        super.input();
        System.out.println("Nhap vao chuyen mon ");
        this.chuyenMon = x.nextLine();
    }
    
}
