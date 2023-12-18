#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct Sach{
    char MaSach[11];
    char TenSach[41];
    char TenTacGia[41];
    char LoaiSach;
    int NamXuatBan;
    long GiaTien;
    int SoLuong;
}Sach;
void Nhap_Kich_Co_A(int* size){
    do{
        printf("\nNhap Kich Co A : ");
        scanf("%d",size);
        if((*size)>0){
            break;
        }
        printf("\n Ban Da Nhap Sai,Vui long Nhap lai\n");
    }while(1);
}
void NhapTTSach(Sach &n){
    fflush(stdin);
    printf("\n Nhap Ma Sach : ");
    scanf("%s",&n.MaSach);
    fflush(stdin);
    printf("\n Nhap Ten Sach : ");
    gets(n.TenSach);
    fflush(stdin);
    printf("\n Nhap Ten Tac Gia : ");
    gets(n.TenTacGia);
    fflush(stdin);
    printf("\n Nhap Loai Sach : ");
    scanf("%c",&n.LoaiSach);
    fflush(stdin);
    printf("\n Nhap Nam Xuat Ban : ");
    scanf("%d",&n.NamXuatBan);
    fflush(stdin);
    printf("\n Nhap Gia Tien : ");
    scanf("%l",&n.GiaTien);
    fflush(stdin);
    printf("\n Nhap So Luong  :");
    scanf("%d",&n.SoLuong);
}
void XuatTTSach(Sach n){
    printf("\n Ma Sach : %s",n.MaSach);
    printf("\n Ten Sach : %s",n.TenSach);
    printf("\n Ten Tac Gia: %s",n.TenTacGia);
    printf("\n Loai Sach : %c",n.LoaiSach);
    printf("\n Nhap Nam Xuat Ban : %d",n.NamXuatBan);
    printf("\n Gia Tien : %l",n.GiaTien);
    printf("\n So Luong : %d",n.SoLuong);
}
void NhapTTDS(Sach A[],int size){
    for(int i=0;i<size;i++){
    	printf("\nNhap Sanh Thu %d",i+1);
        NhapTTSach(A[i]);
    }
}
void XuatTTDS(Sach A[],int size){
    printf("\n Xuat Thong Tin Sach Thu %d",i+1);
	for(int i=0;i<size;i++){
        XuatTTSach(A[i]);
    }
}
void Them1CuonSach(Sach A[],int size){

}
long TongTienSach(Sach A[],int size){
    long tong=0;
    for(int i=0;i<size;i++){
        tong+=(A[i].GiaTien*A[i].SoLuong);
    }
    return tong;
}
int main(){
	
	int n;
	printf("\nNhap  So ")
    Sach A[100];
    int size;
    Nhap_Kich_Co_A(&size);
    NhapTTDS(A,size);
    XuatTTDS(A,size);
    printf("\n Tong Tien Mua Sach La %l",TongTienSach(A,size));
    return 0;
}
