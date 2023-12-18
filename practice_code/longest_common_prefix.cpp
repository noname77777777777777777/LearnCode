#include "iostream"
#include "string.h"
#include"vector"
using namespace std;
class Solution{
    public:
        void Enter_size(int &n){
            cout<<"\n Enter size : ";
            cin>>n;
        }
        void Enter_vector_string(vector<string>& strs,int n){
            //Enter string in vector
            for(int i=0;i<n;i++){
                string s;
                cin>>s;
                cin>>strs[s];
            }

        }
        string longest_common(vector<string>& strs,int n){

        }
};
int main(){
    Solution a;

}
