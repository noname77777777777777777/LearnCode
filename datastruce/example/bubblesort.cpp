#include "iostream"
#include "time.h"
using namespace std;
class bubblesort
{
private:
    int n;
    int A[100];
public:
    void Enter();
    void algorithmbubblesort();
    void result();
    void countloop(int a);
    int find();
};
void bubblesort::Enter(){
    cout<<"\n Enter n : ";
    cin>>n;
    cout<<"\n Enter Element in Array ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
}
void bubblesort::countloop(int a){
    cout<<" \n "<<a<<" : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
void bubblesort::algorithmbubblesort()
{
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
        countloop(i);
    }
}
int bubblesort::find(){
    for(int i=0;i<n;i++){
        if(A[i] == 4){
            return i;
        }
    }
}
void bubblesort::result(){
     cout<<" \n Resutl ===================================================== \n";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    // int n,A[100];
    clock_t tStart = clock();
    bubblesort a;
    a.Enter();
    a.algorithmbubblesort();
    a.result();
    cout<<"\n result find : " <<a.find();
    /* Do your stuff here */
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}