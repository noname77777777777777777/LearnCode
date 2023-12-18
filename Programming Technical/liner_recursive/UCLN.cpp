#include<stdio.h>
int UCLN(int a,int b){
    if(a*b==0){
            return a+b;
    }
    return UCLN(b,a%b);
}
int main(){
        int a,b;
        printf("\n Enter a: ");
        scanf("%d",&a);
        printf("\n Enter b: ");
        scanf("%d",&b);
        printf("Result UCLN : %d",UCLN(a,b));
}