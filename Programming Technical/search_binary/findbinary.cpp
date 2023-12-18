#include"stdio.h"
int findx(int a[],int n,int x){
    int left=0,right = n-1;
    for(int i=(left+right)/2;i>0;i++){
        if(a[i]==x){
            return i;
        }else if(a[i]>x){
            right=left-1;
        }else{
            left=right-1;
        }
    }
    if(left<=right){
         for(int i=(left+right)/2;i>0;i++){
        if(a[i]==x){
            return i;
        }else if(a[i]>x){
            right=left-1;
        }else{
            left=right-1;
        }
    }   
    }else{
        return -1;
    }
}
int main(){
    int a[100],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);   
    findx(a,n,x);
}