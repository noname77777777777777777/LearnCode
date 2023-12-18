#include<stdio.h>
#include<math.h>
int sumpow(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return sumpow(n-1)+pow(n,2);
}
int main(){
    int n;
    printf("\n Enter n : ");
    scanf("%d",&n);
    printf("/n Result : %d ",sumpow(n));
}