#include"iostream"
using namespace std;
class Array{
    private:
        int A[100];
        int n;
    public:
        void Enter_Size();
        void Enter_Array();
        void Output_Array();
        int Sum_Element_in_Array();
};
void Array::Enter_Size(){
    cout<<"\nEnter size of Array : ";
    cin>>n;
}
void Array::Enter_Array(){
    for(int i=0;i<n;i++){
        cout<<"\n A["<<i<<"]"<<"= ";
        cin>>A[i];
    }
}
void Array::Output_Array(){
    for(int i=0;i<n;i++){
        cout<<"\n A["<<i<<"]"<<"= "<<A[i];
    }
}
int Array::Sum_Element_in_Array(){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    return sum;
}
int main(){
    int n;
    int A[100];
    Array a;
    a.Enter_Size();
    a.Enter_Array();
    a.Output_Array();
    cout<<"\n Sum of element in array : "<<a.Sum_Element_in_Array();
    return 0;
}