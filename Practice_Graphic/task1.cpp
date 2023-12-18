//=======================================
//Tem: Nguyen Duc Canh
//MSSV: 2180608774
//Lop: 21DTHE2
//=======================================

#include<stdio.h>
#include<stdlib.h>

#define MAX 10
//#define inputfile "1.graph"

typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
}DOTHI;

int DocMaTranKe(char TenFile[100], DOTHI &g){
	FILE* f;
	f=fopen(TenFile, "rt");
	if(f==NULL){
		printf("Khong mo duoc file\n");
		return 0;
	}
	fscanf(f,"%d",&g.n);
	int i,j;
	for(int i=0; i<g.n ; i++){
		for(int j=0; j<g.n ; j++){
			fscanf(f,"%d",&g.a[i][j]);
		}
	}
	fclose(f);
	return 1;
}

void XuatMaTranKe(DOTHI g){
	printf("So dinh cua do thi la: %d\n",g.n);
	
	for(int i=0; i<g.n; i++){
		printf("\t");
		for(int j=0; j<g.n; j++){
			printf("%d\t", g.a[i][j]);
		}
			printf("\n");
	}
	
}
int kiemTraMaTranKeHopLe(DOTHI g){
	int i;
	for(i=0; i<g.n ; i++){
		if(g.a[i][i]!=0)
			return 0;
	}
	return 1;
}
int LuuVet[MAX];

int ChuaXet[MAX];

// struct QUEUE{
// 	int size;
// 	int array[MAX];
// };

// void KhoiTaoQuene(QUEUE &Q){
// 	Q.size=0;
// }

// int DayGiaTriVaoQuene(QUEUE &Q, int value){
// 	if(Q.size+1>=100)
// 		return 0;
// 	Q.array[Q.size]=value;
// 	Q.size++;
// 	return 1;	
// }

// int LayGiaTriRaKhoiQuene(QUEUE &Q, int &value){
// 	if(Q.size<=0)
// 		return 0;
// 	value =Q.array[0];
// 	for(int i=0; i<Q.size-1; i++)
// 		Q.array[i]=Q.array[i+1];
// 		Q.size--;
// 		return 1;
	
// }
// int KiemTraQueueRong(QUEUE Q){
// 	if(Q.size<=0)
// 		return 1;
// 	return 0;	
// }

// void BFS(int v, GRAPH g){
// 	QUEUE Q;
// 	KhoiTaoQuene(Q);
// 	DayGiaTriVaoQuene(Q,v);
	
// 	while(KiemTraQueueRong(Q)==0){
// 		LayGiaTriRaKhoiQuene(Q,v);
// 		ChuaXet[v]=1;
// 		for(int u=0; u<g.n; u++){
// 			if(g.a[v][u]!=0 && ChuaXet[u]==0 && LuuVet[u]==-1){
// 				DayGiaTriVaoQuene(Q, u);
// 				LuuVet[u]=v;
				
// 			}
// 		}
// 	}
// }

void Xuatduongdi_DQ(int S, int F){
	if(F!=S) Xuatduongdi_DQ(S,LuuVet[F]);
	printf("%d -> ", F);
}

// void duyettheoBFS( int S, int F, GRAPH g){
// 	//CODE 3
// 	for(int i=0; i<g.n; i++){
// 		ChuaXet[i]=0;
// 		LuuVet[i]=-1;
// 	}
// 	int i;
// 	BFS(S, g);
// 	if(ChuaXet[F]==1){
// 		printf("Duong di tw dinh %d den dinh %d la: \n\t", S, F);
// 		i=F;
// 		printf("%d", F);
// 		//CODE 4
// 		Xuatduongdi_DQ(S,F); printf("\b\b\b   ");	
// 	}
// 	else{
// 	printf("Khong do duowng di tu dinh %d den %d \n: ",S,F);
// 	}
// }
void DFS(int v,GRAPH g){
	ChuaXet[v]=1;// dinh da duoc xet
	int u;
	for(u=0; u<g.n; u++){
		if(g.a[v][u]!=0 && ChuaXet[u]==0){
			LuuVet[u]=v;
			DFS(u,g);
		}
	}
}


void duyettheoDFS(int S, int F, GRAPH g){
	int i;
	for(int i=0; i<g.n; i++){
			ChuaXet[i]=0;
			LuuVet[i]=-1;
	}
	DFS(S,g);

	if(ChuaXet[F]==1){
		printf("Duong di tu dinh %d den dinh %d la: \n\t", S,F);
		i=F;
		printf("%d\n", F);
		Xuatduongdi_DQ(S,F); printf("\b\b\b   ");
	}else{
		printf("Khong co duong di tu dinh %d den dinh %d \n", S, F);
	}
}
int main(){
	char inputfile[100]="P5.graph.txt";
	DOTHI g;
	int S=11;
	int F=8;
	if(DocMaTranKe(inputfile, g)==1){
		printf("Da lay thong tin do thi tu file thanh cong.\n\n");
		printf("Ma tran ke cua do thi (%s) la:\n", inputfile);
		XuatMaTranKe(g);
		printf("\nDFS: ");
		duyettheoDFS(S,F, g);
	}
	return 0;
}
