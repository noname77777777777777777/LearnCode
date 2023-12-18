#include<stdio.h>
int Factorial(int n){
    if(n==1){
        return 1;
    }
    return Factorial(n-1)*n;
}
int main(){
    int n;
    printf("\n nhap giai thua ban muon tinh : ");
    scanf("%d",&n);
    printf("\n Resulft : %d ",Factorial(n));
}