import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
            ArrayList<Nguoi> danhsach = new ArrayList<>();
            Scanner sc = new Scanner(System.in);
            int chon;
            do{
                System.out.println("1. Nhap 1 hoc vien ");
                System.out.println("2. Nhap 1 nhan vien quan ly ");
                System.out.println("3. Xuat danh sach hoc vien");
                System.out.println("4. Xuat thong tin danh sach hoc vien");
                System.out.println("5. Xuat thong tin danh sach nhan vien quan ly");
                System.out.println("6. Xuat thong tin danh sach giao vien");
                System.out.println("0. thoat");
                System.out.println("nhap thao tac muon lam");
                chon = sc.nextInt();
                switch (chon){
                    case 1:
                        Nguoi hocvien = new Hocvien();
                        hocvien.input();
                        danhsach.add(hocvien);
                        break;
                    case 2:
                         Nguoi nhanvien = new NVQuangLy();
                        nhanvien.input();
                        danhsach.add(nhanvien);
                        break;
                    case 3:
                        Nguoi giaovien = new GiaoVien();
                        giaovien.input();
                        danhsach.add(giaovien);
                        break;
                    case 4:
                        for (Nguoi nguoi:danhsach) {
                            if(nguoi instanceof Hocvien){
                                System.out.println(nguoi.toString());
                            }
                        }
                        break;
                    case 5:
                        for (Nguoi nguoi:danhsach) {
                            if (nguoi instanceof  NVQuangLy){
                                System.out.println(nguoi.toString());
                            }
                        }
                        break;
                    case 6:
                        for (Nguoi nguoi:danhsach) {
                            if (nguoi instanceof GiaoVien){
                                System.out.println(nguoi.toString());
                            }
                        }
                        break;

                }
            }while (chon!=0);
        }
}