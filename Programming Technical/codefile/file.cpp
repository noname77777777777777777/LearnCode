#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100;
void Enter_Size(int* n){
    do{
        printf("\n Enter Size Of Array :");
        scanf("%d",n);
        if((*n)>0&&(*n)<1000){
            break;
        }
        printf("\n You Entered is false, please Re-Enter");
    }while(1);
}
void Enter_Array_A(int A[],int n){
    for(int i=0;i<n;i++){
        A[i]=rand()%100;
    }
}
void Out_Aray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("\tA[%d] = %d",i,A[i]);
    }
}
int Settingfile(int n,int A[]){
    FILE* f;
    fopen("mang.ing","w");
    if(f==NULL){
        return 1;
    } 
    fprintf(f,"%d\n",n);
    for(int i=0;i<n;i++){
    fprintf(f,"%d\t",A[i]);
    }
    fclose(f);
     return 0;
}
int main(){
    FILE* f;
    int n;
    int A[10000];
    srand((unsigned int)time(NULL));
    Enter_Size(&n);
    Enter_Array_A(A,n);
    if(Settingfile(n,A)==0){
        printf("Onpen File True");
    }else{
        printf("Open is false");
        Out_Aray(A,n);
    }
}