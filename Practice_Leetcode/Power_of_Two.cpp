#include "iostream"
#include "math.h"
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return n == pow(2,n);
        }
        for(int i = 0 ; i < n/2 ; i++){
            return isPowerOfTwo(i);
        }
        return false;
    }
    void Enter_Value(int& n){
        cout<<"\n Enter value : ";
        cin>>n;
    }
};
int main(){
    Solution a;
    int n;
    a.Enter_Value(n);
    cout<<a.isPowerOfTwo(n);
}