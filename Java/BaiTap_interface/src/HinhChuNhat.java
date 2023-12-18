import java.util.Scanner;

public class HinhChuNhat implements IO_interface, Shape_Interface {
    private double x,y;
    public HinhChuNhat(){
        this.x = 0;
        this.y = 0;
    }
    public HinhChuNhat(double x,double y){
        this.x = x;
        this.y = y;
    }
    @Override
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap chieu dai");
        x = sc.nextDouble();
        System.out.println("Nhap chieu tong");
        y = sc.nextDouble();
    }

    @Override
    public void output() {
        System.out.println("Dien tich : "+calArea());
        System.out.println("Chu vi : "+calPerimeter());
    }

    @Override
    public double calArea() {
        return x*y;
    }

    @Override
    public double calPerimeter() {
        return (x+y)*2;
    }
}
