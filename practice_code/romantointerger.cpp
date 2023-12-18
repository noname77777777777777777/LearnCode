#include "iostream"
#include "string.h"
using namespace std;
class Solution {
    private: 
        string s={I,V,X,L,C,D,M}
    public:
        void Enter_text(string& s);
        int romanToInt(string s);
};
void Solution::Enter_text(string& s){
    cout<<"\n Enter string : ";
    cin>>s;ss
}
int Solution::romanToInt(string s){
    s['I']=1,s['V']=5,s['X']=10,s['L']=50,s['C']=100,s['D']=500,s['M']=1000;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]<s[i+1]){
            sum+=s[i];
        }else if(s[i]>s[i+1]){
            
        }
    }
}
int main(){

}
