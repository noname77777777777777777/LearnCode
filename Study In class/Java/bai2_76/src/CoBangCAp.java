public abstract class CoBangCAp extends NHANVIEN {
    private String truongdaotao;
    private String chuyenmon;
    private long phucap;


    public CoBangCAp() {
        super();
        truongdaotao = "";
        chuyenmon = "";
        phucap = 0;
    }

    public CoBangCAp(String ma, String ten, long ns, String td, String truong, String cm, long luong, long pc) {
        super(ma, ten, ns, td, luong);
        truongdaotao = truong;
        chuyenmon = cm;
        phucap = pc;
    }

    @Override
    public void xuat() {
        super.xuat();
        System.out.println("truong dao tao: " + truongdaotao);
        System.out.println("Chuyen mon: " + chuyenmon);
        System.out.println("Phu cap: " + phucap);
    }
}
