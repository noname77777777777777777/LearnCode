#include<stdio.h>
#include<stdlib.h>
void Enter_Size_Of_Array(int* size){
    do{
        printf("\n Enter Size of Array ");
        scanf("%d",size);
        if((*size)>0){
            break;
        }
        printf("\nYou Entered is false, please re-enter\n");
    }while(1);
}
void Enter_Array(int* A,int size){
    printf("\n Enter Element in Array\n");
    for(int i=0;i<size;i++){
        printf("A[%d] = \t",i);
        scanf("%d",(A+i));
    }
}
void Output_Array(int* A,int* size){
    for(int i=0;i<(*size);i++){
        printf("A[%d] = %d\t ",i,A[i]);
    }
}
// Output odd value in array
void Odd_Value_In_Array(int* A,int size){
    printf("\nOutput Odd value in arrray\n");
    for(int i=0;i<size;i++){
        if(A[i]%2!=0){
            printf("A[%d] = %d\t",i,A[i]);
        }
    }
}
//Output max value
int Max_Value_in_Array(int* A,int size){
    int max=A[0];
    for(int i=0;i<size;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
//delete element have max value in array
void Delete_Max_Value(int* A,int* size){
    printf("\nDelete Max In Array\n");
    for(int i=0;i<*size;i++){
        if(Max_Value_in_Array(A,*size)==A[i]){
            A[i]=A[i+1];
        }
    }
    (*size)--;
}
// sort Array A in ascending order
void Sort_A_Increase(int* A,int* size){
       printf("\n Sort Array A in ascending order \n");
    for(int i=0;i<(*size);i++){
        for(int j=i+1;j<(*size);j++){
            if(A[i]>A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}
//Add element to array 
void Add_Element_In_Array(int* A,int* size,int element){
     printf("\n Enter Element : ");
     scanf("%d",&element);
    (*size)++;
    A=(int*)realloc(A,(*size)*sizeof(int));
    int i=(*size);
    while (i>0&&A[i-1]>element)
    {
        A[i]=A[i+1];
        i--;
    }
    A[i]=element;
}
int main(){
    int* A;
    int size,element;
    A=(int*)malloc(size*sizeof(int));
    Enter_Size_Of_Array(&size);
    Enter_Array(A,size);
    Odd_Value_In_Array(A,size);
    Sort_A_Increase(A,&size);
    Output_Array(A,&size);
    Max_Value_in_Array(A,size);
    Delete_Max_Value(A,&size);
    Output_Array(A,&size);
    Add_Element_In_Array(A,&size,element);
    Output_Array(A,&size);
    Add_Element_In_Array(A,&size,element);
    Output_Array(A,&size);  
    free(A);
    return 0;
} 