import java.util.Scanner;

class PHONGBANKHOA{
    private  String idpbk;
    private  String tenpbk;

    public  void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("\n Nhap ID Phong Ban : ");
        idpbk = sc.nextLine();
        System.out.println("\n Nhap Ten Phong Ban : ");
        tenpbk = sc.nextLine();
    }

    @Override
    public String toString() {
        return "\n ID phong ban : "+idpbk+"\n Ten phong ban : "+tenpbk;
    }
}
public class NHAVIEN extends CONNGUOI{
    private  long luong;
    private  int ngaynhanviec;
    private  PHONGBANKHOA PBK = new PHONGBANKHOA();

    public  void input(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("\n Nhap luong: ");
        luong = sc.nextLong();
        System.out.println("\n Nhap ngay nhan viec : ");
        ngaynhanviec = sc.nextInt();
        PBK.input();
    }

    @Override
    public String toString() {
        return super.toString() + "\n luong nhan vien :  "+luong+"\n Ngay nhan viec : "+ngaynhanviec+PBK.toString();
    }
}
