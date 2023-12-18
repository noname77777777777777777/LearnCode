public class DSHANGHOA {
    private HANGHOA[] dshanghoa ;
    private int soluong_hanghoa;

    public DSHANGHOA() {
        soluong_hanghoa = 0;
        dshanghoa = new HANGHOA[100];
    }
    public void ThemMH(HANGHOA hanghoa){
        dshanghoa[soluong_hanghoa] = hanghoa;
        soluong_hanghoa++;
    }
    public  void xuatDSTheoLoai(byte loai){
        if(loai == 1){
            for(int i = 0 ; i < soluong_hanghoa ;i++){
                if(dshanghoa[i] instanceof HANGDM){
                    dshanghoa[i].xuat();
                }
            }
        }else{
            for (int i = 0 ; i < soluong_hanghoa ;i++){
                if(dshanghoa[i] instanceof HANGTP){
                    dshanghoa[i].xuat();
                }
            }
        }
    }
}
