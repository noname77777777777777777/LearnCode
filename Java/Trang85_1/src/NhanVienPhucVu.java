/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
public class NhanVienPhucVu extends nhanvien {

    public NhanVienPhucVu() {
    }
    
    @Override
    public void xuat(){
        super.output();
    }
    @Override
    public void nhap(){
        super.input();
    }
    @Override
    public long tinhLuong(){
        return nhanvien.lcb;
    }
}
