import java.util.Date;
import java.util.Scanner;

 public  class Bao extends Tailieu{
    private Date ngayphathanh;
    public Bao(){
        ngayphathanh = new Date();
    }
    public Bao(Date ngayphathanh){
        this.ngayphathanh = ngayphathanh;
    }
    public void nhap(){
        Scanner sc = new Scanner(System.in);
        super.input();
        System.out.println("Nhap ngay : ");
        int ngay = sc.nextInt();
        ngayphathanh.setDate(ngay);
        System.out.println("Nhap thang : ");
        int thang = sc.nextInt();
        ngayphathanh.setMonth(thang -1);
        System.out.println("Nhap nam : ");
        int year = sc.nextInt();
        ngayphathanh.setYear(year - 1900);
    }
     public void xuat(){
        super.output();
            System.out.println("xuat ngay thang nam + " + ngayphathanh+"\ntinh tien : "+tinhtien());
    }
    public float tinhtien(){
        Date ngay = new Date(123,4,12);
        if(ngayphathanh.before(ngay)){
            return   giaban*0.5f;
        }
        return giaban;
    }
}
