#include "iostream"
using namespace std;
class Sort{
    private:
        int n;
        int x;
        int A[100];
    public:
        void Menu();
        void Setup_Main();
        void Enter_Amount_Element(int& n);
        void Enter_Array();
        void Out_Array();
        void Selection_Sort();
        void Bubble_Sort();
        void InterChange_Sort();
        void Insertion_Sort();
        void Quick_Sort(int l,int r);
        void Radix_Sort();
        void Merge_sort();
};
void Sort::Menu(){
    cout<<"\n==============================================\n";
    cout<<"\n=1.Enter Amount Array                        =\n";
    cout<<"\n=2.Enter Array                               =\n";
    cout<<"\n=3.Output Array                              =\n";
    cout<<"\n=4.Sort by selection sort                    =\n";
    cout<<"\n=5.Sort by Bubble sort                       =\n";
    cout<<"\n=6.Sort by Interchange Sort                  =\n";
    cout<<"\n=7.Sort by Insertion Sort                    =\n";    
    cout<<"\n=8.Sort by Quick Sort                        =\n";
    cout<<"\n==============================================\n";
}
void Swap(int &a,int  &b){
    int temp = a;
    a = b;
    b = temp;
}
void Sort::Insertion_Sort(){
    for(int i = 1 ;i<n-1;i++){
        int index = i;
        int value = A[i];
        while (index > 0 && A[index - 1]>value)
        {
            A[index] = A[index - 1];
            index --;
        }
        A[index] = value;
    }
}
void Sort::Quick_Sort(int l,int r){
    int mid = A[(l+r)/2];
    int i = r ; int j = l;
    while (i<j)
    {
        while(A[i]<mid){
            i++;
        }
        while (A[j]>mid)
        {
            j--;
        }
        if(i<=j){
            Swap(A[i],A[j]);
            i++;
            j--;
        }
    }
    if(i<r){
        Quick_Sort(i,r);
    }
    if(l<j){
        Quick_Sort(l,j);
    }
}
void Sort::InterChange_Sort(){
    for(int i = 0;i<n-1;i++){
        for(int j = i+1 ;j<n;j++){
            if(A[i]>A[j]){
                Swap(A[i],A[j]);
            }
        }
    }
}
void Sort::Bubble_Sort(){
    bool check_sort = false;
    for(int i = 1;i<n-1;i++){
        check_sort = false;
        for(int j=0;j>n-i-1;j++){
            if(A[j]>A[j+1]){
                Swap(A[j],A[j+1]);
                check_sort = true;
            }
        }
        if(check_sort == false){
            break;
        }
    }
}
void Sort::Enter_Amount_Element(int& n){
    cout<<"\n Enter amount element in array : ";
    cin>>n;
}
void Sort::Enter_Array(){
    for(int i = 0;i<n;i++){
        cout<<"\n Enter A["<<i<<"] = ";
        cin>>A[i];
    }
}
void Sort::Out_Array(){
    for(int i=0;i<n;i++){
        cout<<"\n A["<<i<<"] =  "<<A[i];
    }
}

void Sort::Selection_Sort(){
    int min;
    for(int i = 0 ;i<n-1;i++){
        min = i ;
        for(int j = i+1 ;j<n;j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        if(min != i){
            Swap(A[i],A[min]);
        }
    }
}
void Sort::Setup_Main(){
    do{
        Menu();
        cout<<"\n Press number from keyboard :  ";
        cin>>x;
        switch (x)
        {
        case 1:
            Enter_Amount_Element(n);
            break;
        case 2:
            Enter_Array();
            break;
        case 3:
            Out_Array();
            break;
        case 4:
            Selection_Sort();
            break;
        case 5:
            Bubble_Sort();
            break;
        case 6:
            InterChange_Sort();
            break;
        case 7:
            Insertion_Sort();
            break;
        case 8:
            Quick_Sort(0,n-1);
            break;
        default:
            cout<<"\n You Entered false , please re-enter ";
            break;      
        }
        if(x==9){
            break;
        }
    }while(1);
}
int main(){
    int x,n,A[100];
    Sort a;
    a.Setup_Main();
    return 0;
}