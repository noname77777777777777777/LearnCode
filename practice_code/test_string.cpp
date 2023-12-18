#include"iostream"
#include"cctype"
#include"cstring"
#include"string.h"
using namespace std;
int main(){
    string s="luffy is still joyboy";
    int count=0;
    const int len = s.length();
    for(int i=len-1;i>0;i--){
        if(s[i]==' '&&count>0){
            break;
        }else{
            count++;
        }
    }
    cout<<count;
}