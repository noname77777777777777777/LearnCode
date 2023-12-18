#include "stdio.h"
#define MAX 100
#define inputfile "0.txt"
typedef struct Array{
    int n;
    int A[MAX][MAX];
}A;
void Read_File(const char name_file[100],A& a){
    FILE* f;
    f = fopen(name_file,"rt");
    if(f == NULL){
        printf("\nFile is NULL");
    }
    fscanf(f,"%d",&a.n);
    for(int i = 0 ; i < a.n ;i++){
        for(int j = 0 ; j < a.n ; j++){
            fscanf(f,"%d",&a.A[i][j]);
        }
    }
    return;
}	
void Record_File(A a){

    printf("\n");
    for(int i = 0 ; i < a.n ; i++){
        for(int j = 0 ; j < a.n ; j++){
            printf("%d" + a.A[i][j]);
        }
            printf("\n");
    }
}
int main(){
	A a;
    // Read_File2(inputfile,a);
    Read_File(inputfile,a);
     Record_File(a);
}
