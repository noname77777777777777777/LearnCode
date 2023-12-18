import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;
public class Main {
    public static void menu(){
        System.out.println("1.Nhap ten 1 hoc vien");
        System.out.println("2.Nhap ten mot nhan vien");
        System.out.println("3.Xuat thong tin 1 hoc vien");
        System.out.println("4.Xuat thong tin 1 nhan vien ");
        System.out.println("5.Thoat");
    }
    public static void main(String[] args) {
        ArrayList<CONNGUOI> h3 = new ArrayList<CONNGUOI>();
        int number;
        do{
            menu();
            System.out.println("Nhap Syntax can lam ");
            Scanner sc = new Scanner(System.in);
            number = sc.nextInt();
            switch (number){
                case 1:
                    HOCVIEN h1 = new HOCVIEN();
                    h1.input();
                    h3.add(h1);
                    break;
                case 2:
                    NHAVIEN h2 = new NHAVIEN();
                    h2.input();
                    h3.add(h2);
                    break;
                case 3:
                    System.out.println("xuat danh sach hoc sinh");
                    for(int i = 0 ; i < h3.size();i++){
                        if(h3.get(i) instanceof HOCVIEN)
                            {
                                System.out.println(h3.get(i).toString());
                            }
                    }
                    break;
                case 4:
                    System.out.println("xuat danh sach hoc sinh");
                    for(int i = 0 ; i < h3.size();i++){
                        System.out.println(" hoc sinh thu : "+i+1);
                        if(h3.get(i) instanceof NHAVIEN){
                            System.out.println(h3.get(i).toString());
                        }
                    }
                    break;
                case 5:
                    break;
            }
        }while (true);
    }
}