import java.util.Scanner;

public class Hocvien extends Nguoi {
    private int point1;
    private int point2;
    private int point3;
    public Hocvien(){
        super();
        point1 = 0;
        point2 = 0;
        point3 = 0;
    }
    public Hocvien(String ten,int ngaysinh,int point1,int point2,int point3){
        super(ten,ngaysinh);
        this.point1 = point1;
        this.point2 = point2;
        this.point3 = point3;
    }
    public Hocvien(Hocvien hocvien,Nguoi nguoi){
        super(nguoi);
        this.point1 = hocvien.point1;
        this.point2 = hocvien.point2;
        this.point3 = hocvien.point3;
    }
    public void input(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap diem");
        System.out.println("NHap point 1 : ");
        point1 = sc.nextInt();
        System.out.println("NHap point 2 : ");
        point2 = sc.nextInt();
        System.out.println("NHap point 3 : ");
        point3 = sc.nextInt();
    }

    @Override
    public String toString() {
        return super.toString() + "\n xuat diem 1 : "+point1+"\n xuat diem 2 : "+point2+"\n xuat diem 3 : " +point3;
    }
}
