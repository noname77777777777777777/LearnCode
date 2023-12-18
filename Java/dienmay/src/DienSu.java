public class DienSu extends hanghoa {
    private int timebh;
    private int dienap;
    private int consuat;

    public DienSu() {
        super();
        timebh = 0;
        dienap = 0;
        consuat = 0;
    }

    public DienSu(String mahang, String tenhang, String NhaSX, int timebh, int dienap, int consuat) {
        super(mahang, tenhang, NhaSX);
        this.timebh = timebh;
        this.dienap = dienap;
        this.consuat = consuat;
    }

    public DienSu(DienSu h2) {
        super(h2.getmahang(), h2.gettenhang(), h2.getnhasx());
        this.timebh = h2.timebh;
        this.dienap = h2.dienap;
        this.consuat = h2.consuat;
    }

    public void output_DienSu() {
        super.Output_HangHoa();
        System.out.println("time bao hanh hang hoa la " + timebh + "\n dien ap hang hoa la : " + dienap + "\n Cong xuat la " + consuat);
    }

    @Override
    public String toString() {
        return super.toString() + "\nthoi gian bao hanh " + timebh + "\ndien ap hang hao : " + dienap + "\ncong suat : " + consuat;
    }
}
