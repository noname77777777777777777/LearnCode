#include "iostream"
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    void Enter_Bad_Version(int &bad){
        cout<<"\n Enter Bad Version : ";
        cin>>bad;
    }
    void Enter_n(int &bad){
        cout<<"\n Enter n : ";
        cin>>bad;
    }
    bool check_bad_version(int n,int bad){
        if(n == bad){
            return true;
        }
        return false;
    }
    int firstBadVersion(int n,int bad) {
        int left = 1;
        int right = n  + 1;
        while (left < right)
        {
            int mid = (left + right)/2;
            if(check_bad_version(mid,bad)){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        
        return -1;
    }
};
int main(){
    Solution a;
    int bad;
    int n;
    a.Enter_n(n);
    a.Enter_Bad_Version(bad);
    cout<<a.firstBadVersion(n,bad);
}