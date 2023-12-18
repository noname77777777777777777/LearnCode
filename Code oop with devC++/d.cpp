#include "iostream"
using namespace std;
class Array{
    private:
        int A[100];
        int n;
    public:
        void Enter_Size();
        void Enter_Array();
        void Output_Array();
        int Max_In_Array();
        int amount_element_positive_in_array();
};
void Array::Enter_Size(){
    cout<<"\n Enter size of array : ";
    cin>>n;
}
void Array::Enter_Array(){
    for(int i=0;i<n;i++){
        cout<<"\n A["<<i<<"] = ";
        cin>>A[i];
    }
}
void Array::Output_Array(){
    for(int i=0;i<n;i++){
        cout<<"\nA["<<i<<"] = "<<A[i];
    }
}
int Array::Max_In_Array(){
    int max=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}
int Array::amount_element_positive_in_array(){
    int amount=0;
    for(int i=0;i<n;i++){
        if(A[i]>0){
            amount++;
        }
    }
    return amount;
}
int main(){
    Array a;
    a.Enter_Size();
    a.Enter_Array();
    a.Output_Array();
    cout<<"\n Max in Array :"<<a.Max_In_Array();
    cout<<"\n Amount element positive in array : "<<a.amount_element_positive_in_array();
}   
