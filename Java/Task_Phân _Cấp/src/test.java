class hanghoa{
	private  String mahang;
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
	public hanghoa(String mahang,String tenhang,String NhaSX) {
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
		System.out.println("ma hang hoa la " +mahang+"\n ten hang hoa la : "+tenhang+"\n Nha San xuat la "+NhaSX);
	}
}
 class DienSu extends hanghoa{
	private int timebh;
	private int dienap;
	private int consuat;
	public DienSu() {
		super();
		timebh = 0;
		dienap = 0;
		consuat = 0;
	}
	public DienSu(String mahang,String tenhang,String NhaSX,int timebh,int dienap , int consuat) {
		super(mahang,tenhang,NhaSX);
		this.timebh = timebh;
		this.dienap = dienap;
		this.consuat = consuat;
	}
	public DienSu(DienSu h2) {
		super(h2.getmahang(),h2.gettenhang(),h2.getnhasx());
		this.timebh = h2.timebh;
		this.dienap = h2.dienap;
		this.consuat = h2.consuat;
	}
	public void output_DienSu() {
		super.Output_HangHoa();
		System.out.println("time bao hanh hang hoa la " +timebh+"\n dien ap hang hoa la : "+dienap+"\n Cong xuat la "+consuat);
	}
}
 class Sanhsu extends hanghoa {
	private String loaiSanhsu;
	public Sanhsu() {
		super();
		this.loaiSanhsu = null;
	}
	public Sanhsu(String mahang,String tenhang,String NhaSX,String loaiSanhsu) {
		super(mahang,tenhang,NhaSX);
		this.loaiSanhsu = loaiSanhsu;
	}
	public Sanhsu(Sanhsu h2) {
		super(h2.getmahang(),h2.gettenhang(),h2.getnhasx());
		this.loaiSanhsu = h2.loaiSanhsu;
	}
	public void output_Sanhsu() {
		super.Output_HangHoa();
		System.out.println("loai sanh su la " +loaiSanhsu);
	}
}
 class ThucPham extends hanghoa{
	private int ngaysx;
	private int ngayhethan;
	
	public ThucPham(String mahang,String tenhang,String NhaSX,int ngaysx,int ngayhethan) {
		super(mahang,tenhang,NhaSX);
		this.ngaysx = ngaysx;
		this.ngayhethan = ngayhethan;
	}
	public ThucPham(ThucPham h3) {
		super(h3.getmahang(),h3.gettenhang(),h3.getnhasx());
		this.ngaysx = h3.ngaysx;
		this.ngayhethan = h3.ngayhethan;
	}
	public void Output_ThucPham() {

		super.Output_HangHoa();
		System.out.println("ngay san xuat" +ngaysx);
		System.out.println("ngay het han" +ngayhethan);
		
	}
}
public class test {
	public static void main(String[] args) {
		hanghoa h1 = new hanghoa("lu","thanh","y");
		h1.Output_HangHoa();
		ThucPham h2 = new ThucPham("lu","thanh","y",15,16);
		h2.Output_ThucPham();
	}
}
