#include "iostream"
#include "stack"
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<string> st;
    for(char x:s){
        if(x=='('){
            st.push(x);
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
