#include<stdio.h>
int Sum1to100(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
        return Sum1to100(n-1)+n;
}
int main(){
    int n;
    printf("\n Enter n need calculator : ");
    scanf("%d",&n);
    printf("\n Result : %d",Sum1to100(n));
    return 0;
}