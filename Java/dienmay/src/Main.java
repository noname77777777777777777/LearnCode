public class Main {
    public static void main(String[] args) {
        hanghoa h1 = new hanghoa("lu","thanh","y");
        h1.Output_HangHoa();
        ThucPham h2 = new ThucPham("lu","thanh","y",15,16);
        h2.Output_ThucPham();
        Sanhsu h3 = new Sanhsu("lu","thanh","y","tot");
        System.out.println("==================================================");
        System.out.println("result : " + h1.toString());
        System.out.println("result h2 : "+h2.toString());
        System.out.println("result h : "+h3.toString());
    }
}