#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
typedef int Array[MAX][MAX];
void phatsinh(Array a, int sd, int sc){
    for(int d=0; d<sd ; d++){
        for(int c=0; c<sc ; c++){
            a[d][c]=rand()%50+1;
        }
    }
}
void xuatphantule(Array a, int sd, int sc){
    printf("cac phan tu le la: \n");
     for(int d=0; d<sd ; d++){
        for(int c=0; c<sc ; c++){
            if(a[d][c]%2==1){
                printf("%d\t",a[d][c]);
            }else{
                printf("_\t");
            }
        }
        printf("\n");
    }
}
void Enter_lines(int k){
    printf("Nhap dong ");
    scanf("%d",&k);
}
int Sum_of_a_line(Array a,int sd,int sc){
    int s=0;
    for(int i=0;i<=sc-1;i++){
        s+=a[k][i];
    }
    return s;
}
int ktsnt(int check){
    if(check<=1) return 0;
    for(int i=2;i<check/2;i++){
    	if(check%i==0) return 0;}
	return 1;
	}
void xuatsnt(Array a, int sd, int sc){
    printf("cac so nguyen to la: \n");
    for(int d=0; d<sd ; d++){
        for(int c=0; c<sc ; c++){
            if(ktsnt(a[d][c])){
                printf("%d\t",a[d][c]);
            }else{
                printf("_\t");
            }
        }
        printf("\n");
    }
}

void xuatlonhonx(Array a, int sd, int sc, int x){
    printf("cac so lon hon %d la: \n",x);
	for(int d=0; d<sd ; d++){
        for(int c=0; c<sc ; c++){
            if(a[d][c]>x){
                printf("%d \t",a[d][c]);
            }else{
                printf("_\t");
            }
        }
        printf("\n");
    }
}
int max_in_array(Array a,int sd,int sc){
    int max=a[0][0];
    for(int i=0;i<sd;i++){
        for(int j=0;j<sc;j++){
            if(max<a[i][j]){
                a[i][j]=max;
            }
        }
    }
    return max;
}
void vitri_xuathine_dautien(Array a,int sd,int sc,int value){
    for(int i=0;i<sd;i++){
        for(int j=0;j<sc;j++){
            if(value==a[i][j]){
                printf("A[%d][%d]",i,j);
            }
        }
    }
}
void find_sum_line_max_in_array(Array a,int sd,int sc){
    for(int i=0;i<sd;i++){
        for(int j=0;j<sc;j++){
         
        }
    }
}
int main(){
	Array a;
    int sd,sc;
    do{
        printf("nhap so dong: ");
        scanf("%d",&sd);
    }while( sd<=0);    
    do{
        printf("nhap so cot: ");
         scanf("%d",&sc);
    }while(sc<=0|| sc>100);
    phatsinh(a,sd,sc);
    xuatphantule(a,sd,sc);
    xuatsnt(a,sd,sc);
    int x;
    printf("nhap x: \n");
    scanf("%d",&x);
    xuatlonhonx(a,sd,sc,x);
    printf("Phan tu lon nhat trong mang la %d \n",max_in_array(a,sd,sc));   
	int value;
    printf("Nhap gia \n");
    scanf("%d",&value);
    printf("vi tri xua hien la \n");
    vitri_xuathine_dautien(a,sd,sc,value);
	getch();
}

