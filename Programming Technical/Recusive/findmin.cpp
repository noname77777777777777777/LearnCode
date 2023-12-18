#include<stdio.h>
void enterarray(int b[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
}
int min(int b[],int n){
    if(n==0)
        return -1;
    if(n==1)
        return b[0];
    else{
        if(b[n-1]<min(b,n-1)){
            return b[n-1];
        }else{
            return min(b,n-1);
        }
    }
}
int main(){
    int n,b[100];
    scanf("%d",&n);
    enterarray(b,n);
    printf("%d",min(b,n));
}