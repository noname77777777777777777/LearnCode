
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        byte chon,loai;
        Scanner sc = new Scanner(System.in);
        //DSHHThuong ds = new DSHHThuong();
        DSNV ds = new DSNV();
        nhanvien h;
        nhanvien.lcb= 3000000;
        do{
                System.out.println("1. Them 1 nhan vien quan li ");
                System.out.println("2. them 1 nhan vien nghien cuu");
                System.out.println("3. them 1 nhan vien phuc vu");
                System.out.println("4. xuat danh sach nhan vien");
                System.out.println("0. Thoat");
                System.out.println("Chon chuc nang \n");
                chon = sc.nextByte();
                switch(chon){
                    case 1:
                        h = new NhanVienQuanLi();
                        h.nhap();
                        ds.themNV(h);
                        break;
                    case 2:
                        h = new NhanVienNghienCuu();
                        h.nhap();
                        ds.themNV(h);
                        break; 
                    case 3:
                        h = new NhanVienPhucVu();
                        h.nhap();
                        ds.themNV(h);
                        break;   
                    case 4:
                        ds.xuatDS();
                        break;
                    default: chon=0;break;
                 }
                
        }while(chon!=0);
    }
}
