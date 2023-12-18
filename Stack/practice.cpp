#include "iostream"
#include "stack"
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if((s[i])=='('){
            st.push(s[i]);
        }else{
            if(st.empty()){
                cout<<"True";
                return 0;
            }else{
                st.pop();
            }
        }
        if(st.empty()==0){
            cout<<"True";
        }
        else
            cout<<"False";
        return 0;
    }
}