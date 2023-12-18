#include"iostream"
using namespace std;
class Solution{
    public:
        void Enter(int& n);
        int climbing_stairs(int n);
};
void Solution::Enter(int& n){
    cout<<"\n Enter n : ";
    cin>>n;
}
int Solution::climbing_stairs(int n){
    
}

int main(){
    int n;
    Solution a;
    a.Enter(n);
    cout<<a.climbing_stairs(n);
}