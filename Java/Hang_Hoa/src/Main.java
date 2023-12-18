import java.util.*;
public class Main {
    public static void main(String[] args) {
        byte chon;
        Scanner sc = new Scanner(System.in);
        NewDSHANGHOA dshh = new NewDSHANGHOA();
        HANGHOA h;
        do{
            System.out.println("1: Them 1 mat hang vao danh sach");
            System.out.println("2: Xuat mat hang theo danh sach");
            System.out.println("0: Thoat ");
            System.out.println("Chon chuc nang");
            chon = sc.nextByte();
            switch (chon){
                case 1:
                    System.out.println("1. hang dien may,2. hang thuc pham . Hay chon loai mat hang");
                    byte loai = sc.nextByte();
                    if(loai == 1){
                        h = new HANGDM();
                    }else{
                        h = new HANGTP();
                    }
                    h.nhap();
                    dshh.Addds(h);
                    break;
                case 2:
                    System.out.println("Xuat danh sach mat hang nao (1.DM/2.TP)");
                    byte loatmh = sc.nextByte();
                    dshh.Xuatds(loatmh);
                    break;
                default :
                    if(chon == 0){
                        break;
                    }
            }
        }while (true);
    }
}
//public class Main {
//    public static void main(String[] args) {
//        byte chon;
//        Scanner sc = new Scanner(System.in);
//        DSHANGHOA dshh = new DSHANGHOA();
//        HANGHOA h;
//        do{
//            System.out.println("1: Them 1 mat hang vao danh sach");
//            System.out.println("2: Xuat mat hang theo danh sach");
//            System.out.println("0: Thoat ");
//            System.out.println("Chon chuc nang");
//            chon = sc.nextByte();
//            switch (chon){
//                case 1:
//                    System.out.println("1. hang dien may,2. hang thuc pham . Hay chon loai mat hang");
//                    byte loai = sc.nextByte();
//                    if(loai == 1){
//                        h = new HANGDM();
//                    }else{
//                        h = new HANGTP();
//                    }
//                    h.nhap();
//                    dshh.ThemMH(h);
//                    break;
//                case 2:
//                    System.out.println("Xuat danh sach mat hang nao (1.DM/2.TP)");
//                    byte loatmh = sc.nextByte();
//                    dshh.xuatDSTheoLoai(loatmh);
//                    break;
//                default :
//                    if(chon == 0){
//                        break;
//                    }
//            }
//        }while (true);
//    }

//}