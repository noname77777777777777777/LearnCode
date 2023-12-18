#include<stdio.h>
#include<stdlib.h>
void Enter_Size_Of_Array(int* n){
    printf("\nEnter Size of Array ");
    scanf("%d",n);
}
void Enter_Array(int* A,int n){
    for(int i=0;i<n;i++){
        scanf("%d",(A+i));
    }
}
void Output_Odd_Number_In_Array(int* A,int n){
    for(int i=0;i<n;i++){
        if(A[i]%2!=0){
            printf("A[%d] = %4d \t",i,*(A+i));
        }
    }
}
int main(){
    int* A,int n;
    A=(int*)malloc(n);
    Enter_Size_Of_Array(&n);
    Enter_Array(A,n);
    Output_Odd_Number_In_Array(A,n);
    free(A);
}