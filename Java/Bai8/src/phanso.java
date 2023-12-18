import java.util.*;
class Demo1{
	// declare Scanner
	Scanner sc = new Scanner(System.in);
	// declare data
	public int tuso;
	public int mauso;
	
	// declare method get and set data tuso
	public void get_tuso(int parameter) {
		tuso = parameter;
	}
	public int set_tuso() {
		return tuso;
	}
	// declare method get and set data mauso
	public void get_mauso(int parameter) {
		mauso = parameter;
	}
	public int set_mauso() {
		return mauso;
	}
	// input data
	public void input_data() {
		tuso = sc.nextInt();
		mauso = sc.nextInt();
	}
	// ouput data
	public void output_data() {
		System.out.println(tuso+"/"+mauso);
	}
	// rut gon two phan so
		// find UCLN 2 fs
		public int Find_UCLN(int a,int b) {
			if(a == 0 || b == 0) {
				return a + b;
			}
			while(a!=b) {
				if(b > a) {
					b -= a;
				}else {
					a -= b;
				}
			}
			return b;
		}
		//start rut gon phan so
		public void rutgonphanso() {
			tuso = tuso/Find_UCLN(tuso,mauso);
			mauso = mauso/Find_UCLN(tuso,mauso);
		}
		public Demo1 Addtwops(Demo1 ps) {
			Demo1 result = new Demo1();
			result.tuso = this.tuso*ps.mauso + this.mauso*ps.tuso;
			result.mauso = this.mauso*ps.mauso;
			result.rutgonphanso();
			return result;
		}
		public Demo1 MutiphiteTwos(Demo1 muti)
		{
			Demo1 result = new Demo1();
			result.tuso = this.tuso*muti.tuso;
			result.mauso = this.mauso*muti.mauso;
			result.rutgonphanso();
			return result;
		}
}
//main
class phanso{
	public static void main(String[] args) {
		Demo1 h = new Demo1();
		h.input_data();
		h.output_data();
		System.out.println();
		h.rutgonphanso();
		System.out.println();
		h.output_data();
		Demo1 h2 = new Demo1();
		h2.input_data();
		h2.output_data();
		Demo1 h3 = h2.Addtwops(h);
		h3.rutgonphanso();
		h3.output_data();
		
	}
}
	

