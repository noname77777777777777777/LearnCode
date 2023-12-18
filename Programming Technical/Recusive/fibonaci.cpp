#include<stdio.h>
int Fibonaci(int n){
    if(n==1||n==2){
        return 1;
    }
    return Fibonaci(n-2)+Fibonaci(n-1);
}
int main(){
    int n;
    printf("\nNhap so thu tu fibonaci can tinh");
    scanf("%d",&n);
    printf("\nResult %d",Fibonaci(n));
}