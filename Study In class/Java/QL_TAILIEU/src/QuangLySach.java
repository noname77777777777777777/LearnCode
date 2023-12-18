import java.util.ArrayList;

public class QuangLySach {
    protected ArrayList<Tailieu> tailieus;
    private int soluongtailieu;
    public QuangLySach(){
        tailieus = new ArrayList<>();
        soluongtailieu = 0;
    }
    public void outputds(){
        for (Tailieu tailieu: tailieus) {
            tailieu.xuat();
        }
    }
    public void xuattheocaiminhmuon(int chon){
        for (Tailieu tailieu: tailieus) {
            if(chon == 4){
                if(tailieu instanceof Sach){
                    tailieu.xuat();
                }
            }else if(tailieu instanceof Bao){
                if(chon == 6 ){
                    if(tailieu.getGiaban()==tailieu.tinhtien()){
                        tailieu.xuat();
                    }
                }else{
                    tailieu.xuat();
                }
            }
        }
    }
}
