#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
void Enter_Size_Of_Array(int &n){
    do{
        cout<<"Enter Size of Array A[0..."<<MAX<<"] ";
        cin>>n;
        if(n<=100&&n>0)
            break;
        cout<<"You Entered false , please Re-Enter"<<endl;
    }while(1);
}
void Enter_The_Element_in_Aray(int A[],int n){
    for(int i=0;i<n;i++){
        A[i]=rand()%49+1;
    }
}
void Output_Array(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
}
int Find_Element_Have_Value_x(int A[],int n,int x){
    for(int i=0;i<n;i++){
        if(A[i]==x){
            return i;
        }
    }
    return -1;
}
int find_max_in_array(int A[],int n){
    int max=A[0];
    for(int i=0;i<n;i++){
        if(max<A[i]){
            return max;           
        }
    }
    return -1;
}
void del_first_element_in_array(int A[],int &n){
    for(int i=0;i<=n-2;i++){
        A[i]=A[i+1];
    }
    n--;
}
void insert_element_in_first_array(int A[],int &n,int b){
    for(int i=n;1<=i;i--){
        A[i]=A[i-1];
    }
    A[0]=b;
    n++;
}
int main(){
    int n,x,b;
    int A[MAX];
    Enter_Size_Of_Array(n);
    Enter_The_Element_in_Aray(A,n);
    Output_Array(A,n);
    cout<<"Enter Value x ";
    cin>>x;
    cout<<Find_Element_Have_Value_x(A,n,x)<<endl;
    cout<<"Find element max in array"<<endl;
    cout<<find_max_in_array(A,n)<<endl;
    cout<<"Array before del first element in array"<<endl;
    del_first_element_in_array(A,n);
    Output_Array(A,n);
    cout<<"Enter value x need insert ";
    cin>>b;
    insert_element_in_first_array(A,n,b);
    Output_Array(A,n);
}