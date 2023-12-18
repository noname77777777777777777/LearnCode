#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define MAX 100
typedef struct namelocation{
    int locationline;
    int loactioncolumns;
}location;
void Enter_Size_Columns_Line(int* line,int* columns){
    do{
        printf("Enter lines : ");
        scanf("%d",line);
        if((*line)>0&&(*line)<MAX){
            break;
        }
        printf("\nYou Entered flase, please re-enter");
    }while(1);
    do{
        printf("\nEnter columns : ");
        scanf("%d",columns);
        if((*columns)<=100){
            break;
        }
        printf("\nYou Entered false,please re-enter");
    }while(1);
}
void Input_Element_Random_In_Array(int A[][MAX],int line,int columns){
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            A[i][j]=rand()%50;
        }
    }
}
void Output_Element_In_Array(int A[][MAX],int line,int columns){
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            printf("A[%d][%d] = %d\t",i,j,A[i][j]);
        }
        printf("\n");
    }
}
void Output_Element_Odd_Number(int A[][MAX],int line,int columns){
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            if(A[i][j]%2!=0){
                printf("A[%d][%d] = %d  \t",i,j,A[i][j]);
            }else{
                printf("_       \t");
            }
        }
        printf("\n");
    }
}
bool Check_Prime(int check){
    if(check<2){
        return false;
    }
    for (int  i = 2; i < check; i++)
    {
        if(check%i==0){
            return false;
        }
    }
    return true;
}
void Input_Number_Pirme_In_Array(int A[][MAX],int line,int columns){
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            if((Check_Prime(A[i][j])==true)){
                printf("A[%d][%d] = %d \t",i,j,A[i][j]);
            }else{
                printf("_       \t");
            }
        }
        printf("\n");
    }
}
void Output_Element_Number_Bigger_x(int A[][MAX],int line,int columns,int x){
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            if(A[i][j]>x){
                printf("A[%d][%d] = %d \t",i,j,A[i][j]);
            }else{
                printf("_       \t");    
            }
        }
        printf("\n");
    }
}
int Element_Max_In_Array(int A[][MAX],int line,int columns){
    int max=A[0][0];
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
            if(max<=A[i][j]){
                max=A[i][j];
            }
        }
    }
    return max;
}
location Location_Of_Max_In_Array(int A[][MAX],int line,int columns){
    location Locationmax;
    Locationmax.loactioncolumns=0;
    Locationmax.locationline=0;
    for(int i=0;i<line;i++){
        for(int j=0;j<columns;j++){
          if(A[i][j]>A[Locationmax.locationline][Locationmax.loactioncolumns]){
              Locationmax.locationline=i;
              Locationmax.loactioncolumns=j;
          }
        }
    }
    return Locationmax;
}
int Sum_Of_Line_In_Array(int A[][MAX],int line,int columns,int numberline){
    if(numberline<0||numberline>line-1){
        return 0;
    }
    int sum=0;
    for(int i=0;i<columns;i++){
        sum+=A[numberline][i];
    }
    return sum;
}
void Sum_of_Each_Line_In_Aray(int A[][MAX],int line,int columns){
    for(int i=0;i<line;i++){
        printf("\n Total of Line %d = %d \n",i,Sum_Of_Line_In_Array(A,line,columns,i));
    }
}
int Sum_Of_All_Line_In_Arrray(int A[][MAX],int line,int columns){
    int sumline=0;
    for(int i=0;i<line;i++){
        sumline+=Sum_Of_Line_In_Array(A,line,columns,i);
    }
    return sumline;
}
int Sum_Of_Columns_In_Array(int A[][MAX],int line,int columns,int numberline){
    if(numberline<0||numberline>columns-1){
        return 0;
    }
    int sum=0;
    for(int i=0;i<line;i++){
        sum+=A[i][numberline];
    }
    return sum;
}
void Sum_of_Each_Columns_In_Aray(int A[][MAX],int line,int columns){
    for(int i=0;i<columns;i++){
        printf("\n Total of columns %d = %d \n",i,Sum_Of_Columns_In_Array(A,line,columns,i));
    }
}
int Sum_Of_All_Columns_In_Arrray(int A[][MAX],int line,int columns){
    int sumline=0;
    for(int i=0;i<columns;i++){
        sumline+=Sum_Of_Columns_In_Array(A,line,columns,i);
    }
    return sumline;
}
// void Enter_Element_In_Diagonal_Line(int A[][MAX],int line,int columns){
//     for(int i=0;i<line;i++){
//         for(int j=0;j<columns;j++){
//             if(i==j){
//                 A[i][j]=0;
//                 continue;
//             }
//              if(i>j){
//                  printf("\nEnter Element In Above Diagonal Line \n");
//                  scanf("%d",A[i][j]);
//                   A[i][j]=A[j][i];
//             }
//         }
//     }
// }
void Input_Array_B_Use_to_Line(int B[],int columns){
    for(int i=0;i<columns;i++){
        B[i]=rand()%50;
    }
}
void Output_Array_B(int B[],int columns){
    for(int i=0;i<columns;i++){
        printf("B[%d] = %d\t",i,B[i]);
    }
}
void insert_Array_B_to_A_At_first_Line(int A[][MAX],int B[],int* line,int columns){
    for(int i=(*line)-1;i>=0;i--){
        for(int j=0;j<columns;j++){
            A[i+1][j]=A[i][j];
        }
    }
        for(int i=0;i<columns;i++){
            A[0][i]=B[i];
        }
    (*line)++;
}
// void Enter_Value_Random_To_Insert_In_ArrayA(int random){
//     printf("\nEnter Value Random : ");
//     scanf("%d",&random);
// }
void Insert_Array_B_To_Line_Random_In_Array_A(int A[][MAX],int B[],int* line,int columns,int random){
    if(random<0||random>(*line)){
        printf("You Entered false,please Re-enter");
        exit(0);
    }
    for(int i=(*line)-1;i>=random;i--){
        for(int j=0;j<columns;j++){
            A[i+1][j]=A[i][j];
        }
    }
    for(int i=0;i<columns;i++){
        A[random][i]=B[i];
    }
    (*line)++;
}
void Input_Array_C_Use_to_columns(int C[],int line){
    for(int i=0;i<line;i++){
        C[i]=rand()%50;
    }
}
void Output_Aray_C_Use_To_Columns(int C[],int line){
    for(int i=0;i<line;i++){
        printf("\n C[%d] = %d \n",i,C[i]);
    }
}
void Insert_Array_C_to_A_At_first_Columns(int A[][MAX],int C[],int line,int* columns){
    for(int i=0;i<line;i++){
        for(int j=(*columns)-1;j>=0;j--){
            A[i][j+1]=A[i][j];
        }
    }
    for(int i=0;i<line;i++){
        A[i][0]=C[i];
    }
    (*columns)++;
}
void Insert_Array_C_To_Line_Random_In_Array_A(int A[][MAX],int C[],int line,int* columns,int random){
    if(random<0||random>(*columns)){
        printf("You Entered false,please Re-enter");
    }
    for(int i=0;i<line;i++){
        for(int j=(*columns)-1;j>=random;j--){
            A[i][j+1]=A[i][j];
        }
    }
    for(int i=0;i<line;i++){
        A[i][random]=C[i];
    }
    (*columns)++;
}
void Del_first_Line_In_Array(int A[][MAX],int* line,int columns){
    for(int i=0;i<(*line);i++){
        for(int j=0;j<columns;j++){
            A[i][j]=A[i+1][j];
        }
    }
    (*line)--;
}
void Del_Value_Random_line_In_Array(int A[][MAX],int* line,int columns,int random){
    if(random<0||random>(*line)){
        printf("You Entered false,please Re-enter");
        exit(0);
    }
    for(int i=random;i<(*line);i++){
        for(int j=0;j<columns;j++){
            A[i][j]=A[i+1][j];
        }
    }
    (*line)--;
}
void Del_Value_Contain_Value_Max_In_Array(int A[][MAX],int* line,int columns,location locationmax){
    for(int i=locationmax.locationline;i<(*line)-1;i++){
        for(int j=0;j<columns;j++){
            A[i][j]=A[i+1][j];
        }
    }
    (*line)--;
}
void Del_first_Columns_In_Array(int A[][MAX],int line,int* columns){
    for(int i=0;i<line;i++){
        for(int j=0;j<(*columns);j++){
            A[i][j]=A[i][j+1];
        }
    }
    (*columns)--;
}
void Del_Value_Random_Columns_In_Array(int A[][MAX],int line,int* columns,int random){
    if(random<0||random>(*columns)){
          printf("You Entered false,please Re-enter");
          exit(0);
    }
    for(int i=0;i<line;i++){
        for(int j=random;j<(*columns);j++){
            A[i][j]=A[i][j+1];
        }
    }
    (*columns)--;
}
location location_of_element_x(int A[][MAX],int line,int columns,int value){
    location locationcolumnss;
       for(int i=0;i<line;i++){
           for(int j=0;j<columns;j++){
               if(value==A[i][j]){
                   locationcolumnss.loactioncolumns=j;
            }
        }
    }
    return locationcolumnss;
}
void Del_Value_At_X_Element(int A[][MAX],int line,int* columns,location locationcolumnss){
        for(int i=0;i<line;i++){
            for(int j=locationcolumnss.loactioncolumns;i<(*columns);i++){
                A[i][j]=A[i][j+1];
            }
        }
        (*columns)--;
}
int main(){
    namelocation locationmax,locationcollumnss;
    srand((unsigned int)time(NULL));
    int line,columns,A[MAX][MAX],x,B[MAX],random,C[MAX],random2,random3;
    printf("Enter Line and columns in array \n");
    Enter_Size_Columns_Line(&line,&columns);
    Input_Element_Random_In_Array(A,line,columns);
    printf("\n Output Element In Arrya \n");
    Output_Element_In_Array(A,line,columns);
    printf("\n Odd Number In Arrays \n");
    Output_Element_Odd_Number(A,line,columns);
    printf("\n Prime Number In Arrays \n");
    Input_Number_Pirme_In_Array(A,line,columns);
    printf("\nEnter Element x ");
    scanf("%d",&x);
    Output_Element_Number_Bigger_x(A,line,columns,x);
    printf("\n Value Max In Array : %d",Element_Max_In_Array(A,line,columns));
    locationmax=Location_Of_Max_In_Array(A,line,columns);
    printf("\n Location Max In Array : \n");
    printf("Line : %d \n",locationmax.locationline);
    printf("columns : %d \n",locationmax.loactioncolumns);
    Sum_of_Each_Line_In_Aray(A,line,columns);
    printf("\n Total of all line in Array : %d",Sum_Of_All_Line_In_Arrray(A,line,columns));
    Sum_of_Each_Columns_In_Aray(A,line,columns);
    printf("\n Total of all Columns in Array : %d",Sum_Of_All_Columns_In_Arrray(A,line,columns));
    Input_Array_B_Use_to_Line(B,columns);
    printf("\nOutPut Element :\n");
    Output_Array_B(B,columns);
    printf("\nOutput Result after insert at first element in line\n");
    insert_Array_B_to_A_At_first_Line(A,B,&line,columns);
    Output_Element_In_Array(A,line,columns);
    printf("\n Output Result after insert at value random int line\n");
    printf("\nEnter Value Random : ");
    scanf("%d",&random);
    Insert_Array_B_To_Line_Random_In_Array_A(A,B,&line,columns,random);
    Output_Element_In_Array(A,line,columns); 
    Input_Array_C_Use_to_columns(C,line);
    printf("\nOutput Element in Array\n");
    Output_Aray_C_Use_To_Columns(C,line);
    printf("\nOutput Result after insert at first element in columns\n");
    Insert_Array_C_to_A_At_first_Columns(A,C,line,&columns);
    Output_Element_In_Array(A,line,columns);
    printf("\nOutput Result after insert at value random element in columns\n");
    printf("\n Enter Value Line need insert : ");
    scanf("%d",&random2);
    Insert_Array_C_To_Line_Random_In_Array_A(A,C,line,&columns,random2);
    Output_Element_In_Array(A,line,columns);
    printf("\n Delete first line element in Array \n");
    Del_first_Line_In_Array(A,&line,columns);
    Output_Element_In_Array(A,line,columns);
    printf("\n Delete Random line element in Array \n");
    printf("\nEnter value line need delete : ");
    scanf("%d",&random);
    Del_Value_Random_line_In_Array(A,&line,columns,random);
    Output_Element_In_Array(A,line,columns);
    printf("\nDelete Line In Array Have Element Max\n");
    Del_Value_Contain_Value_Max_In_Array(A,&line,columns,locationmax);
    Output_Element_In_Array(A,line,columns);
    printf("\nDelete first columns in Array\n");
    Del_first_Columns_In_Array(A,line,&columns);
    Output_Element_In_Array(A,line,columns);
    printf("\nDelete Random columns element in Array\n");
    printf("\nEnter value random to delete : ");
    scanf("%d",&random3);
    Del_Value_Random_Columns_In_Array(A,line,&columns,random3);
    Output_Element_In_Array(A,line,columns);
    printf("\n Delelete Columns at element x in array \n");
    printf("\nEnter element x to del columns : ");
    scanf("%d",&random);
    locationcollumnss=location_of_element_x(A,line,columns,random);
    Del_Value_At_X_Element(A,line,&columns,locationcollumnss);
    Output_Element_In_Array(A,line,columns);
    // printf("\n OutPut Zero in Diagonal line ");
    // Enter_Element_In_Diagonal_Line(A,line,columns);
    getch();
}