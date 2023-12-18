#include "iostream"
#include "vector"
using namespace std;
class Solution{
    public:
        void Entertarget(int& target); 
        int Search(vector<int>& nums,int target);
};
void Solution::Entertarget(int& target){
    cout<<"\nEnter target : ";
    cin>>target;
}
int Solution::Search(vector<int>& numns,int target){
        for(int i=0;i<numns.size()-1;i++){
            if(numns[i]==target){
                return i;
            }
        }
}
int main(){
    int n;
    int target;
    vector<int> numns={1,3,5,6};
    Solution a;
    a.Entertarget(n);
    a.Search(numns,target);
    return 0;
}