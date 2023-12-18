#include<stdio.h>
// phan tu giong x dau tien 
int findx(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }else{
            return -1;
        }
    }
}
// phan tu giong x cuoi cung
int findx2(int a[],int n,int x){
    for(int i=n-1;i>0;i--){
        if(a[i]==x){
            return i;
        }else{
            return -1;
        }
    }
}
int main(){
    int n,b[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int x;
    scanf("%d",&x);
    printf("%d",findx(b,n,x));
    printf("\n%d",findx2(b,n,x));
}