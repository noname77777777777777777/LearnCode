#include "iostream"
#include "vector"
using namespace std;
class removeelement
{
private:
    vector<int> arr;
    int n;
    int val;  
public:
    void Enterelement();
    int remove();
    void result();
    void testresult();
};
void removeelement::Enterelement(){
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cin>>val;
}
int removeelement::remove(){
    int x=0;
    for(int i =0;i<n;i++){
            if(arr[i] != val){
                x++;
            }else{
                //continue;
            }
    return x;
    }
}
void removeelement::result(){ 
    // for(vector<int>::iterator it = arr.begin();it!=arr.end();it++){
    //     cout<<*it<<endl;
    // }
}

int main(){
    removeelement p;
    p.Enterelement();
    cout<<"Result : "<<p.remove();
}