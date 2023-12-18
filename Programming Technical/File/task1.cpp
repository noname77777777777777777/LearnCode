#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100;
void Enter_Size(int* n){
    do{
        printf("\n Enter Size Of Array :");
        scanf("%d",n);
        if((*n)>0&&(*n)<100){
            break;
        }
        printf("\n You Entered is false, please Re-Enter");
    }while(1);
}
void CreateFile(FILE* f,int n){
    fopen("mang.inp","w");
}
void Settingfile(FILE* f,int n,int A[]){
    if(f!=NULL){

    }
}
int main(){
    FILE* f;
    int n;
    CreateFile(f,n);
}