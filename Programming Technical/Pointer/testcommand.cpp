#include<iostream>
using namespace std;
int main(){
    int* n;
    n=(int*)malloc(sizeof(int));
    printf("\n Enter Element : ");
    scanf("%d",n);
    printf("\n Output Value : %d ",*n);
    printf("\n output Location of pointer %d ",&n);
    free(n);
}