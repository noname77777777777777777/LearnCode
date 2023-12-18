import java.util.Scanner;
class HocSinh{
	
	private int maso;
	private String hoten;
	private float dtb;
	public HocSinh() {
		maso = 16;
		hoten = "lu thanh y";
		dtb = 10;
	}
	public HocSinh(int maso,String hoten,double dtb) {
		this.maso = maso;
		this.hoten = hoten;
		this.dtb = (float)dtb;
	}
	public HocSinh(HocSinh obj) {
		maso = obj.maso;
		hoten = obj.hoten;
		dtb = obj.dtb;
	}
	public void setmaso(int ms) {
		maso = ms;
	}
	public int getmaso() {
		return maso;
	}
	public void sethoten(String ht) {
		hoten = ht;
	}
	public String gethoten() {
		return hoten;
	}
	public void setdtb(float dt) {
		dtb = dt;
	}
	public float getdtb() {
		return dtb;
	}
	
	Scanner ip = new Scanner(System.in);
	public void Input() {
		System.out.print("Nhap ma so hoc sinh ");
		maso = ip.nextInt();
		ip.nextLine();
		System.out.print("Nhap ho ten hoc sinh ");
		hoten = ip.nextLine();
		System.out.print("Nhap diem trung binh hoc sinh ");
		dtb  = ip.nextFloat();
	}
	public void output() {
		System.out.println("Ma so "+maso);
		System.out.println("Ho ten "+hoten);
		System.out.println("Diem trung binh "+dtb);
	}
	public void rank() {
		if(dtb < 2) {
			System.out.println("Hoc Sinh Yeu");
		}else if(dtb < 6.5) {
			System.out.println("Hoc Sinh Trung Binh");
		}else if(dtb < 8) {
			System.out.println("Hoc Sinh Kha");
		}else {
			System.out.println("Hoc Sinh Gioi");
		}
	}
}
 class Demo1 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		HocSinh hs = new HocSinh();
//		hs.Input();
//		hs.output();
//		hs.rank();
//		
//		String newname;
//		Scanner sc = new Scanner(System.in);
//		System.out.println("Nhap ten moi cua hoc sinh ");
//		newname = sc.nextLine();
//		hs.sethoten(newname);
//		hs.output();
//		
//		HocSinh bs = new HocSinh();
//		bs.Input();
//		if(bs.getdtb() > hs.getdtb()) {
//			System.out.println(bs.gethoten() + " co diem trung binh lon hon " + hs.gethoten());
//		}else {
//			System.out.println(hs.gethoten() + " co diem trung binh lon hon " + bs.gethoten());
//		}
		HocSinh newhs = new HocSinh();
		HocSinh newhs2 = new HocSinh(16, "Y", 1.6);
		HocSinh newhs3 = new HocSinh(newhs);
		newhs.output();
		newhs2.output();
		newhs3.output();
	}

}
