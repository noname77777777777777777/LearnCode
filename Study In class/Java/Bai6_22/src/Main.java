class PhuongTrinhBacNhat{

    private int a;
    private int b;

    public void setters_a(int a) {
        this.a = a;
    }
    public int getters_a() {
        return a;
    }

    public void setters_b(int b) {
        this.b = b;
    }
    public int getters_b() {
        return b;
    }

    public PhuongTrinhBacNhat() {
        this.a = 0;
        this.b = 0;
    }
    public PhuongTrinhBacNhat(PhuongTrinhBacNhat h1) {
        this.a = h1.a;
        this.b = h1.b;
    }
    public PhuongTrinhBacNhat(int a,int b) {
        this.a = a;
        this.b = b;
    }

    public void giaiPT() {
        if(a != 0) {
            System.out.println("Phuong Trinh Co Nghiem La x =  "+(-getters_b()/(double)getters_a()));
        }else {
            if(b==0) {
                System.out.println("Phuong Trinh Vo So Nghiem");
            }else {
                System.out.println("Phuong Trinh Vo  Nghiem");
            }
        }
    }
}

public class Demo {
    public static void main(String[] args) {
        // truong hop co nghiem
        PhuongTrinhBacNhat pt = new PhuongTrinhBacNhat(3,4);
        pt.giaiPT();
        // truong hop vo so nghiem
        PhuongTrinhBacNhat pt2 = new PhuongTrinhBacNhat();
        pt2.giaiPT();
        // truong hop vo nghiem
        PhuongTrinhBacNhat pt3 = new PhuongTrinhBacNhat(0,4);
        pt3.giaiPT();
    }
}