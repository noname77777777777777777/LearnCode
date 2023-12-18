#include "iostream"
#include "unordered_map"
using namespace std;
class Solution {
public:
    unordered_map<int, int> memo;
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }
        int result =  climbStairs(n-1) + climbStairs(n-2);
        memo[n] = result;
        return result;
    }
    void Enter_Value(int& n){
        cout<<"\n Enter Value Analysis : ";
        cin>>n;
    }

};
int main(){
    Solution a;
    int n;
    a.Enter_Value(n);
    cout<<"Result : "<<a.climbStairs(n);
}