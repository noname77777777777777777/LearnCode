#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int index =0 ;
        int a = nums.size();
        int A[100];
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            count = nums[i] + count;
            A[index] = count;
            index++;
        }
        for(int i = 0 ; i < a ; i++){
            nums[i] = A[i];
        }
        return nums;
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
    Solution z;
    vector<int> nums;
    z.Enter_Vector(nums);
    z.Output_Vector(z.runningSum(nums));
}