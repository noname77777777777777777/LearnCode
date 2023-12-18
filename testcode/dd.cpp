//TRINH NGUYEN XUAN DAT
//MSSV:2180608491
#include<conio.h>
#include<stdio.h>
#define MAX 100


typedef struct GRAPH{
	int n;
	int a[MAX][MAX];
}DT;

typedef struct EDGE
	{
	int u;
	int v;
	int value;		
	}canh;

int DocMT(char inputfile[MAX],DT &g)
{
	FILE *f = fopen(inputfile,"rt");
	
	if(f == NULL )
	{
		return 0;
	}
	fscanf(f,"%d",&g.n);
	
	int i,j;
	for(i=0;i<g.n;i++)
	{
		for(j=0;j<g.n;j++)
		{
			fscanf(f,"%d",&g.a[i][j]);
		}
	}
	fclose(f);
	return 1;
}
void XuatMT(DT g)
{
	printf("So dinh cua ma tran ke : %d\n",g.n);
	printf("Ma tran ke cua do thi\n");
	for(int i=0;i<g.n;i++)
	{
		
		for(int j=0;j<g.n;j++)
		{
			printf("%3d",g.a[i][j]);			
		}
		printf("\n");
	}
}
int KiemTraHopLe(DT g){
	int i;
	for(i=0;i<g.n;i++)
	{
		if (g.a[i][i]!=0)
		return 0;
	}
	return 1;
}
int KiemTraVoHuong(DT g){
	int i,j;
	for(i=0;i<g.n;i++)
	{
		for(j=0;j<g.n;j++){
			if(g.a[i][j]!=g.a[j][i])
			return 0;
		}
	}
	return 1;
}	
int KiemTraTrongSo(DT g){
	int i,j;
	for(i=0;i<g.n;i++)
	{
		for(j=0;j<g.n;j++){
			if(g.a[i][j]>1||g.a[i][j]<0)
			return 0;
		}
	}
	return 1;
}

void DiTimCacDinhLienThong(int i ,int Nhan[MAX],DT g)
{
	for(int j=0;j<g.n;j++)
	{
		if(g.a[i][j] !=0 && Nhan[j] != Nhan[i])
		{
			Nhan[j] = Nhan[i] ;
			DiTimCacDinhLienThong(j, Nhan,g);
		}
	}
}
int XetTinhLienThong(DT g)
{
	int Nhan[MAX];
	for(int i=0;i<g.n;i++)
	{
		Nhan[i]=0;
	}
	
	int SoThanhPhanLienThong=0;
	
	for(int i=0;i<g.n;i++)
	{
		if(Nhan[i]==0)
		{
			SoThanhPhanLienThong++;
			Nhan[i]=SoThanhPhanLienThong;
			DiTimCacDinhLienThong(i,Nhan,g);
		}
	}
	return (SoThanhPhanLienThong==1);
}
	int ChuaXet[MAX];
	canh T[MAX];
void Prim(DT g){
	if(XetTinhLienThong(g)!=1){
		printf("DO THI KHONG LIEN THONG, DO DO KHONG THUC HIEN THUAT TOAN");
		return;
	}
	int nT=0;
	for(int i=0;i<g.n;i++) 
		ChuaXet[i]=0;
	ChuaXet[0]=1;
	while(nT<g.n-1){
		canh CanhNhoNhat;
		int GiaTriNhoNhat=MAX;
		for(int i=0;i<g.n;i++){
			if(ChuaXet[i]==1)
				for(int j=0;j<g.n;j++)
					if(ChuaXet[j]==0&&g.a[i][j]!=0&&GiaTriNhoNhat>g.a[i][j]){
						CanhNhoNhat.u=i;
						CanhNhoNhat.v=j;
						CanhNhoNhat.value=g.a[i][j];
						GiaTriNhoNhat=g.a[i][j];
					}
			}
			T[nT]=CanhNhoNhat;
			nT++;
			ChuaXet[CanhNhoNhat.v]=1;
	}
	int TongTrongSoCuaCayKhung=0;
	printf("Cay khung nho nhat cua do thi la:\n");
	for(int i=0;i<nT-1;i++){
		printf("[%d,%d],",T[i].u,T[i].v);
		TongTrongSoCuaCayKhung+=T[i].value;
	}
	printf("(%d,%d).\n",T[nT-1].u,T[nT-1].v);
	TongTrongSoCuaCayKhung+=T[nT-1].value;
	printf("Tong gia tri cua cay khung la %d\n",TongTrongSoCuaCayKhung);
}

/////////kruskal
void SapXepTang(canh E[MAX],int tongsocanh){
	canh canhtam;
	for(int i=0;i<tongsocanh-1;i++){
		for(int j=i+1;j<tongsocanh;j++){
			if(E[i].value>E[j].value){
				canhtam=E[i];
				E[i]=E[j];
				E[j]=canhtam;
			}
		}
	}
}

void Kruskal(DT g){
	canh listEdge[MAX];
	int tongsocanh=0;
	int i,j;
	for(i=0;i<g.n;i++){
		for(j=i+1;j<g.n;j++)
			if(g.a[i][j]>0){
				listEdge[tongsocanh].u=i;
				listEdge[tongsocanh].v=j;
				listEdge[tongsocanh].value=g.a[i][j];
				tongsocanh++;
			}
		
	}
	SapXepTang(listEdge,tongsocanh);
	int nT=0;
	canh T[MAX];
	int nhan[MAX];
	for(i=0;i<g.n;i++) nhan[i]=i;
	int canhdangxet=0;
	while(nT<g.n&&canhdangxet<tongsocanh){
		if(nhan[listEdge[canhdangxet].u]!=nhan[listEdge[canhdangxet].v]){
			T[nT]=listEdge[canhdangxet];
			nT++;
			int giatri=nhan[listEdge[canhdangxet].v];
			for(j=0;j<g.n;j++)
				if(nhan[j]==giatri)
					nhan[j]=nhan[listEdge[canhdangxet].u];
				}
				canhdangxet++;
	}
	if(nT!=g.n-1){
		printf("\nDo thi khong lien thong");
	}
	else{
		int TongTrongSoCuaCayKhung=0;
		printf("\nDo thi lien thong");
		printf("Cay Khung nho nhat cua do thi la\n");
		for(i=0;i<nT;i++){
			printf("(%d,%d),",T[i].u,T[i].v);
				TongTrongSoCuaCayKhung+=T[i].value;
		}
			printf("Tong gia tri cua cay khung la %d\n ",TongTrongSoCuaCayKhung);
	}
}

int main()
{
	DT g;
	int i,j;
	char inputfile[100] = "P5.graph";
	if(DocMT(inputfile, g)==1){
		XuatMT(g);
		if(KiemTraHopLe(g)==1){
			printf("Do thi hop le.\n");
			if(KiemTraVoHuong(g)==1){
				printf("Do thi vo huong.\n");
			}
			else{
				printf("Do thi co huong.\n");
			}
			if(KiemTraTrongSo(g)==0){
				printf("Do thi co trong so.\n");
				printf("----------kruskal--------------------\n");
				Kruskal(g);
				printf("-----------prim----------------------\n");
				Prim(g);
			}
			else{
				printf("Do thi khong co trong so.\n");
			}
			XetTinhLienThong(g);
		}
		else{
			printf("Do thi khong hop le.\n");
		}
	}
	else{
		printf("Khong doc duoc file\n");
	}
	return 0;
}



 

