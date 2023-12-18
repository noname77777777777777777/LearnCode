#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        for(int x : nums){
            sum += x;
        }
        for(int i = 0 ; i < nums.size() ; i++){
        if(left == sum - nums[i] - left){
                return i;
            }
            left += nums[i];            
        }
        return -1;
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
    void Output_Vector(vector<int> nums){
        cout<<"\n Result  : ";
        for(int i = 0 ; i < nums.size() ; i++){
            cout<<nums[i];
        }
    }      
};
int main(){
    Solution x;
    vector<int> nums;
    x.Enter_Vector(nums);
    cout<<x.pivotIndex(nums);
}