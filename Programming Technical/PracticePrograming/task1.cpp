#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100;
// Enter interger number include n element(0<n<=100)
void Enter_Size_Array(int* n){
    do{
        printf("\n Enter size of array\n");
        scanf("%d",n);
            if((*n)>0&&(*n)<=100){
                break;
            }
        printf("\n You Entered false,please Re-Enter");
    }while(1);
}
//Enter Element Random In Array
void Enter_Array(int A[],int n){
    for(int i=0;i<n;i++){
        printf("\nA[%d] = ",i);
        scanf("%d",&A[i]);
    }
}
//Output array 
void Output_array(int A[],int n){
    for(int i=0;i<n;i++){
        printf("A[%d] = %d\t",i,A[i]);
    }
}
//Find first location in Aray Output  value first elemnt
void Output_First_Element(int A[],int n){
    printf("\n Output first element\n");
    for(int i=0;i<n;i++){
        if(i==0){
            printf("\nA[%d] = %d\n",i,A[i]);
        }
    }
}
//Find final element in Aray Output element
void Output_Final_Element(int A[],int n){
    printf("\n Final Element In Array \n ");
    for(int i=0;i<n;i++){
        if(i==(n-1)){
            printf("\nA[%d] = %d\n",i,A[i]);
        }
    }
}
//Find Max In Array
int Max_In_Array(int A[],int n){
    int max=A[0];
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
// count amount element max in array
int Count_Amount_Max_Array(int A[],int n){
    int count=0;
    int max=Max_In_Array(A,n);
    for(int i=0;i<n;i++){
        if(max==A[i]){
            count++;
        }
    }
    return count;
}
// Output location of element max in array
void Output_Location_Element_Max_In_Array(int A[],int n){
    for(int i=0;i<n;i++){
        if(A[i]==Max_In_Array(A,n)){
            printf("\nLocation Max in Array %d \n",i);
        }
    }
}
//Add Element into first Array
void Add_First_Element_In_Array(int A[],int* n){
    for(int i=(*n);i>=0;i--){
        A[i]=A[i-1];
    }
    A[0]=15;
    (*n)++;
}
//Add new Element into Location k in Array
void Add_New_Element_In_Location_K_in_Aray(int A[],int* n,int k,int x){
    printf("\nEnter Location Need Add : ");
    scanf("%d",&k);
    printf("\n Enter Element x : ");
    scanf("%d",&x);
    if(k<0||k>(*n)){
        printf("\n You Entered false \n");
    }
    for(int i=(*n);i>=k;i--){
        A[i]=A[i-1];
    }
    A[k]=x;
    (*n)++;
}
//Delete first element in array
void Delete_First_Element_In_Array(int A[],int (*n)){
    printf("\nDelete first element in array\n");
    for(int i=0;i<(*n);i++){
        A[i]=A[i+1];
    }
    (*n)--;
}
//Delete Element at Location K
void Delete_Element_At_Location_k(int A[],int (*n),int k){
    printf("\nDelete element at location k ");
    scanf("%d",&k);
    if(k<0||k>=(*n)){
        printf("You Entered false");
    }
    for(int i=k;i<(*n);i++){
        A[i]=A[i+1];
    }
    (*n)--;
}
//check Odd number in element 
bool check_number_in_array(int A[],int n){
    for(int i=0;i<n;i++){
        if(A[i]%2!=0){
            return true;
        }
    }
    return false;
}
//Count Amount ODD Element In Array
int Count_Amount_Even_IN_Array(int A[],int n){
    int count=0;
    for(int i=0;i<n;i++){
         if(A[i]%2==0){
             count++;
         }
    }
    return count;
}
// Data processing in array B
void Data_processing_array_B(int A[],int B[],int n){
    printf("\noutput array B\n");
    int k=0;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            B[k++]=A[i];
        }
    }
}
int main(){
    int A[100],n,x,k,m,B[100];
    srand((unsigned int)time(NULL));
    Enter_Size_Array(&n);
    Enter_Array(A,n);
    Output_array(A,n);
    Output_First_Element(A,n);
    Output_Final_Element(A,n);
    printf("\nThe Value Max In Array is %d ",Max_In_Array(A,n));
    printf("\nAmount Element Max In Array %d ",Count_Amount_Max_Array(A,n));
    Output_Location_Element_Max_In_Array(A,n);
    Add_First_Element_In_Array(A,&n);
    printf("\n Add First Element In Array: \n");
    Output_array(A,n);
    Add_New_Element_In_Location_K_in_Aray(A,&n,k,x);
    Output_array(A,n);
    Delete_First_Element_In_Array(A,&n);
    Output_array(A,n);
    Delete_Element_At_Location_k(A,&n,k);
    Output_array(A,n);
    if(check_number_in_array(A,n)==true){
        printf("\n Array had contain odd number\n");
    }else{
        printf("\n Array hadn't contain odd number\n");
    }
    int count=Count_Amount_Even_IN_Array(A,n);
    Data_processing_array_B(A,B,n);
    Output_array(B,count);
}