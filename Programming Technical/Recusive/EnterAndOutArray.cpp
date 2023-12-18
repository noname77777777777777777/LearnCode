#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void EnterArray(int* A,int size){
    if(size==0){
        return;
    }
    EnterArray(A,size-1);
    printf("\nEnter Array at location %d ",size-1);
    scanf("%d",&A[size-1]);
}
void OutputArray(int* A,int size){
    if(size==0){
        return;
    }
    OutputArray(A,size-1);
    printf("\t%d",A[size-1]);
}

// find location appear final have x value
// int Find_Location_Appear_Final(int* A,int size,int x){
//     if(x==0){
//         return -1;
//     }else{
//     return A[size-1]==x?(size-1):Find_Location_Appear_Final(A,size,x);
//     }
// }
int timxdau(int* A,int size,int x){
    if(size==0){
        return -1;
    }
    if(size==1){
        return (size-1);
    }
    if(A[(size--)-1]==x){
        return size-1;
        return timxdau(A,size,x);
    }
}
int main(){
    int* A,size,x;
    printf("\nSize Of Array");
    scanf("%d",&size);
    A=(int*)malloc(size*sizeof(int));
    EnterArray(A,size);
    OutputArray(A,size);
    // Find_Location_Appear_Final(A,size,x);
    printf("\n Enter element x : ");
    scanf("%d",&x);
    printf("%d",timxdau(A,size,x));
    return 0;
}