import java.util.ArrayList;

public class NewDSHANGHOA {
    private ArrayList<HANGHOA> dshh;
    public NewDSHANGHOA(){
        dshh = new ArrayList<>();
    }
    public void Addds(HANGHOA hanghoa){
        dshh.add(hanghoa);
    }
    public void Xuatds(byte chon){
        if(chon == 1){
            for(int i = 0 ; i < dshh.size() ; i++){
                if(dshh.get(i) instanceof HANGDM){
                    dshh.get(i).xuat();
                }
            }
        }else{
            for(int i = 0 ; i < dshh.size() ; i++){
                if(dshh.get(i) instanceof HANGTP){
                    dshh.get(i).xuat();
                }
            }
        }
    }
}
