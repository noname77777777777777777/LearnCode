public class hanghoa {
    private String mahang;
    private String tenhang;
    private String NhaSX;

    public String getmahang() {
        return mahang;
    }

    public String gettenhang() {
        return tenhang;
    }

    public String getnhasx() {
        return NhaSX;
    }


    public hanghoa() {
        mahang = null;
        tenhang = null;
        NhaSX = null;
    }

    public hanghoa(String mahang, String tenhang, String NhaSX) {
        this.mahang = mahang;
        this.tenhang = tenhang;
        this.NhaSX = NhaSX;
    }

    public hanghoa(hanghoa h1) {
        this.mahang = h1.mahang;
        this.tenhang = h1.tenhang;
        this.NhaSX = h1.NhaSX;
    }

    public void Output_HangHoa() {
        System.out.println("ma hang hoa la " + mahang + "\n ten hang hoa la : " + tenhang + "\n Nha San xuat la " + NhaSX);
    }

    @Override
    public String toString() {
        return "\nma hang hoa la " + mahang + "\nten hang hoa la : " + tenhang + " \nNha San xuat la " + NhaSX;
    }
}
