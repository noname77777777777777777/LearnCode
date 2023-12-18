#include "iostream"
#include "string"
#include "unordered_set"
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int count = 0;
        bool check = false;
        bool check1 =false;
        unordered_set<char> finds;
        for(int i = 0 ; i < s.length() ;i++){
            if(finds.find(s[i]) != finds.end()){
                check = true;
            }
            finds.insert(s[i]);
        }
        unordered_set<char>  findt;
        for(int i = 0 ; i < t.length() ;i++){
            if(findt.find(t[i]) != findt.end()){
                check1 = true;
            }
            findt.insert(t[i]);
        }
        cout<<"\n check   "<<check;
        cout<<"\n check1 "<<check1;
        cout<<"\n";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == t[i]){
                count++;   
            }
        }
        if(count >=1){
            if(check1 || check){
                return false;
            }
            return true;
        }else if(check1 && check){
                return true;
        }
        return false;
    }
    void Enter_String(string& s,string& t){
        cout<<"\n Enter string s : ";
        cin>>s;
        cout<<"\n Enter string t : ";
        cin>>t;
    }
};
int main(){
    string a;
    string b;
    Solution z;
    z.Enter_String(a,b);
    cout<<"\n result"<<z.isIsomorphic(a,b);
}