#include<stdio.h>
float fraction(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
        return fraction(n-1)+1/(float)n;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("\n Resulft : %f",fraction(n));
    return 0;
}