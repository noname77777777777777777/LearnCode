import java.util.Date;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        QuangLySach ql = new QuangLySach();
        Scanner sc =  new Scanner(System.in);
        int chon;
        do {
            System.out.println("Chon phuong thuc muon lam ");
            chon =sc.nextInt();
            switch (chon){
                case 1:
                    Sach sach = new Sach();
                    sach.nhap();
                    ql.tailieus.add(sach);
                    break;
                case 2:
                    Bao bao = new Bao();
                    bao.nhap();
                    ql.tailieus.add(bao);
                    break;
                case 3:
                    ql.outputds();
                    break;
                case 4:
                    ql.xuattheocaiminhmuon((byte) 4);
                    break;
                case 5:
                    ql.xuattheocaiminhmuon( 5);
                    break;
                case 6:
                    ql.xuattheocaiminhmuon( 6);
                case 7:
                    break;
            }
        }while (chon!=7);
    }
}
