#include "iostream"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
using namespace std;
int check(char c){
    if(!isupper(c)){
        return 0;
    }
    return 1;
}
int main(){
    char c;
    cin>>c;
    if(check(c)==1){
        cout<<"cc";
    }else
        cout<<"ll";
}