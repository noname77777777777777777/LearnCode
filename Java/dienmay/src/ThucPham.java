public class ThucPham extends hanghoa {
    private int ngaysx;
    private int ngayhethan;

    public ThucPham(String mahang, String tenhang, String NhaSX, int ngaysx, int ngayhethan) {
        super(mahang, tenhang, NhaSX);
        this.ngaysx = ngaysx;
        this.ngayhethan = ngayhethan;
    }

    public ThucPham(ThucPham h3) {
        super(h3.getmahang(), h3.gettenhang(), h3.getnhasx());
        this.ngaysx = h3.ngaysx;
        this.ngayhethan = h3.ngayhethan;
    }

    public void Output_ThucPham() {

        super.Output_HangHoa();
        System.out.println("ngay san xuat" + ngaysx);
        System.out.println("ngay het han" + ngayhethan);

    }

    @Override
    public String toString() {
        return super.toString() + "\nngay san xuat " + ngaysx + "\nNgay het han " + ngayhethan;
    }
}
