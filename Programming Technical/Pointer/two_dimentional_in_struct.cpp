#include<stdio.h>
#include<time.h>
#include<stdlib.h>
typedef struct locationxlinecolumns{
    int locationline;
    int locationcloumns;
}location;
// Enter Size Of Two dimentional
void Enter_Size_Of_Two_Dimentional(int* columns,int* line){
    do{
        printf("\nEnter Columns : ");
        scanf("%d",columns);
        printf("\nEnter Line : ");
        scanf("%d",line);
        if((*columns)>0||(*line)>0){
            break;
        }
        printf("\n You Entered flase,please re-enter \n");
    }while(1);
}
// Enter Element In Two-Dimentional array
void Enter_Element_Aray(int** A,int columns,int line){
    for(int i=0;i<line;i++){
        A[i]=(int*)malloc((line)*sizeof(int));
        for(int j=0;j<columns;j++){
            printf("\nA[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
// Output Element in Two-dimentional array
void Output_Element_In_Two_Dimentional_Array(int** A,int columns,int line){
    printf("\nOutput Array \n");
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            printf("A[%d][%d] = %d\t",i,j,A[i][j]);
        }
        printf("\n");
    }
}
//clone two_dimentional_array to one_dimentional_array
void Clone_Array(int** A,int columns,int line,int* B){
    printf("\n Clone two-dimentional array to one-dimentional array\n");
    int k=0;
    for( int i=0;i<line;i++){
        for (int j = 0; j <columns; j++){
            B[k++]=A[i][j];
        }
    }
    for(int i=0;i<k;i++){
        printf("A[%d] = %d\t",i,B[i]);
    }
}
location Outputlineneeddelete(int** A,int columns,int line,int x){
    location locationcolumns;
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            if(A[i][j]==x){
                locationcolumns.locationcloumns=i;
            }
        }
    }
    return locationcolumns;
}
//delete line contain value x first appear in Array A
void Delete_Line(int** A,int columns,int* line,location locationcolumns){
    printf("\n Array after delete \n");
    for(int i=locationcolumns.locationcloumns;i<(*line);i++){
        for(int j=0;j<columns;j++){
            A[i][j]=A[i][j+1];
        }
    }
    (*line)--;
}

int main(){
    locationxlinecolumns locationcolumns;
    int** A;
    int* B;
    int columns,line,x;
    A=(int**)malloc(line*sizeof(int));
    B=(int*)malloc((columns*line)*sizeof(int));
    Enter_Size_Of_Two_Dimentional(&columns,&line);
    Enter_Element_Aray(A,columns,line);
    Output_Element_In_Two_Dimentional_Array(A,columns,line);
    Clone_Array(A,columns,line,B);
    printf("\n Enter element x");
    scanf("%d",&x);
    locationcolumns = Outputlineneeddelete(A,columns,line,x);
    Delete_Line(A,columns,&line,locationcolumns);
    Output_Element_In_Two_Dimentional_Array(A,columns,line);
    return 0;
}