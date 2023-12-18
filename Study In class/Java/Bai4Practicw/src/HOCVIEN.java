import java.util.Scanner;

public class HOCVIEN extends CONNGUOI {
    private float point1;
    private float point2;
    private float point3;

    public HOCVIEN() {
        point1 = 0;
        point2 = 0;
        point3 = 0;
    }

    public HOCVIEN(float point1, float point2, float point3) {
        this.point1 = point1;
        this.point2 = point2;
        this.point3 = point3;
    }
    public  void input(){
        super.input();
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap Diem 1 : ");
        point1 = sc.nextFloat();
        System.out.println("Nhap Diem 2 : ");
        point2 = sc.nextFloat();
        System.out.println("Nhap Diem 3 : ");
        point3 = sc.nextFloat();
    }

    @Override
    public String toString() {
        return super.toString() + "\ndiem mon 1 : " + point1 + "\ndiem mon 2 : " + point2 + "\n diem mon 3 : " + point3;
    }
}
