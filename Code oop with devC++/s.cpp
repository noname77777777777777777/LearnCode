#include "iostream"
using namespace std;
int main(){
    int n,A[100];
    cout<<"\n Enter n : ";
    cin>>n;
    cout<<"\n Enter Element in Array ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        bool check = false;
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
               swap(A[j],A[j+1]);
                check = true;	
            }
        }
        if(check == false){
            break;
        }
    }
    cout<<" \n Resutl ===================================================== \n";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
