#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void kt_matran(int* n){
	do{
		printf("\n nhap kich co ");
		scanf("%d",n);
		if((*n)>0&&(*n)<100){
			break;
		}
		printf("\n Ban da nhap sai kich thuoc vui long nhap lai");
	}while(1);
}
void phatsinh_matran(int a[MAX][MAX],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=100+rand()%(1000+1-50);
		}
	}
}
void xuat_matran(int a[MAX][MAX],int n){
	printf("\n xuat ma tran ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("\n a[%d][%d] = %d ",i,j,a[i][j]);
		}
	}
}
void Xuat_phatudch(int a[MAX][MAX],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j==n+1){
			printf("\n a[%d][%d] = %d ",i,j,a[i][j]);
			}
		}
	}
}
bool check_sohoangthien(int n){
	int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; 
    return false;
}
int dem_cacsohoanthien(int a[MAX][MAX],int n){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check_sohoangthien(a[i][j]==true)){
				count++;
			}
		}
	}
	return count;	
}
int ton_ptdch(int a[MAX][MAX],int n){
	int sum;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
}
int main(){
	
}