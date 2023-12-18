#include "iostream"
#include "stack"
#include "string"
using namespace std;
class Solution{
    public:
        bool isValid(const string s){
            stack<char> str;
            for(char c : s){
                 if( c == '(' || c == '[' || c == '{'){
                    str.push(c);
                 }else{
                     if(!str.empty()){
                         char top = str.top();
                        if((top == '(' && c == ')')||(top == '[' && c == ']')||( top == '{' && c == '}')){
                                str.pop();                           
                        }else{
                        return false;
                        }
                    }
                    }
                }
                 return str.empty();
            }
             void Enter_String(string &s){
                 cin>>s;
             }
};
int main(){
    string s;
    Solution a;
    a.Enter_String(s);
    cout<<a.isValid(s);
}