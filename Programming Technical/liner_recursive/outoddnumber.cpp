#include<stdio.h>
void outoddnumber(int a[],int n){
    if(n==0){
        return;
    }
    else{
        if(a[n-1]%2!=0){
            printf("\n Output odd number ");
            printf("\n%d",a[n-1]);
        }
    }
    outoddnumber(a,n-1);    
}
int main(){
    int n,A[100];
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    outoddnumber(A,n);
}