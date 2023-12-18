#include<stdio.h>
#include<stdlib.h>
#include<time.h>
long tinhgiathua(int n){
    if(n==1){
        return 1;
    }
    return tinhgiathua(n-1)*n;
}
long tintong(int n){
    if((n*n)==1){
        return 1;
    }
    return tintong(n);
}
int main(){
    int n;
    scanf("%d",&n);
    tinhgiathua(n);
    return 0;
}