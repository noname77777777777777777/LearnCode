#include<stdio.h>
#include<math.h>
//Enter Size of array
void Enter_Size_Of_Array(int* size){
    do{
    printf("\n Enter Size Of Array ");
    scanf("%d",size);
        if((*size)>0){
            break;
        }
    printf("\nYou Entered flase,Please Re-enter\n");
    }while(1);
}
//End If have the same number
bool Check_Same_Number(int A[],int size,int check){
    for(int i=0;i<size;i++){
        if(A[i]==check){
            return false;
        }
    }
    return true;
}
//  Enter Element In Array 
void Enter_Element_In_Array(int A[],int size){
    int check;
    for(int i=0;i<size;i++){
        printf("\n A[%d] = ",i);
        scanf("%d",&check);
        if(Check_Same_Number(A,size,check)==false){
            printf("\n You input has been dupicated \n");
            i--;
        }else{
            A[i]=check;
        }
        
    }
}
//Output Element In array
void Output_element_In_Array(int A[],int size){
    printf("\n Output Element In array \n");
    for(int i=0;i<size;i++){
        printf("A[%d] = %d\t",i,A[i]);
    }
}
//check  perfect square number
bool Check_Perfect_Square_Number(int n){
    int spr=sqrt(n);
    return (spr*spr==n);
}
//Out perfect square number in array at odd locattion
void Output_Perfect_Number_At_Odd_Location(int A[],int size){
    printf("\noutput perfect square number in array at odd location \n");
        for(int i=1;i<size;i+=2){
            if(Check_Perfect_Square_Number(A[i])){
                printf("A[%d] = %d\t",i,A[i]);
            }
        }
}
//Output Max in Array
int Output_Max_In_Array(int A[],int size){
    int max=A[0];
    for(int i=0;i<size;i++){
        if(max<=A[i]){
            max=A[i];
        }
    }
    return max;
}
//Output location max in array
void Output_Location_Max_in_Array(int A[],int size){
    for(int i=0;i<size;i++){
        if(A[i]==Output_Max_In_Array(A,size)){
            printf("\n Location max in array %d \n",i);
        }
    }
}
// find negative element max in array
int Max_negative_Element_In_Array(int A[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(A[i]<0){
            max=A[i];
            break;
        }
    }
    for(int i=0;i<size;i++){
        if(A[i]<0&&A[i]>max){
            max=A[i];
        }
    }
    return max;
}
//find positive element in array
int Min_Positive_Element_In_Array(int A[],int size){
    int min=A[0];
    for(int i=0;i<size;i++){
        if(A[i]>0){
            if(min>A[i]){
                A[i]=min;
            }
        }
    }
    return min;
}
//Calculartor sum of lement at even location in arrray
int Sum_Of_Element_At_Even__Location_In_array(int A[],int size){
    int sum=0;
    for(int i=0;i<size;i+=2){
        sum+=A[i];
    }
    return sum;
}
// sort element in array
void Sort_Element_In_Array(int A[],int size){
    printf("\n Sort Element In Array \n ");
    for(int i=0;i<size;i++){
       for(int j=i+1;j<size;j++){
           if(A[i]>A[j]){
               int temp =A[i];
               A[i]=A[j];
               A[j]=temp;
           }
       }
    }
}
int main(){
    int A[100],size,check;
    Enter_Size_Of_Array(&size);
    Check_Same_Number(A,size,check);
    Enter_Element_In_Array(A,size);
    Output_element_In_Array(A,size);
    Check_Perfect_Square_Number(check);
    Output_Perfect_Number_At_Odd_Location(A,size);
    Output_Max_In_Array(A,size);
    Output_Location_Max_in_Array(A,size);
    printf("\n Element negative max in Array %d \n ",Max_negative_Element_In_Array(A,size));
    printf("\n Element positive  max in Array %d \n ",Min_Positive_Element_In_Array(A,size));
    printf("\nTotal of Even Location In Array is %d ",Sum_Of_Element_At_Even__Location_In_array(A,size));
    Sort_Element_In_Array(A,size);
    Output_element_In_Array(A,size);
}