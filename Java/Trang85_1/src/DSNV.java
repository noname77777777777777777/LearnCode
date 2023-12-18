/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.*;
public class DSNV {
    ArrayList<nhanvien> ds = new ArrayList<nhanvien>();
    public void themNV(nhanvien a){
        ds.add(a);
    }
    public void xuatDS(){
       for(nhanvien b : ds){
           b.xuat();
           System.out.println("Luong cua nhan vien = "+b.tinhLuong());
       }
   }
}