 class NHANVIEN{
    private String manv;
    private String tennv;
    private long namsinh;
    private String trinhdo;
    private long luongcb;

    public NHANVIEN(){
        manv="";
        tennv="";
        namsinh = 0;
        trinhdo = "";
        luongcb = 0;
    }
    public NHANVIEN(String ma, String ten, long ns, String td, long luong){
        manv=ma;
        tennv=ten;
        namsinh=ns;
        trinhdo=td;
        luongcb=luong;
    }
    public void xuat(){
        System.out.println("Ma nhan vien: "+ manv);
        System.out.println("Ten nhan vien: "+ tennv);
        System.out.println("Nam sinh: "+ namsinh);
        System.out.println("Trinh do nhan vien: "+ trinhdo);
        System.out.println("Luong co ban: "+ luongcb);
    }
    abstract long tinhluong();

}
abstract class PHUCVU extends NHANVIEN{
    public PHUCVU(){
        super();
    }
    public PHUCVU(String ma, String ten, long ns, String td, long luong){
        super(ma,ten,ns,td,luong);
    }

    @Override
    public void xuat() {
        super.xuat();
    }
}
abstract class QUANLY extends NHANVIEN{
    private String truongdaotao;
    private String chuyenmon;
    private long phucap;
    public long tinhluong(){

    }

    public QUANLY(){
        super();
        truongdaotao="";
        chuyenmon="";
        phucap=0;
    }
    public QUANLY(String ma, String ten, long ns, String td, String truong, String cm, long luong, long pc){
        super(ma,ten,ns,td,luong);
        truongdaotao=truong;
        chuyenmon=cm;
        phucap=pc;
    }

    @Override
    public void xuat() {
        super.xuat();
        System.out.println("truong dao tao: "+ truongdaotao);
        System.out.println("Chuyen mon: "+ chuyenmon);
        System.out.println("Phu cap: "+ phucap);
    }
}
abstract class NGHIENCUU extends QUANLY{
    public NGHIENCUU(String ma, String ten, long ns, String td, String truong, String cm, long luong, long pc){
        super(ma,ten,ns,td,truong,cm,luong,pc);
    }
    public NGHIENCUU(){
        super();
    }

    @Override
    public void xuat() {
        super.xuat();
    }
}
public class Main {
    public static void main(String[] args) {
        NHANVIEN a=new PHUCVU("001","ten",2003,"dai hoc", 4000);

        a.xuat();
    }
}