#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        n = nums1.size();
        m = nums2.size();
        int size = n + m;
        for(int i = 0 ; i < m ; i++)
        {
          nums1.push_back(nums2[i]); 
        }
        return nums1;
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
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);                
            }
            cout<<nums[i];
        }
    }
                    
};
int main(){
    vector<int> nums1;
    vector<int> nums2;
    int n,m;
    Solution a;
    a.Enter_Vector(nums1);
    a.Enter_Vector(nums2);
    a.Output_Vector(a.merge(nums1,n,nums2,m));
}