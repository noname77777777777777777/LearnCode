import java.util.*;
class HocSinh{
	
	private int maso;
	private String hoten;
	private float dtb;
	
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
}
class DSHS{
	
	private HocSinh DS[];
	private int SL;


	public DSHS() {
		SL = 3;
		DS =new HocSinh[SL];
		for(int i = 0 ; i < SL ; i++) {
			DS[i] = new HocSinh();
		}
	}
	public DSHS(int SL) {
		this.SL = SL;
		DS =new HocSinh[SL];
		for(int i = 0 ; i < SL ; i++) {
			DS[i] = new HocSinh();
		}
	}
	Scanner sb =new Scanner(System.in);
	public void NhapSL() {
		System.out.println("SL hoc sinh");
		SL = sb.nextInt();
		sb.nextLine();
	}
	public void NhapDS() {
		for(int i = 0 ; i < SL ; i++) {
			System.out.println("Nhap danh Sach  hoc sinh thu "+i+" :");
			DS[i].Input();

		}
	}
	public void XuatDS() {
		for(int i = 0 ; i < SL ;i++) {
			System.out.println("Xuat danh Sach  hoc sinh thu "+i+" :");
			DS[i].output();
		}
	}
	public void SwapDs(HocSinh BS[] , int i , int j) {
		HocSinh temp = BS[i];
		BS[i] = BS[j];
		BS[j] = temp;
	}
	public void SapXepDS() {
		for(int i = 0 ; i < SL ; i++) {
			for(int j = i+1 ;j<SL-1;j++) {
				if(DS[i].getdtb()<DS[j].getdtb()) {
					SwapDs(DS, i, j);
				}
			}
		}
	}
}
public class Bai3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		DSHS j = new DSHS();
//		j.NhapSL();
//		j.NhapDS();
//		j.XuatDS();
//		System.out.println("Sap xep danh sach");
//		j.SapXepDS();
//		j.XuatDS();
//		
		
		DSHS l = new DSHS();
		l.NhapDS();
		l.XuatDS();
		                                                                                         
		DSHS k = new DSHS(2);
		k.NhapDS();
		k.XuatDS();
	}

}
