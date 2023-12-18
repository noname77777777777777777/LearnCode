import java.util.Scanner;

public class TamGiac implements IO_interface,Shape_Interface {
    private double x,y,z;
    public TamGiac(){
        this.x = 0;
        this.y = 0;
        this.z = 0;
    }
    public TamGiac(double x,double y,double z){
        this.x = x;
        this.y = y;
        this.z = z;
    }
    @Override
    public void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap x : ");
        x = sc.nextDouble();
        System.out.println("Nhap y : ");
        y = sc.nextDouble();
        System.out.println("Nhap z");
        z = sc.nextDouble();
    }
    @Override
    public void output() {
        System.out.println("Dien tich : "+calArea());
        System.out.println("Chu vi : "+calPerimeter());
    }

    @Override
    public double calArea() {
        return Math.sqrt(calPerimeter()/2*(calPerimeter()/2-x)*(calPerimeter()/2-y)*(calPerimeter()/2-z));
    }

    @Override
    public double calPerimeter() {
        return x+y+z;
    }
}
