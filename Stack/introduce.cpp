#include"iostream"
#include"stack"
using namespace std;
int main(){
    int n;
    stack<int>  st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.top();
}