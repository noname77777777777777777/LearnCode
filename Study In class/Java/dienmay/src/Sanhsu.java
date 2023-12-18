public class Sanhsu extends hanghoa {
    private String loaiSanhsu;

    public Sanhsu() {
        super();
        this.loaiSanhsu = null;
    }

    public Sanhsu(String mahang, String tenhang, String NhaSX, String loaiSanhsu) {
        super(mahang, tenhang, NhaSX);
        this.loaiSanhsu = loaiSanhsu;
    }

    public Sanhsu(Sanhsu h2) {
        super(h2.getmahang(), h2.gettenhang(), h2.getnhasx());
        this.loaiSanhsu = h2.loaiSanhsu;
    }

    public void output_Sanhsu() {
        super.Output_HangHoa();
        System.out.println("loai sanh su la " + loaiSanhsu);
    }

    @Override
    public String toString() {
        return super.toString() + "\nloai sanh su " + loaiSanhsu;
    }
}
