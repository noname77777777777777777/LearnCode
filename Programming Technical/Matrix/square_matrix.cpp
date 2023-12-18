#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 100
using namespace std;
void Enter_Size_Of_Matrix(int* element){
    do{
        printf("\nEnter Size Of Square Matrix :");
        scanf("%d",element);
        if((*element)>0){
            break;
        }
    printf("You Entered Value is false,Please Re-Enter");
    }while(1);
}
void Enter_Square_Matrix(int A[][MAX],int element){
    for(int i=0;i<element;i++){
        for(int j=0;j<element;j++){
            A[i][j]=rand()%50;
        }
    }
}
// Output Element in Main Diagonal Square Matrix
void Output_Matrix(int A[][MAX],int element){
    for(int i=0;i<element;i++){
        for(int j=0;j<element;j++){
            printf(" A[%d][%d] = %d\t",i,j,A[i][j]);
        }
        printf("\n");
    }
}
// Output diagonal Square Matrix main
void Output_Dialonal_Main_Square_Matrix(int A[][MAX],int element){
        printf("\n Output Element in Main Diagonal in Square Matrix \n");
   for(int i=0;i<element;i++){
        for(int j=0;j<element;j++){
            if(i==j){
                printf("A[%d][%d] = %d\t",i,j,A[i][j]);
            }else{
                printf("_       \t");
            }
        }
        printf("\n");
    }
}
// Output Auxiliary Diagonal in Matrix
void Auxiliary_Diagonal_Array(int A[][MAX],int element){
    printf("\n Output Element in Auxiliary Diagonal in Square Matrix \n");
   for(int i=0;i<element;i++){
       for(int j=0;j<element;j++){
           if((i+j)==(element-1)){
               printf("A[%d][%d] = %d\t",i,j,A[i][j]);
           }else{
               printf("_       \t");
           }
       }
       printf("\n");
   }
}
// Enter Square Matrix symmetrical diagonal main
void Enter_Symmetrical_Array(int A[][MAX],int element){
    A[0][0]=0;
    for(int i=1;i<element;i++){
        A[i][i]=0;
            for(int j=0;j<i;j++){
                printf("\n Enter Element A[%d][%d] ",i,j);
                scanf("%d",&A[i][j]);
                A[j][i]=A[i][j];    
        }
    } 
}
int main(){
 int element,A[MAX][MAX];
 srand((unsigned int)time(NULL));
 Enter_Size_Of_Matrix(&element);
 Enter_Square_Matrix(A,element);
 Output_Matrix(A,element);
 Enter_Symmetrical_Array(A,element);
 Output_Matrix(A,element);
 Output_Dialonal_Main_Square_Matrix(A,element);
 Auxiliary_Diagonal_Array(A,element);
}