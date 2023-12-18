#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i  =  0 ; i < nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
    void Enter_target(int& target){
        cout<<"\n Enter Target : ";
        cin>>target;
    }  
    void Enter_Vector(vector<int>& nums){
        int Amount_Element;
        cout<<"\nEnter Amount Element : ";
        cin>>Amount_Element;
        for(int i = 0 ; i < Amount_Element;i++){
        int x;
        cin>>x;
        nums.push_back(x); 
        }
    }
};
int main(){
    
}