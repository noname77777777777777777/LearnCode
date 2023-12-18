#include"iostream"
#include"vector"
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        arr.push_back(i);
    }
    for(auto i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}
